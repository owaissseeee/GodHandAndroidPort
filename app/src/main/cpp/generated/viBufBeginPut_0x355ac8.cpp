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

// Function: viBufBeginPut
// Address: 0x355ac8 - 0x355bb8
void viBufBeginPut_0x355ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufBeginPut_0x355ac8");
#endif

    switch (ctx->pc) {
        case 0x355b00u: goto label_355b00;
        default: break;
    }

    ctx->pc = 0x355ac8u;

    // 0x355ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355acc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ad4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x355ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x355ad8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x355ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355adc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x355adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x355ae0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x355ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ae4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x355ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x355ae8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x355ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355aec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x355aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x355af0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x355af0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355af4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x355af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x355af8: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x355AF8u;
    SET_GPR_U32(ctx, 31, 0x355B00u);
    ctx->pc = 0x355AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355AF8u;
    // 0x355afc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x355AF8u, 0x355B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B00u;
label_355b00:
    // 0x355b00: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x355b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x355b04: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x355b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x355b08: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x355b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x355b0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x355b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x355b10: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x355b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x355b14: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x355b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x355b18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x355b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x355b1c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x355b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x355b20: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x355B20u;
    {
        const bool branch_taken_0x355b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b20) {
            ctx->pc = 0x355B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355B20u;
            // 0x355b24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x355B28u;
            goto label_355b28;
        }
    }
    ctx->pc = 0x355B28u;
label_355b28:
    // 0x355b28: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x355b28u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355b2c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x355b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x355b30: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x355b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x355b34: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x355b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x355b38: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x355b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x355b3c: 0x3810  mfhi        $a3
    ctx->pc = 0x355b3cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x355b40: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x355b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x355b44: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x355b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x355b48: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x355B48u;
    {
        const bool branch_taken_0x355b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355b48) {
            ctx->pc = 0x355B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355B48u;
            // 0x355b4c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355B70u;
            goto label_355b70;
        }
    }
    ctx->pc = 0x355B50u;
    // 0x355b50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x355b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x355b54: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x355b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x355b58: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x355b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x355b5c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x355b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x355b60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x355b60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x355b64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x355B64u;
    {
        const bool branch_taken_0x355b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B64u;
        // 0x355b68: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b64) {
            ctx->pc = 0x355B90u;
            goto label_355b90;
        }
    }
    ctx->pc = 0x355B6Cu;
    // 0x355b6c: 0x0  nop
    ctx->pc = 0x355b6cu;
    // NOP
label_355b70:
    // 0x355b70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x355b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x355b74: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x355b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x355b78: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x355b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x355b7c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x355b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x355b80: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x355b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x355b84: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x355b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x355b88: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x355b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x355b8c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x355b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_355b90:
    // 0x355b90: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x355b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x355b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x355b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355b9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x355b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x355ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355ba4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x355ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355ba8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x355ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355bac: 0x80ebf30  j           func_3AFCC0
    ctx->pc = 0x355BACu;
    ctx->pc = 0x355BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BACu;
    // 0x355bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x355BACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x355BB4u;
    // 0x355bb4: 0x0  nop
    ctx->pc = 0x355bb4u;
    // NOP
    ctx->pc = 0x355bb8u;
}
