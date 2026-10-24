#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: SetDisp__6cMcSys
// Address: 0x7c7348 - 0x7c7948
void SetDisp__6cMcSys_0x7c7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDisp__6cMcSys_0x7c7348");
#endif

    switch (ctx->pc) {
        case 0x7c7384u: goto label_7c7384;
        case 0x7c7394u: goto label_7c7394;
        case 0x7c73a4u: goto label_7c73a4;
        case 0x7c73b4u: goto label_7c73b4;
        case 0x7c73c4u: goto label_7c73c4;
        case 0x7c73d4u: goto label_7c73d4;
        case 0x7c73e4u: goto label_7c73e4;
        case 0x7c73f4u: goto label_7c73f4;
        case 0x7c7404u: goto label_7c7404;
        case 0x7c7414u: goto label_7c7414;
        case 0x7c7424u: goto label_7c7424;
        case 0x7c7434u: goto label_7c7434;
        case 0x7c7444u: goto label_7c7444;
        case 0x7c7454u: goto label_7c7454;
        case 0x7c7464u: goto label_7c7464;
        case 0x7c7498u: goto label_7c7498;
        case 0x7c74a8u: goto label_7c74a8;
        case 0x7c74c4u: goto label_7c74c4;
        case 0x7c74d4u: goto label_7c74d4;
        case 0x7c74dcu: goto label_7c74dc;
        case 0x7c74f4u: goto label_7c74f4;
        case 0x7c7504u: goto label_7c7504;
        case 0x7c7524u: goto label_7c7524;
        case 0x7c7534u: goto label_7c7534;
        case 0x7c7544u: goto label_7c7544;
        case 0x7c755cu: goto label_7c755c;
        case 0x7c757cu: goto label_7c757c;
        case 0x7c7590u: goto label_7c7590;
        case 0x7c75a0u: goto label_7c75a0;
        case 0x7c75a8u: goto label_7c75a8;
        case 0x7c75b0u: goto label_7c75b0;
        case 0x7c75c8u: goto label_7c75c8;
        case 0x7c75dcu: goto label_7c75dc;
        case 0x7c75ecu: goto label_7c75ec;
        case 0x7c7608u: goto label_7c7608;
        case 0x7c761cu: goto label_7c761c;
        case 0x7c762cu: goto label_7c762c;
        case 0x7c7648u: goto label_7c7648;
        case 0x7c7664u: goto label_7c7664;
        case 0x7c7680u: goto label_7c7680;
        case 0x7c769cu: goto label_7c769c;
        case 0x7c76b8u: goto label_7c76b8;
        case 0x7c76d4u: goto label_7c76d4;
        case 0x7c76e4u: goto label_7c76e4;
        case 0x7c76fcu: goto label_7c76fc;
        case 0x7c771cu: goto label_7c771c;
        case 0x7c773cu: goto label_7c773c;
        case 0x7c7758u: goto label_7c7758;
        case 0x7c7774u: goto label_7c7774;
        case 0x7c7790u: goto label_7c7790;
        case 0x7c77a0u: goto label_7c77a0;
        case 0x7c77b8u: goto label_7c77b8;
        case 0x7c77ccu: goto label_7c77cc;
        case 0x7c77dcu: goto label_7c77dc;
        case 0x7c7814u: goto label_7c7814;
        case 0x7c7828u: goto label_7c7828;
        case 0x7c7838u: goto label_7c7838;
        case 0x7c7858u: goto label_7c7858;
        case 0x7c7870u: goto label_7c7870;
        case 0x7c787cu: goto label_7c787c;
        case 0x7c7894u: goto label_7c7894;
        case 0x7c78a8u: goto label_7c78a8;
        case 0x7c78b4u: goto label_7c78b4;
        case 0x7c78ccu: goto label_7c78cc;
        case 0x7c78dcu: goto label_7c78dc;
        case 0x7c78f4u: goto label_7c78f4;
        case 0x7c7908u: goto label_7c7908;
        case 0x7c7918u: goto label_7c7918;
        case 0x7c7928u: goto label_7c7928;
        case 0x7c7930u: goto label_7c7930;
        case 0x7c7938u: goto label_7c7938;
        default: break;
    }

    ctx->pc = 0x7c7348u;

    // 0x7c7348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c7348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c734c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x7c734cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x7c7350: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c7350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c7354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c7358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c735c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x7c735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c7360: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c7360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c7364: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x7C7364u;
    {
        const bool branch_taken_0x7c7364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7364u;
        // 0x7c7368: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7364) {
            ctx->pc = 0x7C7938u;
            goto label_7c7938;
        }
    }
    ctx->pc = 0x7C736Cu;
    // 0x7c736c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x7c736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x7c7370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7c7370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x7c7374: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c7374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c7378: 0x24062005  addiu       $a2, $zero, 0x2005
    ctx->pc = 0x7c7378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    // 0x7c737c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C737Cu;
    SET_GPR_U32(ctx, 31, 0x7C7384u);
    ctx->pc = 0x7C7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C737Cu;
    // 0x7c7380: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C737Cu, 0x7C7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7384u;
label_7c7384:
    // 0x7c7384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7388: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x7c7388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x7c738c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C738Cu;
    SET_GPR_U32(ctx, 31, 0x7C7394u);
    ctx->pc = 0x7C7390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C738Cu;
    // 0x7c7390: 0x24062005  addiu       $a2, $zero, 0x2005 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C738Cu, 0x7C7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7394u;
label_7c7394:
    // 0x7c7394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7398: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x7c7398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x7c739c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C739Cu;
    SET_GPR_U32(ctx, 31, 0x7C73A4u);
    ctx->pc = 0x7C73A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C739Cu;
    // 0x7c73a0: 0x24062005  addiu       $a2, $zero, 0x2005 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C739Cu, 0x7C73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C73A4u;
label_7c73a4:
    // 0x7c73a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c73a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c73a8: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x7c73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x7c73ac: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C73ACu;
    SET_GPR_U32(ctx, 31, 0x7C73B4u);
    ctx->pc = 0x7C73B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C73ACu;
    // 0x7c73b0: 0x24062005  addiu       $a2, $zero, 0x2005 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C73ACu, 0x7C73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C73B4u;
label_7c73b4:
    // 0x7c73b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c73b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c73b8: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x7c73b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x7c73bc: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C73BCu;
    SET_GPR_U32(ctx, 31, 0x7C73C4u);
    ctx->pc = 0x7C73C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C73BCu;
    // 0x7c73c0: 0x24062005  addiu       $a2, $zero, 0x2005 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C73BCu, 0x7C73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C73C4u;
label_7c73c4:
    // 0x7c73c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c73c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c73c8: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x7c73c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x7c73cc: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C73CCu;
    SET_GPR_U32(ctx, 31, 0x7C73D4u);
    ctx->pc = 0x7C73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C73CCu;
    // 0x7c73d0: 0x24062005  addiu       $a2, $zero, 0x2005 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C73CCu, 0x7C73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C73D4u;
label_7c73d4:
    // 0x7c73d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c73d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c73d8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c73d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c73dc: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C73DCu;
    SET_GPR_U32(ctx, 31, 0x7C73E4u);
    ctx->pc = 0x7C73E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C73DCu;
    // 0x7c73e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C73DCu, 0x7C73E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C73E4u;
label_7c73e4:
    // 0x7c73e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c73e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c73e8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x7c73e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x7c73ec: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C73ECu;
    SET_GPR_U32(ctx, 31, 0x7C73F4u);
    ctx->pc = 0x7C73F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C73ECu;
    // 0x7c73f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C73ECu, 0x7C73F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C73F4u;
label_7c73f4:
    // 0x7c73f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c73f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c73f8: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c73f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c73fc: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C73FCu;
    SET_GPR_U32(ctx, 31, 0x7C7404u);
    ctx->pc = 0x7C7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C73FCu;
    // 0x7c7400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C73FCu, 0x7C7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7404u;
label_7c7404:
    // 0x7c7404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7408: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x7c7408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x7c740c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C740Cu;
    SET_GPR_U32(ctx, 31, 0x7C7414u);
    ctx->pc = 0x7C7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C740Cu;
    // 0x7c7410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C740Cu, 0x7C7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7414u;
label_7c7414:
    // 0x7c7414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7418: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x7c7418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x7c741c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C741Cu;
    SET_GPR_U32(ctx, 31, 0x7C7424u);
    ctx->pc = 0x7C7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C741Cu;
    // 0x7c7420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C741Cu, 0x7C7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7424u;
label_7c7424:
    // 0x7c7424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7428: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x7c7428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7c742c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C742Cu;
    SET_GPR_U32(ctx, 31, 0x7C7434u);
    ctx->pc = 0x7C7430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C742Cu;
    // 0x7c7430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C742Cu, 0x7C7434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7434u;
label_7c7434:
    // 0x7c7434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7438: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c7438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c743c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C743Cu;
    SET_GPR_U32(ctx, 31, 0x7C7444u);
    ctx->pc = 0x7C7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C743Cu;
    // 0x7c7440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C743Cu, 0x7C7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7444u;
label_7c7444:
    // 0x7c7444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c7448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c744c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C744Cu;
    SET_GPR_U32(ctx, 31, 0x7C7454u);
    ctx->pc = 0x7C7450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C744Cu;
    // 0x7c7450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C744Cu, 0x7C7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7454u;
label_7c7454:
    // 0x7c7454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7c7458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c745c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C745Cu;
    SET_GPR_U32(ctx, 31, 0x7C7464u);
    ctx->pc = 0x7C7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C745Cu;
    // 0x7c7460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C745Cu, 0x7C7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7464u;
label_7c7464:
    // 0x7c7464: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x7c7464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x7c7468: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x7c7468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7c746c: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x7c746cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x7c7470: 0x1060011c  beqz        $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x7C7470u;
    {
        const bool branch_taken_0x7c7470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7470u;
        // 0x7c7474: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7470) {
            ctx->pc = 0x7C78E4u;
            goto label_7c78e4;
        }
    }
    ctx->pc = 0x7C7478u;
    // 0x7c7478: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x7c7478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x7c747c: 0x24420e70  addiu       $v0, $v0, 0xE70
    ctx->pc = 0x7c747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3696));
    // 0x7c7480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c7480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c7484: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c7484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c7488: 0x800008  jr          $a0
    ctx->pc = 0x7C7488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C7490u: goto label_7c7490;
            case 0x7C74B4u: goto label_7c74b4;
            case 0x7C74E4u: goto label_7c74e4;
            case 0x7C7514u: goto label_7c7514;
            case 0x7C754Cu: goto label_7c754c;
            case 0x7C756Cu: goto label_7c756c;
            case 0x7C75B8u: goto label_7c75b8;
            case 0x7C75F8u: goto label_7c75f8;
            case 0x7C7638u: goto label_7c7638;
            case 0x7C7654u: goto label_7c7654;
            case 0x7C7670u: goto label_7c7670;
            case 0x7C768Cu: goto label_7c768c;
            case 0x7C76A8u: goto label_7c76a8;
            case 0x7C76C4u: goto label_7c76c4;
            case 0x7C76ECu: goto label_7c76ec;
            case 0x7C770Cu: goto label_7c770c;
            case 0x7C772Cu: goto label_7c772c;
            case 0x7C7748u: goto label_7c7748;
            case 0x7C7764u: goto label_7c7764;
            case 0x7C7780u: goto label_7c7780;
            case 0x7C77A8u: goto label_7c77a8;
            case 0x7C7804u: goto label_7c7804;
            case 0x7C7884u: goto label_7c7884;
            case 0x7C78BCu: goto label_7c78bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7488u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C7490u;
label_7c7490:
    // 0x7c7490: 0xc1f1f2c  jal         func_7C7CB0
    ctx->pc = 0x7C7490u;
    SET_GPR_U32(ctx, 31, 0x7C7498u);
    ctx->pc = 0x7C7494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7490u;
    // 0x7c7494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7CB0u, 0x7C7490u, 0x7C7498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7498u;
label_7c7498:
    // 0x7c7498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c749c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c74a0: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C74A0u;
    SET_GPR_U32(ctx, 31, 0x7C74A8u);
    ctx->pc = 0x7C74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C74A0u;
    // 0x7c74a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C74A0u, 0x7C74A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C74A8u;
label_7c74a8:
    // 0x7c74a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c74a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c74ac: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x7C74ACu;
    {
        const bool branch_taken_0x7c74ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C74ACu;
        // 0x7c74b0: 0x24052007  addiu       $a1, $zero, 0x2007 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c74ac) {
            ctx->pc = 0x7C78D4u;
            goto label_7c78d4;
        }
    }
    ctx->pc = 0x7C74B4u;
label_7c74b4:
    // 0x7c74b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c74b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c74b8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c74b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c74bc: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C74BCu;
    SET_GPR_U32(ctx, 31, 0x7C74C4u);
    ctx->pc = 0x7C74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C74BCu;
    // 0x7c74c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C74BCu, 0x7C74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C74C4u;
label_7c74c4:
    // 0x7c74c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c74c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c74c8: 0x24052015  addiu       $a1, $zero, 0x2015
    ctx->pc = 0x7c74c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8213));
    // 0x7c74cc: 0xc1f222a  jal         func_7C88A8
    ctx->pc = 0x7C74CCu;
    SET_GPR_U32(ctx, 31, 0x7C74D4u);
    ctx->pc = 0x7C74D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C74CCu;
    // 0x7c74d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88A8u, 0x7C74CCu, 0x7C74D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C74D4u;
label_7c74d4:
    // 0x7c74d4: 0xc1f1ed4  jal         func_7C7B50
    ctx->pc = 0x7C74D4u;
    SET_GPR_U32(ctx, 31, 0x7C74DCu);
    ctx->pc = 0x7C74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C74D4u;
    // 0x7c74d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7B50u, 0x7C74D4u, 0x7C74DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C74DCu;
label_7c74dc:
    // 0x7c74dc: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x7C74DCu;
    {
        const bool branch_taken_0x7c74dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c74dc) {
            ctx->pc = 0x7C7928u;
            goto label_7c7928;
        }
    }
    ctx->pc = 0x7C74E4u;
label_7c74e4:
    // 0x7c74e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c74e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c74e8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c74e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c74ec: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C74ECu;
    SET_GPR_U32(ctx, 31, 0x7C74F4u);
    ctx->pc = 0x7C74F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C74ECu;
    // 0x7c74f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C74ECu, 0x7C74F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C74F4u;
label_7c74f4:
    // 0x7c74f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c74f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c74f8: 0x24052016  addiu       $a1, $zero, 0x2016
    ctx->pc = 0x7c74f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8214));
    // 0x7c74fc: 0xc1f222a  jal         func_7C88A8
    ctx->pc = 0x7C74FCu;
    SET_GPR_U32(ctx, 31, 0x7C7504u);
    ctx->pc = 0x7C7500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C74FCu;
    // 0x7c7500: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88A8u, 0x7C74FCu, 0x7C7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7504u;
label_7c7504:
    // 0x7c7504: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x7c7504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x7c7508: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7c7508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7c750c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C750Cu;
    {
        const bool branch_taken_0x7c750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c750c) {
            ctx->pc = 0x7C753Cu;
            goto label_7c753c;
        }
    }
    ctx->pc = 0x7C7514u;
label_7c7514:
    // 0x7c7514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7518: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c7518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c751c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C751Cu;
    SET_GPR_U32(ctx, 31, 0x7C7524u);
    ctx->pc = 0x7C7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C751Cu;
    // 0x7c7520: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C751Cu, 0x7C7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7524u;
label_7c7524:
    // 0x7c7524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7528: 0x24052012  addiu       $a1, $zero, 0x2012
    ctx->pc = 0x7c7528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8210));
    // 0x7c752c: 0xc1f222a  jal         func_7C88A8
    ctx->pc = 0x7C752Cu;
    SET_GPR_U32(ctx, 31, 0x7C7534u);
    ctx->pc = 0x7C7530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C752Cu;
    // 0x7c7530: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88A8u, 0x7C752Cu, 0x7C7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7534u;
label_7c7534:
    // 0x7c7534: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x7c7534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x7c7538: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7c7538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7c753c:
    // 0x7c753c: 0xc1f1f1c  jal         func_7C7C70
    ctx->pc = 0x7C753Cu;
    SET_GPR_U32(ctx, 31, 0x7C7544u);
    ctx->pc = 0x7C7540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C753Cu;
    // 0x7c7540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7C70u, 0x7C753Cu, 0x7C7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7544u;
label_7c7544:
    // 0x7c7544: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x7C7544u;
    {
        const bool branch_taken_0x7c7544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c7544) {
            ctx->pc = 0x7C7928u;
            goto label_7c7928;
        }
    }
    ctx->pc = 0x7C754Cu;
label_7c754c:
    // 0x7c754c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7550: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c7550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c7554: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7554u;
    SET_GPR_U32(ctx, 31, 0x7C755Cu);
    ctx->pc = 0x7C7558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7554u;
    // 0x7c7558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7554u, 0x7C755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C755Cu;
label_7c755c:
    // 0x7c755c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7560: 0x24052011  addiu       $a1, $zero, 0x2011
    ctx->pc = 0x7c7560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8209));
    // 0x7c7564: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x7C7564u;
    {
        const bool branch_taken_0x7c7564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7564u;
        // 0x7c7568: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7564) {
            ctx->pc = 0x7C78A0u;
            goto label_7c78a0;
        }
    }
    ctx->pc = 0x7C756Cu;
label_7c756c:
    // 0x7c756c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c756cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c7570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7574: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7574u;
    SET_GPR_U32(ctx, 31, 0x7C757Cu);
    ctx->pc = 0x7C7578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7574u;
    // 0x7c7578: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7574u, 0x7C757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C757Cu;
label_7c757c:
    // 0x7c757c: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x7c757cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c7580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7584: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c7584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c7588: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C7588u;
    SET_GPR_U32(ctx, 31, 0x7C7590u);
    ctx->pc = 0x7C758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7588u;
    // 0x7c758c: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C7588u, 0x7C7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7590u;
label_7c7590:
    // 0x7c7590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7594: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c7594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c7598: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7598u;
    SET_GPR_U32(ctx, 31, 0x7C75A0u);
    ctx->pc = 0x7C759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7598u;
    // 0x7c759c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7598u, 0x7C75A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C75A0u;
label_7c75a0:
    // 0x7c75a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c75a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c75a4: 0x24052010  addiu       $a1, $zero, 0x2010
    ctx->pc = 0x7c75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
label_7c75a8:
    // 0x7c75a8: 0xc1f2218  jal         func_7C8860
    ctx->pc = 0x7C75A8u;
    SET_GPR_U32(ctx, 31, 0x7C75B0u);
    ctx->pc = 0x7C75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C75A8u;
    // 0x7c75ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8860u, 0x7C75A8u, 0x7C75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C75B0u;
label_7c75b0:
    // 0x7c75b0: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x7C75B0u;
    {
        const bool branch_taken_0x7c75b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C75B0u;
        // 0x7c75b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c75b0) {
            ctx->pc = 0x7C7874u;
            goto label_7c7874;
        }
    }
    ctx->pc = 0x7C75B8u;
label_7c75b8:
    // 0x7c75b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c75b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c75bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c75bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c75c0: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C75C0u;
    SET_GPR_U32(ctx, 31, 0x7C75C8u);
    ctx->pc = 0x7C75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C75C0u;
    // 0x7c75c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C75C0u, 0x7C75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C75C8u;
label_7c75c8:
    // 0x7c75c8: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x7c75c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c75cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c75ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c75d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c75d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c75d4: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C75D4u;
    SET_GPR_U32(ctx, 31, 0x7C75DCu);
    ctx->pc = 0x7C75D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C75D4u;
    // 0x7c75d8: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C75D4u, 0x7C75DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C75DCu;
label_7c75dc:
    // 0x7c75dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c75dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c75e0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c75e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c75e4: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C75E4u;
    SET_GPR_U32(ctx, 31, 0x7C75ECu);
    ctx->pc = 0x7C75E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C75E4u;
    // 0x7c75e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C75E4u, 0x7C75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C75ECu;
label_7c75ec:
    // 0x7c75ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c75ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c75f0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x7C75F0u;
    {
        const bool branch_taken_0x7c75f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C75F0u;
        // 0x7c75f4: 0x2405200e  addiu       $a1, $zero, 0x200E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c75f0) {
            ctx->pc = 0x7C75A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c75a8;
        }
    }
    ctx->pc = 0x7C75F8u;
label_7c75f8:
    // 0x7c75f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c75f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c75fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c75fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7600: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7600u;
    SET_GPR_U32(ctx, 31, 0x7C7608u);
    ctx->pc = 0x7C7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7600u;
    // 0x7c7604: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7600u, 0x7C7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7608u;
label_7c7608:
    // 0x7c7608: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x7c7608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c760c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7610: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c7610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c7614: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C7614u;
    SET_GPR_U32(ctx, 31, 0x7C761Cu);
    ctx->pc = 0x7C7618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7614u;
    // 0x7c7618: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C7614u, 0x7C761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C761Cu;
label_7c761c:
    // 0x7c761c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7620: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c7620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c7624: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7624u;
    SET_GPR_U32(ctx, 31, 0x7C762Cu);
    ctx->pc = 0x7C7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7624u;
    // 0x7c7628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7624u, 0x7C762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C762Cu;
label_7c762c:
    // 0x7c762c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c762cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7630: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x7C7630u;
    {
        const bool branch_taken_0x7c7630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7630u;
        // 0x7c7634: 0x2405200f  addiu       $a1, $zero, 0x200F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8207));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7630) {
            ctx->pc = 0x7C75A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c75a8;
        }
    }
    ctx->pc = 0x7C7638u;
label_7c7638:
    // 0x7c7638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c763c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c7640: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7640u;
    SET_GPR_U32(ctx, 31, 0x7C7648u);
    ctx->pc = 0x7C7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7640u;
    // 0x7c7644: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7640u, 0x7C7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7648u;
label_7c7648:
    // 0x7c7648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c764c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x7C764Cu;
    {
        const bool branch_taken_0x7c764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C764Cu;
        // 0x7c7650: 0x24052019  addiu       $a1, $zero, 0x2019 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8217));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c764c) {
            ctx->pc = 0x7C76DCu;
            goto label_7c76dc;
        }
    }
    ctx->pc = 0x7C7654u;
label_7c7654:
    // 0x7c7654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7658: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c7658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c765c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C765Cu;
    SET_GPR_U32(ctx, 31, 0x7C7664u);
    ctx->pc = 0x7C7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C765Cu;
    // 0x7c7660: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C765Cu, 0x7C7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7664u;
label_7c7664:
    // 0x7c7664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7668: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7C7668u;
    {
        const bool branch_taken_0x7c7668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7668u;
        // 0x7c766c: 0x2405201a  addiu       $a1, $zero, 0x201A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7668) {
            ctx->pc = 0x7C76DCu;
            goto label_7c76dc;
        }
    }
    ctx->pc = 0x7C7670u;
label_7c7670:
    // 0x7c7670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7674: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c7674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c7678: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7678u;
    SET_GPR_U32(ctx, 31, 0x7C7680u);
    ctx->pc = 0x7C767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7678u;
    // 0x7c767c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7678u, 0x7C7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7680u;
label_7c7680:
    // 0x7c7680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7684: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x7C7684u;
    {
        const bool branch_taken_0x7c7684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7684u;
        // 0x7c7688: 0x24052014  addiu       $a1, $zero, 0x2014 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7684) {
            ctx->pc = 0x7C76DCu;
            goto label_7c76dc;
        }
    }
    ctx->pc = 0x7C768Cu;
label_7c768c:
    // 0x7c768c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7690: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c7690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c7694: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7694u;
    SET_GPR_U32(ctx, 31, 0x7C769Cu);
    ctx->pc = 0x7C7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7694u;
    // 0x7c7698: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7694u, 0x7C769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C769Cu;
label_7c769c:
    // 0x7c769c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c76a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7C76A0u;
    {
        const bool branch_taken_0x7c76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C76A0u;
        // 0x7c76a4: 0x24052017  addiu       $a1, $zero, 0x2017 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8215));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c76a0) {
            ctx->pc = 0x7C76DCu;
            goto label_7c76dc;
        }
    }
    ctx->pc = 0x7C76A8u;
label_7c76a8:
    // 0x7c76a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c76a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c76ac: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c76acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c76b0: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C76B0u;
    SET_GPR_U32(ctx, 31, 0x7C76B8u);
    ctx->pc = 0x7C76B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C76B0u;
    // 0x7c76b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C76B0u, 0x7C76B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C76B8u;
label_7c76b8:
    // 0x7c76b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c76b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c76bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C76BCu;
    {
        const bool branch_taken_0x7c76bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C76BCu;
        // 0x7c76c0: 0x24052018  addiu       $a1, $zero, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c76bc) {
            ctx->pc = 0x7C76DCu;
            goto label_7c76dc;
        }
    }
    ctx->pc = 0x7C76C4u;
label_7c76c4:
    // 0x7c76c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c76c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c76c8: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c76c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c76cc: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C76CCu;
    SET_GPR_U32(ctx, 31, 0x7C76D4u);
    ctx->pc = 0x7C76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C76CCu;
    // 0x7c76d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C76CCu, 0x7C76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C76D4u;
label_7c76d4:
    // 0x7c76d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c76d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c76d8: 0x24052013  addiu       $a1, $zero, 0x2013
    ctx->pc = 0x7c76d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8211));
label_7c76dc:
    // 0x7c76dc: 0xc1f2218  jal         func_7C8860
    ctx->pc = 0x7C76DCu;
    SET_GPR_U32(ctx, 31, 0x7C76E4u);
    ctx->pc = 0x7C76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C76DCu;
    // 0x7c76e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8860u, 0x7C76DCu, 0x7C76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C76E4u;
label_7c76e4:
    // 0x7c76e4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x7C76E4u;
    {
        const bool branch_taken_0x7c76e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c76e4) {
            ctx->pc = 0x7C7928u;
            goto label_7c7928;
        }
    }
    ctx->pc = 0x7C76ECu;
label_7c76ec:
    // 0x7c76ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c76ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c76f0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c76f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c76f4: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C76F4u;
    SET_GPR_U32(ctx, 31, 0x7C76FCu);
    ctx->pc = 0x7C76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C76F4u;
    // 0x7c76f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C76F4u, 0x7C76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C76FCu;
label_7c76fc:
    // 0x7c76fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c76fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7700: 0x2405200b  addiu       $a1, $zero, 0x200B
    ctx->pc = 0x7c7700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8203));
    // 0x7c7704: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x7C7704u;
    {
        const bool branch_taken_0x7c7704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7704u;
        // 0x7c7708: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7704) {
            ctx->pc = 0x7C78A0u;
            goto label_7c78a0;
        }
    }
    ctx->pc = 0x7C770Cu;
label_7c770c:
    // 0x7c770c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7710: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c7710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c7714: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7714u;
    SET_GPR_U32(ctx, 31, 0x7C771Cu);
    ctx->pc = 0x7C7718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7714u;
    // 0x7c7718: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7714u, 0x7C771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C771Cu;
label_7c771c:
    // 0x7c771c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7720: 0x2405200c  addiu       $a1, $zero, 0x200C
    ctx->pc = 0x7c7720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8204));
    // 0x7c7724: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x7C7724u;
    {
        const bool branch_taken_0x7c7724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7724u;
        // 0x7c7728: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7724) {
            ctx->pc = 0x7C78A0u;
            goto label_7c78a0;
        }
    }
    ctx->pc = 0x7C772Cu;
label_7c772c:
    // 0x7c772c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7730: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c7730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c7734: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7734u;
    SET_GPR_U32(ctx, 31, 0x7C773Cu);
    ctx->pc = 0x7C7738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7734u;
    // 0x7c7738: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7734u, 0x7C773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C773Cu;
label_7c773c:
    // 0x7c773c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c773cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7740: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x7C7740u;
    {
        const bool branch_taken_0x7c7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7740u;
        // 0x7c7744: 0x2405201f  addiu       $a1, $zero, 0x201F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7740) {
            ctx->pc = 0x7C7798u;
            goto label_7c7798;
        }
    }
    ctx->pc = 0x7C7748u;
label_7c7748:
    // 0x7c7748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c774c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c7750: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7750u;
    SET_GPR_U32(ctx, 31, 0x7C7758u);
    ctx->pc = 0x7C7754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7750u;
    // 0x7c7754: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7750u, 0x7C7758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7758u;
label_7c7758:
    // 0x7c7758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c775c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7C775Cu;
    {
        const bool branch_taken_0x7c775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C775Cu;
        // 0x7c7760: 0x2405200a  addiu       $a1, $zero, 0x200A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c775c) {
            ctx->pc = 0x7C7798u;
            goto label_7c7798;
        }
    }
    ctx->pc = 0x7C7764u;
label_7c7764:
    // 0x7c7764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7768: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c7768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c776c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C776Cu;
    SET_GPR_U32(ctx, 31, 0x7C7774u);
    ctx->pc = 0x7C7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C776Cu;
    // 0x7c7770: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C776Cu, 0x7C7774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7774u;
label_7c7774:
    // 0x7c7774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7778: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C7778u;
    {
        const bool branch_taken_0x7c7778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7778u;
        // 0x7c777c: 0x24052020  addiu       $a1, $zero, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7778) {
            ctx->pc = 0x7C7798u;
            goto label_7c7798;
        }
    }
    ctx->pc = 0x7C7780u;
label_7c7780:
    // 0x7c7780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7784: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c7784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c7788: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7788u;
    SET_GPR_U32(ctx, 31, 0x7C7790u);
    ctx->pc = 0x7C778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7788u;
    // 0x7c778c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7788u, 0x7C7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7790u;
label_7c7790:
    // 0x7c7790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7794: 0x24052021  addiu       $a1, $zero, 0x2021
    ctx->pc = 0x7c7794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8225));
label_7c7798:
    // 0x7c7798: 0xc1f222a  jal         func_7C88A8
    ctx->pc = 0x7C7798u;
    SET_GPR_U32(ctx, 31, 0x7C77A0u);
    ctx->pc = 0x7C779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7798u;
    // 0x7c779c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88A8u, 0x7C7798u, 0x7C77A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C77A0u;
label_7c77a0:
    // 0x7c77a0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x7C77A0u;
    {
        const bool branch_taken_0x7c77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c77a0) {
            ctx->pc = 0x7C7928u;
            goto label_7c7928;
        }
    }
    ctx->pc = 0x7C77A8u;
label_7c77a8:
    // 0x7c77a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c77a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c77ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c77acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c77b0: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C77B0u;
    SET_GPR_U32(ctx, 31, 0x7C77B8u);
    ctx->pc = 0x7C77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C77B0u;
    // 0x7c77b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C77B0u, 0x7C77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C77B8u;
label_7c77b8:
    // 0x7c77b8: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x7c77b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c77bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c77bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c77c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c77c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c77c4: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C77C4u;
    SET_GPR_U32(ctx, 31, 0x7C77CCu);
    ctx->pc = 0x7C77C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C77C4u;
    // 0x7c77c8: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C77C4u, 0x7C77CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C77CCu;
label_7c77cc:
    // 0x7c77cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c77ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c77d0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c77d4: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C77D4u;
    SET_GPR_U32(ctx, 31, 0x7C77DCu);
    ctx->pc = 0x7C77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C77D4u;
    // 0x7c77d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C77D4u, 0x7C77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C77DCu;
label_7c77dc:
    // 0x7c77dc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7c77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7c77e0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x7c77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x7c77e4: 0x94627a50  lhu         $v0, 0x7A50($v1)
    ctx->pc = 0x7c77e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x747A50u));
    // 0x7c77e8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C77E8u;
    {
        const bool branch_taken_0x7c77e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C77E8u;
        // 0x7c77ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c77e8) {
            ctx->pc = 0x7C77F8u;
            goto label_7c77f8;
        }
    }
    ctx->pc = 0x7C77F0u;
    // 0x7c77f0: 0x1000ff6d  b           . + 4 + (-0x93 << 2)
    ctx->pc = 0x7C77F0u;
    {
        const bool branch_taken_0x7c77f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C77F0u;
        // 0x7c77f4: 0x240520a7  addiu       $a1, $zero, 0x20A7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8359));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c77f0) {
            ctx->pc = 0x7C75A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c75a8;
        }
    }
    ctx->pc = 0x7C77F8u;
label_7c77f8:
    // 0x7c77f8: 0x2405201b  addiu       $a1, $zero, 0x201B
    ctx->pc = 0x7c77f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8219));
    // 0x7c77fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7C77FCu;
    {
        const bool branch_taken_0x7c77fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C77FCu;
        // 0x7c7800: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c77fc) {
            ctx->pc = 0x7C7868u;
            goto label_7c7868;
        }
    }
    ctx->pc = 0x7C7804u;
label_7c7804:
    // 0x7c7804: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c7804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c7808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c780c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C780Cu;
    SET_GPR_U32(ctx, 31, 0x7C7814u);
    ctx->pc = 0x7C7810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C780Cu;
    // 0x7c7810: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C780Cu, 0x7C7814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7814u;
label_7c7814:
    // 0x7c7814: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x7c7814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c7818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c781c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c7820: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C7820u;
    SET_GPR_U32(ctx, 31, 0x7C7828u);
    ctx->pc = 0x7C7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7820u;
    // 0x7c7824: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C7820u, 0x7C7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7828u;
label_7c7828:
    // 0x7c7828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c782c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x7c782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x7c7830: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7830u;
    SET_GPR_U32(ctx, 31, 0x7C7838u);
    ctx->pc = 0x7C7834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7830u;
    // 0x7c7834: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7830u, 0x7C7838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7838u;
label_7c7838:
    // 0x7c7838: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7c7838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7c783c: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x7c783cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x7c7840: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x7c7840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x7c7844: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C7844u;
    {
        const bool branch_taken_0x7c7844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7844u;
        // 0x7c7848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7844) {
            ctx->pc = 0x7C7860u;
            goto label_7c7860;
        }
    }
    ctx->pc = 0x7C784Cu;
    // 0x7c784c: 0x2405201c  addiu       $a1, $zero, 0x201C
    ctx->pc = 0x7c784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8220));
    // 0x7c7850: 0xc1f2218  jal         func_7C8860
    ctx->pc = 0x7C7850u;
    SET_GPR_U32(ctx, 31, 0x7C7858u);
    ctx->pc = 0x7C7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7850u;
    // 0x7c7854: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8860u, 0x7C7850u, 0x7C7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7858u;
label_7c7858:
    // 0x7c7858: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C7858u;
    {
        const bool branch_taken_0x7c7858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7858u;
        // 0x7c785c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7858) {
            ctx->pc = 0x7C7874u;
            goto label_7c7874;
        }
    }
    ctx->pc = 0x7C7860u;
label_7c7860:
    // 0x7c7860: 0x2405201d  addiu       $a1, $zero, 0x201D
    ctx->pc = 0x7c7860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8221));
    // 0x7c7864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7c7864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7c7868:
    // 0x7c7868: 0xc1f2218  jal         func_7C8860
    ctx->pc = 0x7C7868u;
    SET_GPR_U32(ctx, 31, 0x7C7870u);
    ctx->pc = 0x7C8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8860u, 0x7C7868u, 0x7C7870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7870u;
label_7c7870:
    // 0x7c7870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7c7874:
    // 0x7c7874: 0xc1f1fa2  jal         func_7C7E88
    ctx->pc = 0x7C7874u;
    SET_GPR_U32(ctx, 31, 0x7C787Cu);
    ctx->pc = 0x7C7878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7874u;
    // 0x7c7878: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7E88u, 0x7C7874u, 0x7C787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C787Cu;
label_7c787c:
    // 0x7c787c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7C787Cu;
    {
        const bool branch_taken_0x7c787c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c787c) {
            ctx->pc = 0x7C7928u;
            goto label_7c7928;
        }
    }
    ctx->pc = 0x7C7884u;
label_7c7884:
    // 0x7c7884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7888: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c7888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c788c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C788Cu;
    SET_GPR_U32(ctx, 31, 0x7C7894u);
    ctx->pc = 0x7C7890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C788Cu;
    // 0x7c7890: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C788Cu, 0x7C7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7894u;
label_7c7894:
    // 0x7c7894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7898: 0x2405201e  addiu       $a1, $zero, 0x201E
    ctx->pc = 0x7c7898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8222));
    // 0x7c789c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c789cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c78a0:
    // 0x7c78a0: 0xc1f222a  jal         func_7C88A8
    ctx->pc = 0x7C78A0u;
    SET_GPR_U32(ctx, 31, 0x7C78A8u);
    ctx->pc = 0x7C88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88A8u, 0x7C78A0u, 0x7C78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C78A8u;
label_7c78a8:
    // 0x7c78a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c78a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c78ac: 0xc1f1fa2  jal         func_7C7E88
    ctx->pc = 0x7C78ACu;
    SET_GPR_U32(ctx, 31, 0x7C78B4u);
    ctx->pc = 0x7C78B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C78ACu;
    // 0x7c78b0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7E88u, 0x7C78ACu, 0x7C78B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C78B4u;
label_7c78b4:
    // 0x7c78b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7C78B4u;
    {
        const bool branch_taken_0x7c78b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c78b4) {
            ctx->pc = 0x7C7928u;
            goto label_7c7928;
        }
    }
    ctx->pc = 0x7C78BCu;
label_7c78bc:
    // 0x7c78bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c78bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c78c0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c78c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c78c4: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C78C4u;
    SET_GPR_U32(ctx, 31, 0x7C78CCu);
    ctx->pc = 0x7C78C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C78C4u;
    // 0x7c78c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C78C4u, 0x7C78CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C78CCu;
label_7c78cc:
    // 0x7c78cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c78ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c78d0: 0x24052008  addiu       $a1, $zero, 0x2008
    ctx->pc = 0x7c78d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
label_7c78d4:
    // 0x7c78d4: 0xc1f222a  jal         func_7C88A8
    ctx->pc = 0x7C78D4u;
    SET_GPR_U32(ctx, 31, 0x7C78DCu);
    ctx->pc = 0x7C78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C78D4u;
    // 0x7c78d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88A8u, 0x7C78D4u, 0x7C78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C78DCu;
label_7c78dc:
    // 0x7c78dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x7C78DCu;
    {
        const bool branch_taken_0x7c78dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c78dc) {
            ctx->pc = 0x7C7928u;
            goto label_7c7928;
        }
    }
    ctx->pc = 0x7C78E4u;
label_7c78e4:
    // 0x7c78e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c78e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c78e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c78e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c78ec: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C78ECu;
    SET_GPR_U32(ctx, 31, 0x7C78F4u);
    ctx->pc = 0x7C78F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C78ECu;
    // 0x7c78f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C78ECu, 0x7C78F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C78F4u;
label_7c78f4:
    // 0x7c78f4: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x7c78f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c78f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c78f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c78fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c78fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c7900: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C7900u;
    SET_GPR_U32(ctx, 31, 0x7C7908u);
    ctx->pc = 0x7C7904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7900u;
    // 0x7c7904: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C7900u, 0x7C7908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7908u;
label_7c7908:
    // 0x7c7908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c790c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c790cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7910: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7910u;
    SET_GPR_U32(ctx, 31, 0x7C7918u);
    ctx->pc = 0x7C7914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7910u;
    // 0x7c7914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7910u, 0x7C7918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7918u;
label_7c7918:
    // 0x7c7918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c791c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7c791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c7920: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7920u;
    SET_GPR_U32(ctx, 31, 0x7C7928u);
    ctx->pc = 0x7C7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7920u;
    // 0x7c7924: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7920u, 0x7C7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7928u;
label_7c7928:
    // 0x7c7928: 0xc1f1e52  jal         func_7C7948
    ctx->pc = 0x7C7928u;
    SET_GPR_U32(ctx, 31, 0x7C7930u);
    ctx->pc = 0x7C792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7928u;
    // 0x7c792c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7948u, 0x7C7928u, 0x7C7930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7930u;
label_7c7930:
    // 0x7c7930: 0xc1f1e90  jal         func_7C7A40
    ctx->pc = 0x7C7930u;
    SET_GPR_U32(ctx, 31, 0x7C7938u);
    ctx->pc = 0x7C7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7930u;
    // 0x7c7934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7A40u, 0x7C7930u, 0x7C7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7938u;
label_7c7938:
    // 0x7c7938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c7938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c793c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c793cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7940: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7940u;
        // 0x7c7944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7948u;
}
} // namespace gh_mcport
