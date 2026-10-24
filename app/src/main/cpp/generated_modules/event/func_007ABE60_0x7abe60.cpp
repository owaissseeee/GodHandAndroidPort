#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: func_007ABE60
// Address: 0x7abe60 - 0x7abf70
void func_007ABE60_0x7abe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007ABE60_0x7abe60");
#endif

    switch (ctx->pc) {
        case 0x7abec8u: goto label_7abec8;
        case 0x7abf24u: goto label_7abf24;
        default: break;
    }

    ctx->pc = 0x7abe60u;

    // 0x7abe60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7abe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7abe64: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x7abe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x7abe68: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x7abe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x7abe6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x7abe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x7abe70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7abe70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abe74: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x7abe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x7abe78: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x7abe78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abe7c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x7abe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x7abe80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x7abe80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abe84: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7abe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7abe88: 0x24564700  addiu       $s6, $v0, 0x4700
    ctx->pc = 0x7abe88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x7abe8c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x7abe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x7abe90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x7abe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7abe94: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x7abe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x7abe98: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x7abe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x7abe9c: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x7ABE9Cu;
    {
        const bool branch_taken_0x7abe9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABE9Cu;
        // 0x7abea0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abe9c) {
            ctx->pc = 0x7ABF3Cu;
            goto label_7abf3c;
        }
    }
    ctx->pc = 0x7ABEA4u;
    // 0x7abea4: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x7abea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x7abea8: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x7ABEA8u;
    {
        const bool branch_taken_0x7abea8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7ABEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABEA8u;
        // 0x7abeac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abea8) {
            ctx->pc = 0x7ABF3Cu;
            goto label_7abf3c;
        }
    }
    ctx->pc = 0x7ABEB0u;
    // 0x7abeb0: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7abeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7abeb4: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x7abeb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7abeb8: 0x24525030  addiu       $s2, $v0, 0x5030
    ctx->pc = 0x7abeb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20528));
    // 0x7abebc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x7abebcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7abec0: 0x26d00080  addiu       $s0, $s6, 0x80
    ctx->pc = 0x7abec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x7abec4: 0x0  nop
    ctx->pc = 0x7abec4u;
    // NOP
label_7abec8:
    // 0x7abec8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x7abec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x7abecc: 0x54550016  bnel        $v0, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x7ABECCu;
    {
        const bool branch_taken_0x7abecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7abecc) {
            ctx->pc = 0x7ABED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABECCu;
            // 0x7abed0: 0x8ec20078  lw          $v0, 0x78($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABF28u;
            goto label_7abf28;
        }
    }
    ctx->pc = 0x7ABED4u;
    // 0x7abed4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x7abed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7abed8: 0x54540013  bnel        $v0, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x7ABED8u;
    {
        const bool branch_taken_0x7abed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x7abed8) {
            ctx->pc = 0x7ABEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABED8u;
            // 0x7abedc: 0x8ec20078  lw          $v0, 0x78($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABF28u;
            goto label_7abf28;
        }
    }
    ctx->pc = 0x7ABEE0u;
    // 0x7abee0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7abee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7abee4: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ABEE4u;
    {
        const bool branch_taken_0x7abee4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x7abee4) {
            ctx->pc = 0x7ABEF8u;
            goto label_7abef8;
        }
    }
    ctx->pc = 0x7ABEECu;
    // 0x7abeec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x7abeecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7abef0: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x7abef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x7abef4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x7abef4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_7abef8:
    // 0x7abef8: 0x163e0003  bne         $s1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x7ABEF8u;
    {
        const bool branch_taken_0x7abef8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        if (branch_taken_0x7abef8) {
            ctx->pc = 0x7ABF08u;
            goto label_7abf08;
        }
    }
    ctx->pc = 0x7ABF00u;
    // 0x7abf00: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x7abf00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7abf04: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7abf04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_7abf08:
    // 0x7abf08: 0x56370007  bnel        $s1, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x7ABF08u;
    {
        const bool branch_taken_0x7abf08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x7abf08) {
            ctx->pc = 0x7ABF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABF08u;
            // 0x7abf0c: 0x8ec20078  lw          $v0, 0x78($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABF28u;
            goto label_7abf28;
        }
    }
    ctx->pc = 0x7ABF10u;
    // 0x7abf10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x7abf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x7abf14: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x7abf14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x7abf18: 0x24444700  addiu       $a0, $v0, 0x4700
    ctx->pc = 0x7abf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x7abf1c: 0xc0b6456  jal         func_2D9158
    ctx->pc = 0x7ABF1Cu;
    SET_GPR_U32(ctx, 31, 0x7ABF24u);
    ctx->pc = 0x7ABF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABF1Cu;
    // 0x7abf20: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9158u, 0x7ABF1Cu, 0x7ABF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABF24u;
label_7abf24:
    // 0x7abf24: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x7abf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
label_7abf28:
    // 0x7abf28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x7abf28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x7abf2c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x7abf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x7abf30: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x7abf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7abf34: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x7ABF34u;
    {
        const bool branch_taken_0x7abf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7ABF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABF34u;
        // 0x7abf38: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abf34) {
            ctx->pc = 0x7ABEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7abec8;
        }
    }
    ctx->pc = 0x7ABF3Cu;
label_7abf3c:
    // 0x7abf3c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7abf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7abf40: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7abf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7abf44: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7abf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7abf48: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7abf48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7abf4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7abf4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7abf50: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7abf50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7abf54: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7abf54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7abf58: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x7abf58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7abf5c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x7abf5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7abf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7abf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7abf64: 0x3e00008  jr          $ra
    ctx->pc = 0x7ABF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ABF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABF64u;
        // 0x7abf68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ABF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ABF6Cu;
    // 0x7abf6c: 0x0  nop
    ctx->pc = 0x7abf6cu;
    // NOP
    ctx->pc = 0x7abf70u;
}
} // namespace gh_event
