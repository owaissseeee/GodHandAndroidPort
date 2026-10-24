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
// Function: debugSetPlayMode__9cEventEnv14eEventPlayMode
// Address: 0x7ad628 - 0x7ad700
void debugSetPlayMode__9cEventEnv14eEventPlayMode_0x7ad628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugSetPlayMode__9cEventEnv14eEventPlayMode_0x7ad628");
#endif

    switch (ctx->pc) {
        case 0x7ad648u: goto label_7ad648;
        case 0x7ad65cu: goto label_7ad65c;
        case 0x7ad670u: goto label_7ad670;
        case 0x7ad6e0u: goto label_7ad6e0;
        case 0x7ad6f0u: goto label_7ad6f0;
        default: break;
    }

    ctx->pc = 0x7ad628u;

    // 0x7ad628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ad628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ad62c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7ad62cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7ad630: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ad630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ad634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ad634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad63c: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x7ad63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x7ad640: 0xc1eba4a  jal         func_7AE928
    ctx->pc = 0x7AD640u;
    SET_GPR_U32(ctx, 31, 0x7AD648u);
    ctx->pc = 0x7AD644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD640u;
    // 0x7ad644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE928u, 0x7AD640u, 0x7AD648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD648u;
label_7ad648:
    // 0x7ad648: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x7ad648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ad64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad650: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x7ad650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ad654: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7AD654u;
    SET_GPR_U32(ctx, 31, 0x7AD65Cu);
    ctx->pc = 0x7AD658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD654u;
    // 0x7ad658: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7AD654u, 0x7AD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD65Cu;
label_7ad65c:
    // 0x7ad65c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x7ad65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad660: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x7AD660u;
    {
        const bool branch_taken_0x7ad660 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x7AD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD660u;
        // 0x7ad664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad660) {
            ctx->pc = 0x7AD694u;
            goto label_7ad694;
        }
    }
    ctx->pc = 0x7AD668u;
    // 0x7ad668: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ad668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ad66c: 0x0  nop
    ctx->pc = 0x7ad66cu;
    // NOP
label_7ad670:
    // 0x7ad670: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x7ad670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x7ad674: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x7ad674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7ad678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7ad678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7ad67c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x7ad67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad680: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x7ad680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x7ad684: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7ad684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad688: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x7ad688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7ad68c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7AD68Cu;
    {
        const bool branch_taken_0x7ad68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ad68c) {
            ctx->pc = 0x7AD690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD68Cu;
            // 0x7ad690: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ad670;
        }
    }
    ctx->pc = 0x7AD694u;
label_7ad694:
    // 0x7ad694: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7ad694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad698: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x7ad698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7ad69c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x7ad69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ad6a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7ad6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ad6a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7ad6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7ad6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ad6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ad6ac: 0xa044fff1  sb          $a0, -0xF($v0)
    ctx->pc = 0x7ad6acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967281), (uint8_t)GPR_U32(ctx, 4));
    // 0x7ad6b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x7ad6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7ad6b4: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AD6B4u;
    {
        const bool branch_taken_0x7ad6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x7AD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD6B4u;
        // 0x7ad6b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad6b4) {
            ctx->pc = 0x7AD6D8u;
            goto label_7ad6d8;
        }
    }
    ctx->pc = 0x7AD6BCu;
    // 0x7ad6bc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7AD6BCu;
    {
        const bool branch_taken_0x7ad6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ad6bc) {
            ctx->pc = 0x7AD6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD6BCu;
            // 0x7ad6c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD6F4u;
            goto label_7ad6f4;
        }
    }
    ctx->pc = 0x7AD6C4u;
    // 0x7ad6c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7ad6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7ad6c8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AD6C8u;
    {
        const bool branch_taken_0x7ad6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x7ad6c8) {
            ctx->pc = 0x7AD6E8u;
            goto label_7ad6e8;
        }
    }
    ctx->pc = 0x7AD6D0u;
    // 0x7ad6d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7AD6D0u;
    {
        const bool branch_taken_0x7ad6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD6D0u;
        // 0x7ad6d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad6d0) {
            ctx->pc = 0x7AD6F4u;
            goto label_7ad6f4;
        }
    }
    ctx->pc = 0x7AD6D8u;
label_7ad6d8:
    // 0x7ad6d8: 0xc1eb5c0  jal         func_7AD700
    ctx->pc = 0x7AD6D8u;
    SET_GPR_U32(ctx, 31, 0x7AD6E0u);
    ctx->pc = 0x7AD6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD6D8u;
    // 0x7ad6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AD700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AD700u, 0x7AD6D8u, 0x7AD6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD6E0u;
label_7ad6e0:
    // 0x7ad6e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7AD6E0u;
    {
        const bool branch_taken_0x7ad6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD6E0u;
        // 0x7ad6e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad6e0) {
            ctx->pc = 0x7AD6F4u;
            goto label_7ad6f4;
        }
    }
    ctx->pc = 0x7AD6E8u;
label_7ad6e8:
    // 0x7ad6e8: 0xc1eb624  jal         func_7AD890
    ctx->pc = 0x7AD6E8u;
    SET_GPR_U32(ctx, 31, 0x7AD6F0u);
    ctx->pc = 0x7AD6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD6E8u;
    // 0x7ad6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AD890u, 0x7AD6E8u, 0x7AD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD6F0u;
label_7ad6f0:
    // 0x7ad6f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ad6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ad6f4:
    // 0x7ad6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD6F8u;
        // 0x7ad6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD700u;
}
} // namespace gh_event
