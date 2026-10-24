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
// Function: func_007A8300
// Address: 0x7a8300 - 0x7a83d8
void func_007A8300_0x7a8300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007A8300_0x7a8300");
#endif

    switch (ctx->pc) {
        case 0x7a8334u: goto label_7a8334;
        case 0x7a834cu: goto label_7a834c;
        case 0x7a8364u: goto label_7a8364;
        case 0x7a837cu: goto label_7a837c;
        case 0x7a83b0u: goto label_7a83b0;
        default: break;
    }

    ctx->pc = 0x7a8300u;

    // 0x7a8300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7a8300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7a8304: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7a8304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7a8308: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7a8308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7a830c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7a830cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8310: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7a8310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7a8314: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x7A8314u;
    {
        const bool branch_taken_0x7a8314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8314u;
        // 0x7a8318: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8314) {
            ctx->pc = 0x7A83C0u;
            goto label_7a83c0;
        }
    }
    ctx->pc = 0x7A831Cu;
    // 0x7a831c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x7A831Cu;
    {
        const bool branch_taken_0x7a831c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A831Cu;
        // 0x7a8320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a831c) {
            ctx->pc = 0x7A83C0u;
            goto label_7a83c0;
        }
    }
    ctx->pc = 0x7A8324u;
    // 0x7a8324: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x7a8324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7a8328: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7a8328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a832c: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A832Cu;
    SET_GPR_U32(ctx, 31, 0x7A8334u);
    ctx->pc = 0x7A8330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A832Cu;
    // 0x7a8330: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A832Cu, 0x7A8334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8334u;
label_7a8334:
    // 0x7a8334: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x7A8334u;
    {
        const bool branch_taken_0x7a8334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8334u;
        // 0x7a8338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8334) {
            ctx->pc = 0x7A83C0u;
            goto label_7a83c0;
        }
    }
    ctx->pc = 0x7A833Cu;
    // 0x7a833c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x7a833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7a8340: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7a8340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8344: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A8344u;
    SET_GPR_U32(ctx, 31, 0x7A834Cu);
    ctx->pc = 0x7A8348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8344u;
    // 0x7a8348: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A8344u, 0x7A834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A834Cu;
label_7a834c:
    // 0x7a834c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x7A834Cu;
    {
        const bool branch_taken_0x7a834c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A834Cu;
        // 0x7a8350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a834c) {
            ctx->pc = 0x7A83C0u;
            goto label_7a83c0;
        }
    }
    ctx->pc = 0x7A8354u;
    // 0x7a8354: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x7a8354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7a8358: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7a8358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a835c: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A835Cu;
    SET_GPR_U32(ctx, 31, 0x7A8364u);
    ctx->pc = 0x7A8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A835Cu;
    // 0x7a8360: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A835Cu, 0x7A8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8364u;
label_7a8364:
    // 0x7a8364: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7A8364u;
    {
        const bool branch_taken_0x7a8364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8364u;
        // 0x7a8368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8364) {
            ctx->pc = 0x7A83C0u;
            goto label_7a83c0;
        }
    }
    ctx->pc = 0x7A836Cu;
    // 0x7a836c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7a836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7a8370: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7a8370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8374: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A8374u;
    SET_GPR_U32(ctx, 31, 0x7A837Cu);
    ctx->pc = 0x7A8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8374u;
    // 0x7a8378: 0x24070012  addiu       $a3, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A8374u, 0x7A837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A837Cu;
label_7a837c:
    // 0x7a837c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7A837Cu;
    {
        const bool branch_taken_0x7a837c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A837Cu;
        // 0x7a8380: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a837c) {
            ctx->pc = 0x7A83C0u;
            goto label_7a83c0;
        }
    }
    ctx->pc = 0x7A8384u;
    // 0x7a8384: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x7a8384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x7a8388: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a8388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a838c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7a838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a8390: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x7a8390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7a8394: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a8394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a8398: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a8398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a839c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7a839cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a83a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7a83a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a83a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7a83a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7a83a8: 0xc0ae162  jal         func_2B8588
    ctx->pc = 0x7A83A8u;
    SET_GPR_U32(ctx, 31, 0x7A83B0u);
    ctx->pc = 0x7A83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A83A8u;
    // 0x7a83ac: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8588u, 0x7A83A8u, 0x7A83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A83B0u;
label_7a83b0:
    // 0x7a83b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7a83b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a83b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7a83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a83b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A83B8u;
    {
        const bool branch_taken_0x7a83b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A83B8u;
        // 0x7a83bc: 0xae0330a4  sw          $v1, 0x30A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a83b8) {
            ctx->pc = 0x7A83C4u;
            goto label_7a83c4;
        }
    }
    ctx->pc = 0x7A83C0u;
label_7a83c0:
    // 0x7a83c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7a83c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a83c4:
    // 0x7a83c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7a83c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7a83c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7a83c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a83cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7a83ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a83d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7A83D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A83D0u;
        // 0x7a83d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A83D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A83D8u;
}
} // namespace gh_event
