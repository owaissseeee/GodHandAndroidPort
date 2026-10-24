#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: PlayMovie__5cR020i
// Address: 0x79c518 - 0x79c5c0
void PlayMovie__5cR020i_0x79c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayMovie__5cR020i_0x79c518");
#endif

    switch (ctx->pc) {
        case 0x79c558u: goto label_79c558;
        case 0x79c590u: goto label_79c590;
        case 0x79c5a4u: goto label_79c5a4;
        default: break;
    }

    ctx->pc = 0x79c518u;

    // 0x79c518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79c51c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79c520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79c524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79c524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79c52c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x79c52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79c530: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C530u;
    {
        const bool branch_taken_0x79c530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C530u;
        // 0x79c534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c530) {
            ctx->pc = 0x79C548u;
            goto label_79c548;
        }
    }
    ctx->pc = 0x79C538u;
    // 0x79c538: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79C538u;
    {
        const bool branch_taken_0x79c538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C538u;
        // 0x79c53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c538) {
            ctx->pc = 0x79C57Cu;
            goto label_79c57c;
        }
    }
    ctx->pc = 0x79C540u;
    // 0x79c540: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x79C540u;
    {
        const bool branch_taken_0x79c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C540u;
        // 0x79c544: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c540) {
            ctx->pc = 0x79C5ACu;
            goto label_79c5ac;
        }
    }
    ctx->pc = 0x79C548u;
label_79c548:
    // 0x79c548: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x79c548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x79c54c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c550: 0xc0ad2fa  jal         func_2B4BE8
    ctx->pc = 0x79C550u;
    SET_GPR_U32(ctx, 31, 0x79C558u);
    ctx->pc = 0x79C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C550u;
    // 0x79c554: 0x248479d0  addiu       $a0, $a0, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BE8u, 0x79C550u, 0x79C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C558u;
label_79c558:
    // 0x79c558: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x79c558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79c55c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x79c55cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79c560: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x79c560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x79c564: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79c568: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x79c568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x79c56c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x79c56cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x79c570: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x79c570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x79c574: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x79c574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x79c578: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x79c578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_79c57c:
    // 0x79c57c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x79c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x79c580: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x79c580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79c584: 0x245179d0  addiu       $s1, $v0, 0x79D0
    ctx->pc = 0x79c584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 31184));
    // 0x79c588: 0xc0ad3b2  jal         func_2B4EC8
    ctx->pc = 0x79C588u;
    SET_GPR_U32(ctx, 31, 0x79C590u);
    ctx->pc = 0x79C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C588u;
    // 0x79c58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4EC8u, 0x79C588u, 0x79C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C590u;
label_79c590:
    // 0x79c590: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C590u;
    {
        const bool branch_taken_0x79c590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C590u;
        // 0x79c594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c590) {
            ctx->pc = 0x79C5A8u;
            goto label_79c5a8;
        }
    }
    ctx->pc = 0x79C598u;
    // 0x79c598: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x79c598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79c59c: 0xc0ad35a  jal         func_2B4D68
    ctx->pc = 0x79C59Cu;
    SET_GPR_U32(ctx, 31, 0x79C5A4u);
    ctx->pc = 0x79C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C59Cu;
    // 0x79c5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4D68u, 0x79C59Cu, 0x79C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C5A4u;
label_79c5a4:
    // 0x79c5a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79c5a8:
    // 0x79c5a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79c5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79c5ac:
    // 0x79c5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79c5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x79C5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5B4u;
        // 0x79c5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C5BCu;
    // 0x79c5bc: 0x0  nop
    ctx->pc = 0x79c5bcu;
    // NOP
    ctx->pc = 0x79c5c0u;
}
} // namespace gh_r020
