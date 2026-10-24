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

// Function: func_001E0310
// Address: 0x1e0310 - 0x1e0840
void func_001E0310_0x1e0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E0310_0x1e0310");
#endif

    switch (ctx->pc) {
        case 0x1e035cu: goto label_1e035c;
        case 0x1e0368u: goto label_1e0368;
        case 0x1e0374u: goto label_1e0374;
        case 0x1e0380u: goto label_1e0380;
        case 0x1e038cu: goto label_1e038c;
        case 0x1e0398u: goto label_1e0398;
        case 0x1e03b0u: goto label_1e03b0;
        case 0x1e03c4u: goto label_1e03c4;
        case 0x1e03d8u: goto label_1e03d8;
        case 0x1e03ecu: goto label_1e03ec;
        case 0x1e0400u: goto label_1e0400;
        case 0x1e0414u: goto label_1e0414;
        case 0x1e0428u: goto label_1e0428;
        case 0x1e043cu: goto label_1e043c;
        case 0x1e0444u: goto label_1e0444;
        case 0x1e0454u: goto label_1e0454;
        case 0x1e0468u: goto label_1e0468;
        case 0x1e047cu: goto label_1e047c;
        case 0x1e0490u: goto label_1e0490;
        case 0x1e04a4u: goto label_1e04a4;
        case 0x1e04b8u: goto label_1e04b8;
        case 0x1e04c8u: goto label_1e04c8;
        case 0x1e04d8u: goto label_1e04d8;
        case 0x1e0550u: goto label_1e0550;
        case 0x1e05c8u: goto label_1e05c8;
        case 0x1e0610u: goto label_1e0610;
        case 0x1e0634u: goto label_1e0634;
        case 0x1e063cu: goto label_1e063c;
        case 0x1e0684u: goto label_1e0684;
        case 0x1e068cu: goto label_1e068c;
        case 0x1e06b0u: goto label_1e06b0;
        case 0x1e0710u: goto label_1e0710;
        case 0x1e073cu: goto label_1e073c;
        case 0x1e077cu: goto label_1e077c;
        case 0x1e07dcu: goto label_1e07dc;
        case 0x1e07e8u: goto label_1e07e8;
        default: break;
    }

    ctx->pc = 0x1e0310u;

    // 0x1e0310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0318: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e0318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e031c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e031cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0324: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e0324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0328: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1e0328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e032c: 0x1040013e  beqz        $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x1E032Cu;
    {
        const bool branch_taken_0x1e032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E032Cu;
        // 0x1e0330: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e032c) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E0334u;
    // 0x1e0334: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0338: 0x2442b700  addiu       $v0, $v0, -0x4900
    ctx->pc = 0x1e0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
    // 0x1e033c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0340: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e0340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0344: 0x800008  jr          $a0
    ctx->pc = 0x1E0344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E034Cu: goto label_1e034c;
            case 0x1E0514u: goto label_1e0514;
            case 0x1E074Cu: goto label_1e074c;
            case 0x1E0790u: goto label_1e0790;
            case 0x1E07FCu: goto label_1e07fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0344u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E034Cu;
label_1e034c:
    // 0x1e034c: 0x263004d0  addiu       $s0, $s1, 0x4D0
    ctx->pc = 0x1e034cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
    // 0x1e0350: 0x8e2503cc  lw          $a1, 0x3CC($s1)
    ctx->pc = 0x1e0350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 972)));
    // 0x1e0354: 0xc079e12  jal         func_1E7848
    ctx->pc = 0x1E0354u;
    SET_GPR_U32(ctx, 31, 0x1E035Cu);
    ctx->pc = 0x1E0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0354u;
    // 0x1e0358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7848u, 0x1E0354u, 0x1E035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E035Cu;
label_1e035c:
    // 0x1e035c: 0x8e2503d0  lw          $a1, 0x3D0($s1)
    ctx->pc = 0x1e035cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
    // 0x1e0360: 0xc079e1a  jal         func_1E7868
    ctx->pc = 0x1E0360u;
    SET_GPR_U32(ctx, 31, 0x1E0368u);
    ctx->pc = 0x1E0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0360u;
    // 0x1e0364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7868u, 0x1E0360u, 0x1E0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0368u;
label_1e0368:
    // 0x1e0368: 0x8e2503d4  lw          $a1, 0x3D4($s1)
    ctx->pc = 0x1e0368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
    // 0x1e036c: 0xc079e22  jal         func_1E7888
    ctx->pc = 0x1E036Cu;
    SET_GPR_U32(ctx, 31, 0x1E0374u);
    ctx->pc = 0x1E0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E036Cu;
    // 0x1e0370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7888u, 0x1E036Cu, 0x1E0374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0374u;
label_1e0374:
    // 0x1e0374: 0x8e2503d8  lw          $a1, 0x3D8($s1)
    ctx->pc = 0x1e0374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 984)));
    // 0x1e0378: 0xc079e2a  jal         func_1E78A8
    ctx->pc = 0x1E0378u;
    SET_GPR_U32(ctx, 31, 0x1E0380u);
    ctx->pc = 0x1E037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0378u;
    // 0x1e037c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78A8u, 0x1E0378u, 0x1E0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0380u;
label_1e0380:
    // 0x1e0380: 0x8e2503dc  lw          $a1, 0x3DC($s1)
    ctx->pc = 0x1e0380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 988)));
    // 0x1e0384: 0xc079e32  jal         func_1E78C8
    ctx->pc = 0x1E0384u;
    SET_GPR_U32(ctx, 31, 0x1E038Cu);
    ctx->pc = 0x1E0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0384u;
    // 0x1e0388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78C8u, 0x1E0384u, 0x1E038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E038Cu;
label_1e038c:
    // 0x1e038c: 0x8e2503e0  lw          $a1, 0x3E0($s1)
    ctx->pc = 0x1e038cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
    // 0x1e0390: 0xc079e3a  jal         func_1E78E8
    ctx->pc = 0x1E0390u;
    SET_GPR_U32(ctx, 31, 0x1E0398u);
    ctx->pc = 0x1E0394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0390u;
    // 0x1e0394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78E8u, 0x1E0390u, 0x1E0398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0398u;
label_1e0398:
    // 0x1e0398: 0xa620048e  sh          $zero, 0x48E($s1)
    ctx->pc = 0x1e0398u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1166), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e039c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e03a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e03a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03a8: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E03A8u;
    SET_GPR_U32(ctx, 31, 0x1E03B0u);
    ctx->pc = 0x1E03ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03A8u;
    // 0x1e03ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E03A8u, 0x1E03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03B0u;
label_1e03b0:
    // 0x1e03b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e03b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e03b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e03b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e03b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03bc: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E03BCu;
    SET_GPR_U32(ctx, 31, 0x1E03C4u);
    ctx->pc = 0x1E03C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03BCu;
    // 0x1e03c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E03BCu, 0x1E03C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03C4u;
label_1e03c4:
    // 0x1e03c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e03c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e03cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e03ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03d0: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E03D0u;
    SET_GPR_U32(ctx, 31, 0x1E03D8u);
    ctx->pc = 0x1E03D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03D0u;
    // 0x1e03d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E03D0u, 0x1E03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03D8u;
label_1e03d8:
    // 0x1e03d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e03d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e03dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e03e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03e4: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E03E4u;
    SET_GPR_U32(ctx, 31, 0x1E03ECu);
    ctx->pc = 0x1E03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03E4u;
    // 0x1e03e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E03E4u, 0x1E03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03ECu;
label_1e03ec:
    // 0x1e03ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e03ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e03f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e03f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e03f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03f8: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E03F8u;
    SET_GPR_U32(ctx, 31, 0x1E0400u);
    ctx->pc = 0x1E03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03F8u;
    // 0x1e03fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E03F8u, 0x1E0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0400u;
label_1e0400:
    // 0x1e0400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e0404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e040c: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E040Cu;
    SET_GPR_U32(ctx, 31, 0x1E0414u);
    ctx->pc = 0x1E0410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E040Cu;
    // 0x1e0410: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E040Cu, 0x1E0414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0414u;
label_1e0414:
    // 0x1e0414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0418: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e0418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e041c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0420: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E0420u;
    SET_GPR_U32(ctx, 31, 0x1E0428u);
    ctx->pc = 0x1E0424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0420u;
    // 0x1e0424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E0420u, 0x1E0428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0428u;
label_1e0428:
    // 0x1e0428: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e042c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e0430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0434: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E0434u;
    SET_GPR_U32(ctx, 31, 0x1E043Cu);
    ctx->pc = 0x1E0438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0434u;
    // 0x1e0438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E0434u, 0x1E043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E043Cu;
label_1e043c:
    // 0x1e043c: 0xc078d8c  jal         func_1E3630
    ctx->pc = 0x1E043Cu;
    SET_GPR_U32(ctx, 31, 0x1E0444u);
    ctx->pc = 0x1E0440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E043Cu;
    // 0x1e0440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3630u, 0x1E043Cu, 0x1E0444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0444u;
label_1e0444:
    // 0x1e0444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e044c: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E044Cu;
    SET_GPR_U32(ctx, 31, 0x1E0454u);
    ctx->pc = 0x1E0450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E044Cu;
    // 0x1e0450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E044Cu, 0x1E0454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0454u;
label_1e0454:
    // 0x1e0454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e045c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e045cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0460: 0xc078f90  jal         func_1E3E40
    ctx->pc = 0x1E0460u;
    SET_GPR_U32(ctx, 31, 0x1E0468u);
    ctx->pc = 0x1E0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0460u;
    // 0x1e0464: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3E40u, 0x1E0460u, 0x1E0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0468u;
label_1e0468:
    // 0x1e0468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e046c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0474: 0xc078f90  jal         func_1E3E40
    ctx->pc = 0x1E0474u;
    SET_GPR_U32(ctx, 31, 0x1E047Cu);
    ctx->pc = 0x1E0478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0474u;
    // 0x1e0478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3E40u, 0x1E0474u, 0x1E047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E047Cu;
label_1e047c:
    // 0x1e047c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e047cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0480: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e0480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0488: 0xc078f90  jal         func_1E3E40
    ctx->pc = 0x1E0488u;
    SET_GPR_U32(ctx, 31, 0x1E0490u);
    ctx->pc = 0x1E048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0488u;
    // 0x1e048c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3E40u, 0x1E0488u, 0x1E0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0490u;
label_1e0490:
    // 0x1e0490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0494: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e0494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e0498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e049c: 0xc078f90  jal         func_1E3E40
    ctx->pc = 0x1E049Cu;
    SET_GPR_U32(ctx, 31, 0x1E04A4u);
    ctx->pc = 0x1E04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E049Cu;
    // 0x1e04a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3E40u, 0x1E049Cu, 0x1E04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04A4u;
label_1e04a4:
    // 0x1e04a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e04a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e04a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e04acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e04b0: 0xc078f90  jal         func_1E3E40
    ctx->pc = 0x1E04B0u;
    SET_GPR_U32(ctx, 31, 0x1E04B8u);
    ctx->pc = 0x1E04B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04B0u;
    // 0x1e04b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3E40u, 0x1E04B0u, 0x1E04B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04B8u;
label_1e04b8:
    // 0x1e04b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e04b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e04bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04c0: 0xc07910e  jal         func_1E4438
    ctx->pc = 0x1E04C0u;
    SET_GPR_U32(ctx, 31, 0x1E04C8u);
    ctx->pc = 0x1E04C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04C0u;
    // 0x1e04c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4438u, 0x1E04C0u, 0x1E04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04C8u;
label_1e04c8:
    // 0x1e04c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e04c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e04ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e04d0: 0xc07910e  jal         func_1E4438
    ctx->pc = 0x1E04D0u;
    SET_GPR_U32(ctx, 31, 0x1E04D8u);
    ctx->pc = 0x1E04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04D0u;
    // 0x1e04d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4438u, 0x1E04D0u, 0x1E04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04D8u;
label_1e04d8:
    // 0x1e04d8: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x1e04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1e04dc: 0x26230160  addiu       $v1, $s1, 0x160
    ctx->pc = 0x1e04dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1e04e0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e04e4: 0x26240268  addiu       $a0, $s1, 0x268
    ctx->pc = 0x1e04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    // 0x1e04e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e04ec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e04f0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e04f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e04f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e04f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e04fc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1e04fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e0500: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e0500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e0504: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e0504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e0508: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e0508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e050c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0510: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1e0510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1e0514:
    // 0x1e0514: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1e0514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1e0518: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1e0518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x1e051c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1e051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1e0520: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0520u;
    {
        const bool branch_taken_0x1e0520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0520u;
        // 0x1e0524: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0520) {
            ctx->pc = 0x1E0550u;
            goto label_1e0550;
        }
    }
    ctx->pc = 0x1E0528u;
    // 0x1e0528: 0xdc82fc24  ld          $v0, -0x3DC($a0)
    ctx->pc = 0x1e0528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294966308)));
    // 0x1e052c: 0x3403cc00  ori         $v1, $zero, 0xCC00
    ctx->pc = 0x1e052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1e0530: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1e0530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1e0534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e0534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e0538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0538u;
    {
        const bool branch_taken_0x1e0538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0538u;
        // 0x1e053c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0538) {
            ctx->pc = 0x1E0550u;
            goto label_1e0550;
        }
    }
    ctx->pc = 0x1E0540u;
    // 0x1e0540: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1e0540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1e0544: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1e0544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1e0548: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E0548u;
    SET_GPR_U32(ctx, 31, 0x1E0550u);
    ctx->pc = 0x1E054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0548u;
    // 0x1e054c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E0548u, 0x1E0550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0550u;
label_1e0550:
    // 0x1e0550: 0x9e220118  lwu         $v0, 0x118($s1)
    ctx->pc = 0x1e0550u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1e0554: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0558: 0x504000b4  beql        $v0, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1E0558u;
    {
        const bool branch_taken_0x1e0558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0558) {
            ctx->pc = 0x1E055Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0558u;
            // 0x1e055c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E082Cu;
            goto label_1e082c;
        }
    }
    ctx->pc = 0x1E0560u;
    // 0x1e0560: 0x9e220220  lwu         $v0, 0x220($s1)
    ctx->pc = 0x1e0560u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1e0564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0568: 0x504000b0  beql        $v0, $zero, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1E0568u;
    {
        const bool branch_taken_0x1e0568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0568) {
            ctx->pc = 0x1E056Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0568u;
            // 0x1e056c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E082Cu;
            goto label_1e082c;
        }
    }
    ctx->pc = 0x1E0570u;
    // 0x1e0570: 0x9e220328  lwu         $v0, 0x328($s1)
    ctx->pc = 0x1e0570u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1e0574: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0578: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1E0578u;
    {
        const bool branch_taken_0x1e0578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0578u;
        // 0x1e057c: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0578) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E0580u;
    // 0x1e0580: 0x9622048e  lhu         $v0, 0x48E($s1)
    ctx->pc = 0x1e0580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1166)));
    // 0x1e0584: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E0584u;
    {
        const bool branch_taken_0x1e0584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0584u;
        // 0x1e0588: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0584) {
            ctx->pc = 0x1E05DCu;
            goto label_1e05dc;
        }
    }
    ctx->pc = 0x1E058Cu;
    // 0x1e058c: 0x24c274a0  addiu       $v0, $a2, 0x74A0
    ctx->pc = 0x1e058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x1e0590: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e0590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0594: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x1e0594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x1e0598: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1e0598u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1e059c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e059cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e05a0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E05A0u;
    {
        const bool branch_taken_0x1e05a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05A0u;
        // 0x1e05a4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05a0) {
            ctx->pc = 0x1E05DCu;
            goto label_1e05dc;
        }
    }
    ctx->pc = 0x1E05A8u;
    // 0x1e05a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e05a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e05acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e05b0: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1e05b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1e05b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e05b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e05b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e05b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e05bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e05bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05c0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E05C0u;
    SET_GPR_U32(ctx, 31, 0x1E05C8u);
    ctx->pc = 0x1E05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E05C0u;
    // 0x1e05c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E05C0u, 0x1E05C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E05C8u;
label_1e05c8:
    // 0x1e05c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e05c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e05cc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e05d0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1e05d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1e05d4: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1E05D4u;
    {
        const bool branch_taken_0x1e05d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D4u;
        // 0x1e05d8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05d4) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E05DCu;
label_1e05dc:
    // 0x1e05dc: 0x24c374a0  addiu       $v1, $a2, 0x74A0
    ctx->pc = 0x1e05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x1e05e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e05e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e05e4: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x1e05e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x1e05e8: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1e05e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1e05ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e05ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e05f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E05F0u;
    {
        const bool branch_taken_0x1e05f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05F0u;
        // 0x1e05f4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05f0) {
            ctx->pc = 0x1E0650u;
            goto label_1e0650;
        }
    }
    ctx->pc = 0x1E05F8u;
    // 0x1e05f8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1e05f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e05fc: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1E05FCu;
    {
        const bool branch_taken_0x1e05fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05FCu;
        // 0x1e0600: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05fc) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E0604u;
    // 0x1e0604: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x1e0604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1e0608: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1E0608u;
    SET_GPR_U32(ctx, 31, 0x1E0610u);
    ctx->pc = 0x1E060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0608u;
    // 0x1e060c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1E0608u, 0x1E0610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0610u;
label_1e0610:
    // 0x1e0610: 0x8e2503c8  lw          $a1, 0x3C8($s1)
    ctx->pc = 0x1e0610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 968)));
    // 0x1e0614: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1e0614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e0618: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x1E0618u;
    {
        const bool branch_taken_0x1e0618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0618) {
            ctx->pc = 0x1E061Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0618u;
            // 0x1e061c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E082Cu;
            goto label_1e082c;
        }
    }
    ctx->pc = 0x1E0620u;
    // 0x1e0620: 0x9622048e  lhu         $v0, 0x48E($s1)
    ctx->pc = 0x1e0620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1166)));
    // 0x1e0624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e062c: 0xc07ea1c  jal         func_1FA870
    ctx->pc = 0x1E062Cu;
    SET_GPR_U32(ctx, 31, 0x1E0634u);
    ctx->pc = 0x1E0630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E062Cu;
    // 0x1e0630: 0xa622048e  sh          $v0, 0x48E($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1166), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA870u, 0x1E062Cu, 0x1E0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0634u;
label_1e0634:
    // 0x1e0634: 0xc078d8c  jal         func_1E3630
    ctx->pc = 0x1E0634u;
    SET_GPR_U32(ctx, 31, 0x1E063Cu);
    ctx->pc = 0x1E0638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0634u;
    // 0x1e0638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3630u, 0x1E0634u, 0x1E063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E063Cu;
label_1e063c:
    // 0x1e063c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e063cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e0640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0644: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e0644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e0648: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E0648u;
    {
        const bool branch_taken_0x1e0648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0648u;
        // 0x1e064c: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0648) {
            ctx->pc = 0x1E069Cu;
            goto label_1e069c;
        }
    }
    ctx->pc = 0x1E0650u;
label_1e0650:
    // 0x1e0650: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e0650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0654: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x1e0654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x1e0658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e065c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E065Cu;
    {
        const bool branch_taken_0x1e065c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E065Cu;
        // 0x1e0660: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e065c) {
            ctx->pc = 0x1E06B8u;
            goto label_1e06b8;
        }
    }
    ctx->pc = 0x1E0664u;
    // 0x1e0664: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1E0664u;
    {
        const bool branch_taken_0x1e0664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0664u;
        // 0x1e0668: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0664) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E066Cu;
    // 0x1e066c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1e066cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1e0670: 0x8e2503c8  lw          $a1, 0x3C8($s1)
    ctx->pc = 0x1e0670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 968)));
    // 0x1e0674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0678: 0xa622048e  sh          $v0, 0x48E($s1)
    ctx->pc = 0x1e0678u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1166), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e067c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E067Cu;
    SET_GPR_U32(ctx, 31, 0x1E0684u);
    ctx->pc = 0x1E0680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E067Cu;
    // 0x1e0680: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E067Cu, 0x1E0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0684u;
label_1e0684:
    // 0x1e0684: 0xc078d8c  jal         func_1E3630
    ctx->pc = 0x1E0684u;
    SET_GPR_U32(ctx, 31, 0x1E068Cu);
    ctx->pc = 0x1E0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0684u;
    // 0x1e0688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3630u, 0x1E0684u, 0x1E068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E068Cu;
label_1e068c:
    // 0x1e068c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e068cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e0690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0694: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e0694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e0698: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1e0698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
label_1e069c:
    // 0x1e069c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e069cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e06a0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e06a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e06a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e06a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06a8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E06A8u;
    SET_GPR_U32(ctx, 31, 0x1E06B0u);
    ctx->pc = 0x1E06ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06A8u;
    // 0x1e06ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E06A8u, 0x1E06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06B0u;
label_1e06b0:
    // 0x1e06b0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1E06B0u;
    {
        const bool branch_taken_0x1e06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06B0u;
        // 0x1e06b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06b0) {
            ctx->pc = 0x1E082Cu;
            goto label_1e082c;
        }
    }
    ctx->pc = 0x1E06B8u;
label_1e06b8:
    // 0x1e06b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E06B8u;
    {
        const bool branch_taken_0x1e06b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06B8u;
        // 0x1e06bc: 0x24c274a0  addiu       $v0, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06b8) {
            ctx->pc = 0x1E06F0u;
            goto label_1e06f0;
        }
    }
    ctx->pc = 0x1E06C0u;
    // 0x1e06c0: 0x34028802  ori         $v0, $zero, 0x8802
    ctx->pc = 0x1e06c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34818);
    // 0x1e06c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1e06c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1e06c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e06c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e06cc: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1e06ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1e06d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e06d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e06d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E06D4u;
    {
        const bool branch_taken_0x1e06d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06D4u;
        // 0x1e06d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06d4) {
            ctx->pc = 0x1E06ECu;
            goto label_1e06ec;
        }
    }
    ctx->pc = 0x1E06DCu;
    // 0x1e06dc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e06e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e06e4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1E06E4u;
    {
        const bool branch_taken_0x1e06e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06E4u;
        // 0x1e06e8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06e4) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E06ECu;
label_1e06ec:
    // 0x1e06ec: 0x24c274a0  addiu       $v0, $a2, 0x74A0
    ctx->pc = 0x1e06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
label_1e06f0:
    // 0x1e06f0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e06f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e06f4: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x1e06f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x1e06f8: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1e06f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1e06fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e06fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e0700: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E0700u;
    {
        const bool branch_taken_0x1e0700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0700u;
        // 0x1e0704: 0x262404d0  addiu       $a0, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0700) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E0708u;
    // 0x1e0708: 0xc079d98  jal         func_1E7660
    ctx->pc = 0x1E0708u;
    SET_GPR_U32(ctx, 31, 0x1E0710u);
    ctx->pc = 0x1E070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0708u;
    // 0x1e070c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7660u, 0x1E0708u, 0x1E0710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0710u;
label_1e0710:
    // 0x1e0710: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1e0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e0714: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e0714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e0718: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e0718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1e071c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e0720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0724: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1e0724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1e0728: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e0728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e072c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e072cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e0730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0734: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E0734u;
    SET_GPR_U32(ctx, 31, 0x1E073Cu);
    ctx->pc = 0x1E0738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0734u;
    // 0x1e0738: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E0734u, 0x1E073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E073Cu;
label_1e073c:
    // 0x1e073c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e073cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e0744: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1E0744u;
    {
        const bool branch_taken_0x1e0744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0744u;
        // 0x1e0748: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0744) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E074Cu;
label_1e074c:
    // 0x1e074c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e0750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0750u;
    {
        const bool branch_taken_0x1e0750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0750u;
        // 0x1e0754: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0750) {
            ctx->pc = 0x1E0764u;
            goto label_1e0764;
        }
    }
    ctx->pc = 0x1E0758u;
    // 0x1e0758: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e075c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E075Cu;
    {
        const bool branch_taken_0x1e075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E075Cu;
        // 0x1e0760: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e075c) {
            ctx->pc = 0x1E0768u;
            goto label_1e0768;
        }
    }
    ctx->pc = 0x1E0764u;
label_1e0764:
    // 0x1e0764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0768:
    // 0x1e0768: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e0768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e076c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E076Cu;
    {
        const bool branch_taken_0x1e076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E076Cu;
        // 0x1e0770: 0x262404d0  addiu       $a0, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e076c) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E0774u;
    // 0x1e0774: 0xc079dec  jal         func_1E77B0
    ctx->pc = 0x1E0774u;
    SET_GPR_U32(ctx, 31, 0x1E077Cu);
    ctx->pc = 0x1E0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0774u;
    // 0x1e0778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E77B0u, 0x1E0774u, 0x1E077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E077Cu;
label_1e077c:
    // 0x1e077c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0780: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e0780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e0784: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e0784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1e0788: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E0788u;
    {
        const bool branch_taken_0x1e0788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0788u;
        // 0x1e078c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0788) {
            ctx->pc = 0x1E0824u;
            goto label_1e0824;
        }
    }
    ctx->pc = 0x1E0790u;
label_1e0790:
    // 0x1e0790: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e0794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0794u;
    {
        const bool branch_taken_0x1e0794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0794u;
        // 0x1e0798: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0794) {
            ctx->pc = 0x1E07A8u;
            goto label_1e07a8;
        }
    }
    ctx->pc = 0x1E079Cu;
    // 0x1e079c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e079cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E07A0u;
    {
        const bool branch_taken_0x1e07a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07A0u;
        // 0x1e07a4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07a0) {
            ctx->pc = 0x1E07ACu;
            goto label_1e07ac;
        }
    }
    ctx->pc = 0x1E07A8u;
label_1e07a8:
    // 0x1e07a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e07ac:
    // 0x1e07ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e07acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e07b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E07B0u;
    {
        const bool branch_taken_0x1e07b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07B0u;
        // 0x1e07b4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07b0) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E07B8u;
    // 0x1e07b8: 0x3404cfc0  ori         $a0, $zero, 0xCFC0
    ctx->pc = 0x1e07b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53184);
    // 0x1e07bc: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x1e07bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x1e07c0: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1e07c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x1e07c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e07c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e07c8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E07C8u;
    {
        const bool branch_taken_0x1e07c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07C8u;
        // 0x1e07cc: 0x263004d0  addiu       $s0, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07c8) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E07D0u;
    // 0x1e07d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e07d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07d4: 0xc079dec  jal         func_1E77B0
    ctx->pc = 0x1E07D4u;
    SET_GPR_U32(ctx, 31, 0x1E07DCu);
    ctx->pc = 0x1E07D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07D4u;
    // 0x1e07d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E77B0u, 0x1E07D4u, 0x1E07DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E07DCu;
label_1e07dc:
    // 0x1e07dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e07dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07e0: 0xc079d98  jal         func_1E7660
    ctx->pc = 0x1E07E0u;
    SET_GPR_U32(ctx, 31, 0x1E07E8u);
    ctx->pc = 0x1E07E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07E0u;
    // 0x1e07e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7660u, 0x1E07E0u, 0x1E07E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E07E8u;
label_1e07e8:
    // 0x1e07e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e07ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e07f0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e07f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1e07f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E07F4u;
    {
        const bool branch_taken_0x1e07f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07F4u;
        // 0x1e07f8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07f4) {
            ctx->pc = 0x1E0824u;
            goto label_1e0824;
        }
    }
    ctx->pc = 0x1E07FCu;
label_1e07fc:
    // 0x1e07fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e0800: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0800u;
    {
        const bool branch_taken_0x1e0800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0800u;
        // 0x1e0804: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0800) {
            ctx->pc = 0x1E0814u;
            goto label_1e0814;
        }
    }
    ctx->pc = 0x1E0808u;
    // 0x1e0808: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e080c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E080Cu;
    {
        const bool branch_taken_0x1e080c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E080Cu;
        // 0x1e0810: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e080c) {
            ctx->pc = 0x1E0818u;
            goto label_1e0818;
        }
    }
    ctx->pc = 0x1E0814u;
label_1e0814:
    // 0x1e0814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0818:
    // 0x1e0818: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e0818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e081c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E081Cu;
    {
        const bool branch_taken_0x1e081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E081Cu;
        // 0x1e0820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e081c) {
            ctx->pc = 0x1E0828u;
            goto label_1e0828;
        }
    }
    ctx->pc = 0x1E0824u;
label_1e0824:
    // 0x1e0824: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1e0824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1e0828:
    // 0x1e0828: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e0828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e082c:
    // 0x1e082c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e082cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0834: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0834u;
        // 0x1e0838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E083Cu;
    // 0x1e083c: 0x0  nop
    ctx->pc = 0x1e083cu;
    // NOP
    ctx->pc = 0x1e0840u;
}
