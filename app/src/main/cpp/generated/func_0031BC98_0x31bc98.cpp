#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0031BC98
// Address: 0x31bc98 - 0x31bd78
void func_0031BC98_0x31bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031BC98_0x31bc98");
#endif

    ctx->pc = 0x31bc98u;

    // 0x31bc98: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x31bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31bc9c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x31bc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bca0: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x31bca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x31bca4: 0x1053821  addu        $a3, $t0, $a1
    ctx->pc = 0x31bca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x31bca8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x31bca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31bcac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31bcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31bcb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31BCB0u;
    {
        const bool branch_taken_0x31bcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCB0u;
        // 0x31bcb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcb0) {
            ctx->pc = 0x31BCBCu;
            goto label_31bcbc;
        }
    }
    ctx->pc = 0x31BCB8u;
    // 0x31bcb8: 0xa1020360  sb          $v0, 0x360($t0)
    ctx->pc = 0x31bcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 864), (uint8_t)GPR_U32(ctx, 2));
label_31bcbc:
    // 0x31bcbc: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x31bcbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31bcc0: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x31bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x31bcc4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31BCC4u;
    {
        const bool branch_taken_0x31bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCC4u;
        // 0x31bcc8: 0x30c60003  andi        $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcc4) {
            ctx->pc = 0x31BD04u;
            goto label_31bd04;
        }
    }
    ctx->pc = 0x31BCCCu;
    // 0x31bccc: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x31bcccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x31bcd0: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x31bcd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x31bcd4: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x31bcd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x31bcd8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31bcdc: 0x90e50002  lbu         $a1, 0x2($a3)
    ctx->pc = 0x31bcdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x31bce0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31bce4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x31bce4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31bce8: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x31bce8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x31bcec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31BCECu;
    {
        const bool branch_taken_0x31bcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bcec) {
            ctx->pc = 0x31BCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BCECu;
            // 0x31bcf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BCF4u;
            goto label_31bcf4;
        }
    }
    ctx->pc = 0x31BCF4u;
label_31bcf4:
    // 0x31bcf4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x31bcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x31bcf8: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x31bcf8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x31bcfc: 0x1012  mflo        $v0
    ctx->pc = 0x31bcfcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31bd00: 0xa4e2000a  sh          $v0, 0xA($a3)
    ctx->pc = 0x31bd00u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 2));
label_31bd04:
    // 0x31bd04: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x31bd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31bd08: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31bd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x31bd0c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x31BD0Cu;
    {
        const bool branch_taken_0x31bd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bd0c) {
            ctx->pc = 0x31BD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BD0Cu;
            // 0x31bd10: 0x84e2000a  lh          $v0, 0xA($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BD58u;
            goto label_31bd58;
        }
    }
    ctx->pc = 0x31BD14u;
    // 0x31bd14: 0x84e3000c  lh          $v1, 0xC($a3)
    ctx->pc = 0x31bd14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x31bd18: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31BD18u;
    {
        const bool branch_taken_0x31bd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD18u;
        // 0x31bd1c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd18) {
            ctx->pc = 0x31BD40u;
            goto label_31bd40;
        }
    }
    ctx->pc = 0x31BD20u;
    // 0x31bd20: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x31bd20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x31bd24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31bd28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bd2c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x31bd2cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31bd30: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x31bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x31bd34: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x31bd34u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x31bd38: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x31bd38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x31bd3c: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x31bd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
label_31bd40:
    // 0x31bd40: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x31bd40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x31bd44: 0x91020361  lbu         $v0, 0x361($t0)
    ctx->pc = 0x31bd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 865)));
    // 0x31bd48: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31bd48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31bd4c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31BD4Cu;
    {
        const bool branch_taken_0x31bd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bd4c) {
            ctx->pc = 0x31BD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BD4Cu;
            // 0x31bd50: 0xa1030361  sb          $v1, 0x361($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 865), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BD54u;
            goto label_31bd54;
        }
    }
    ctx->pc = 0x31BD54u;
label_31bd54:
    // 0x31bd54: 0x84e2000a  lh          $v0, 0xA($a3)
    ctx->pc = 0x31bd54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_31bd58:
    // 0x31bd58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BD58u;
    {
        const bool branch_taken_0x31bd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD58u;
        // 0x31bd5c: 0x94e3000a  lhu         $v1, 0xA($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd58) {
            ctx->pc = 0x31BD6Cu;
            goto label_31bd6c;
        }
    }
    ctx->pc = 0x31BD60u;
    // 0x31bd60: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x31bd60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x31bd64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bd68: 0xa4e2000c  sh          $v0, 0xC($a3)
    ctx->pc = 0x31bd68u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 2));
label_31bd6c:
    // 0x31bd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BD74u;
    // 0x31bd74: 0x0  nop
    ctx->pc = 0x31bd74u;
    // NOP
    ctx->pc = 0x31bd78u;
}
