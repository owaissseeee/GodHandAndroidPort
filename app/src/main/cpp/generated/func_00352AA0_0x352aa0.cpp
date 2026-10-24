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

// Function: func_00352AA0
// Address: 0x352aa0 - 0x352b98
void func_00352AA0_0x352aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352AA0_0x352aa0");
#endif

    ctx->pc = 0x352aa0u;

    // 0x352aa0: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x352aa0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352aa4: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x352aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x352aa8: 0x85a3001c  lh          $v1, 0x1C($t5)
    ctx->pc = 0x352aa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x352aac: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x352aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x352ab0: 0x85a2001e  lh          $v0, 0x1E($t5)
    ctx->pc = 0x352ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 30)));
    // 0x352ab4: 0x240c003c  addiu       $t4, $zero, 0x3C
    ctx->pc = 0x352ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x352ab8: 0x8da70018  lw          $a3, 0x18($t5)
    ctx->pc = 0x352ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x352abc: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x352abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x352ac0: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x352ac0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x352ac4: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x352ac4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x352ac8: 0x8da40014  lw          $a0, 0x14($t5)
    ctx->pc = 0x352ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x352acc: 0xe17c2  srl         $v0, $t6, 31
    ctx->pc = 0x352accu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x352ad0: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x352ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x352ad4: 0xf3080  sll         $a2, $t7, 2
    ctx->pc = 0x352ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x352ad8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x352ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x352adc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x352adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x352ae0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x352ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x352ae4: 0x8c6396c8  lw          $v1, -0x6938($v1)
    ctx->pc = 0x352ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940360)));
    // 0x352ae8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x352ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x352aec: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x352aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x352af0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x352af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x352af4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x352af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x352af8: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x352af8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352afc: 0x8da40010  lw          $a0, 0x10($t5)
    ctx->pc = 0x352afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x352b00: 0x8da6000c  lw          $a2, 0xC($t5)
    ctx->pc = 0x352b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x352b04: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x352B04u;
    {
        const bool branch_taken_0x352b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352b04) {
            ctx->pc = 0x352B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352B04u;
            // 0x352b08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x352B0Cu;
            goto label_352b0c;
        }
    }
    ctx->pc = 0x352B0Cu;
label_352b0c:
    // 0x352b0c: 0x8daa0008  lw          $t2, 0x8($t5)
    ctx->pc = 0x352b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x352b10: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x352b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x352b14: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x352b14u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x352b18: 0x3812  mflo        $a3
    ctx->pc = 0x352b18u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x352b1c: 0x4810  mfhi        $t1
    ctx->pc = 0x352b1cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x352b20: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x352b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x352b24: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x352b24u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352b28: 0x2012  mflo        $a0
    ctx->pc = 0x352b28u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x352b2c: 0x3810  mfhi        $a3
    ctx->pc = 0x352b2cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x352b30: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x352b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x352b34: 0xc8001a  div         $zero, $a2, $t0
    ctx->pc = 0x352b34u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352b38: 0x3012  mflo        $a2
    ctx->pc = 0x352b38u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x352b3c: 0x2010  mfhi        $a0
    ctx->pc = 0x352b3cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x352b40: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x352B40u;
    {
        const bool branch_taken_0x352b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B40u;
        // 0x352b44: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b40) {
            ctx->pc = 0x352B74u;
            goto label_352b74;
        }
    }
    ctx->pc = 0x352B48u;
    // 0x352b48: 0x54e0000b  bnel        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x352B48u;
    {
        const bool branch_taken_0x352b48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x352b48) {
            ctx->pc = 0x352B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352B48u;
            // 0x352b4c: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352B78u;
            goto label_352b78;
        }
    }
    ctx->pc = 0x352B50u;
    // 0x352b50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x352b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x352b54: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x352b54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352b58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x352B58u;
    {
        const bool branch_taken_0x352b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352b58) {
            ctx->pc = 0x352B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352B58u;
            // 0x352b5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x352B60u;
            goto label_352b60;
        }
    }
    ctx->pc = 0x352B60u;
label_352b60:
    // 0x352b60: 0x1810  mfhi        $v1
    ctx->pc = 0x352b60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x352b64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x352B64u;
    {
        const bool branch_taken_0x352b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B64u;
        // 0x352b68: 0x2d230002  sltiu       $v1, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b64) {
            ctx->pc = 0x352B74u;
            goto label_352b74;
        }
    }
    ctx->pc = 0x352B6Cu;
    // 0x352b6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x352b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x352b70: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x352b70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_352b74:
    // 0x352b74: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x352b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
label_352b78:
    // 0x352b78: 0xa4ae001e  sh          $t6, 0x1E($a1)
    ctx->pc = 0x352b78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 14));
    // 0x352b7c: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x352b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x352b80: 0xacaa0008  sw          $t2, 0x8($a1)
    ctx->pc = 0x352b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x352b84: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x352b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x352b88: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x352b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x352b8c: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x352b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x352b90: 0x3e00008  jr          $ra
    ctx->pc = 0x352B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B90u;
        // 0x352b94: 0xaca90014  sw          $t1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352B98u;
}
