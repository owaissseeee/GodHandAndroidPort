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

// Function: func_001DD340
// Address: 0x1dd340 - 0x1dd5a0
void func_001DD340_0x1dd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD340_0x1dd340");
#endif

    switch (ctx->pc) {
        case 0x1dd35cu: goto label_1dd35c;
        case 0x1dd36cu: goto label_1dd36c;
        case 0x1dd37cu: goto label_1dd37c;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3acu: goto label_1dd3ac;
        case 0x1dd3bcu: goto label_1dd3bc;
        case 0x1dd3ccu: goto label_1dd3cc;
        case 0x1dd3dcu: goto label_1dd3dc;
        case 0x1dd3ecu: goto label_1dd3ec;
        case 0x1dd3fcu: goto label_1dd3fc;
        case 0x1dd40cu: goto label_1dd40c;
        case 0x1dd41cu: goto label_1dd41c;
        case 0x1dd42cu: goto label_1dd42c;
        case 0x1dd43cu: goto label_1dd43c;
        case 0x1dd44cu: goto label_1dd44c;
        case 0x1dd45cu: goto label_1dd45c;
        case 0x1dd46cu: goto label_1dd46c;
        case 0x1dd47cu: goto label_1dd47c;
        case 0x1dd48cu: goto label_1dd48c;
        case 0x1dd49cu: goto label_1dd49c;
        case 0x1dd4acu: goto label_1dd4ac;
        case 0x1dd4bcu: goto label_1dd4bc;
        case 0x1dd4ccu: goto label_1dd4cc;
        case 0x1dd4dcu: goto label_1dd4dc;
        case 0x1dd4ecu: goto label_1dd4ec;
        case 0x1dd4fcu: goto label_1dd4fc;
        case 0x1dd50cu: goto label_1dd50c;
        case 0x1dd51cu: goto label_1dd51c;
        case 0x1dd52cu: goto label_1dd52c;
        case 0x1dd53cu: goto label_1dd53c;
        case 0x1dd54cu: goto label_1dd54c;
        case 0x1dd55cu: goto label_1dd55c;
        case 0x1dd56cu: goto label_1dd56c;
        case 0x1dd57cu: goto label_1dd57c;
        case 0x1dd58cu: goto label_1dd58c;
        default: break;
    }

    ctx->pc = 0x1dd340u;

    // 0x1dd340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd344: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1dd344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1dd348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd34c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd354: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD354u;
    SET_GPR_U32(ctx, 31, 0x1DD35Cu);
    ctx->pc = 0x1DD358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD354u;
    // 0x1dd358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD354u, 0x1DD35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD35Cu;
label_1dd35c:
    // 0x1dd35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd364: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD364u;
    SET_GPR_U32(ctx, 31, 0x1DD36Cu);
    ctx->pc = 0x1DD368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD364u;
    // 0x1dd368: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD364u, 0x1DD36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD36Cu;
label_1dd36c:
    // 0x1dd36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd370: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dd370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd374: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD374u;
    SET_GPR_U32(ctx, 31, 0x1DD37Cu);
    ctx->pc = 0x1DD378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD374u;
    // 0x1dd378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD374u, 0x1DD37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD37Cu;
label_1dd37c:
    // 0x1dd37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd380: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd384: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD384u;
    SET_GPR_U32(ctx, 31, 0x1DD38Cu);
    ctx->pc = 0x1DD388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD384u;
    // 0x1dd388: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD384u, 0x1DD38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD38Cu;
label_1dd38c:
    // 0x1dd38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd390: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1dd394: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD394u;
    SET_GPR_U32(ctx, 31, 0x1DD39Cu);
    ctx->pc = 0x1DD398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD394u;
    // 0x1dd398: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD394u, 0x1DD39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD39Cu;
label_1dd39c:
    // 0x1dd39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3a0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1dd3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1dd3a4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD3A4u;
    SET_GPR_U32(ctx, 31, 0x1DD3ACu);
    ctx->pc = 0x1DD3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3A4u;
    // 0x1dd3a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD3A4u, 0x1DD3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3ACu;
label_1dd3ac:
    // 0x1dd3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3b0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1dd3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1dd3b4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD3B4u;
    SET_GPR_U32(ctx, 31, 0x1DD3BCu);
    ctx->pc = 0x1DD3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3B4u;
    // 0x1dd3b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD3B4u, 0x1DD3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3BCu;
label_1dd3bc:
    // 0x1dd3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3c0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1dd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1dd3c4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD3C4u;
    SET_GPR_U32(ctx, 31, 0x1DD3CCu);
    ctx->pc = 0x1DD3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3C4u;
    // 0x1dd3c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD3C4u, 0x1DD3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3CCu;
label_1dd3cc:
    // 0x1dd3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1dd3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dd3d4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD3D4u;
    SET_GPR_U32(ctx, 31, 0x1DD3DCu);
    ctx->pc = 0x1DD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3D4u;
    // 0x1dd3d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD3D4u, 0x1DD3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3DCu;
label_1dd3dc:
    // 0x1dd3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1dd3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1dd3e4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD3E4u;
    SET_GPR_U32(ctx, 31, 0x1DD3ECu);
    ctx->pc = 0x1DD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3E4u;
    // 0x1dd3e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD3E4u, 0x1DD3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3ECu;
label_1dd3ec:
    // 0x1dd3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3f0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1dd3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1dd3f4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD3F4u;
    SET_GPR_U32(ctx, 31, 0x1DD3FCu);
    ctx->pc = 0x1DD3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3F4u;
    // 0x1dd3f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD3F4u, 0x1DD3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3FCu;
label_1dd3fc:
    // 0x1dd3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd400: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1dd400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1dd404: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD404u;
    SET_GPR_U32(ctx, 31, 0x1DD40Cu);
    ctx->pc = 0x1DD408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD404u;
    // 0x1dd408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD404u, 0x1DD40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD40Cu;
label_1dd40c:
    // 0x1dd40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd410: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1dd410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1dd414: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD414u;
    SET_GPR_U32(ctx, 31, 0x1DD41Cu);
    ctx->pc = 0x1DD418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD414u;
    // 0x1dd418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD414u, 0x1DD41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD41Cu;
label_1dd41c:
    // 0x1dd41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd420: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1dd424: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD424u;
    SET_GPR_U32(ctx, 31, 0x1DD42Cu);
    ctx->pc = 0x1DD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD424u;
    // 0x1dd428: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD424u, 0x1DD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD42Cu;
label_1dd42c:
    // 0x1dd42c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd430: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1dd430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1dd434: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD434u;
    SET_GPR_U32(ctx, 31, 0x1DD43Cu);
    ctx->pc = 0x1DD438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD434u;
    // 0x1dd438: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD434u, 0x1DD43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD43Cu;
label_1dd43c:
    // 0x1dd43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd440: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1dd440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1dd444: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD444u;
    SET_GPR_U32(ctx, 31, 0x1DD44Cu);
    ctx->pc = 0x1DD448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD444u;
    // 0x1dd448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD444u, 0x1DD44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD44Cu;
label_1dd44c:
    // 0x1dd44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd450: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1dd450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1dd454: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD454u;
    SET_GPR_U32(ctx, 31, 0x1DD45Cu);
    ctx->pc = 0x1DD458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD454u;
    // 0x1dd458: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD454u, 0x1DD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD45Cu;
label_1dd45c:
    // 0x1dd45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd460: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1dd460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1dd464: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD464u;
    SET_GPR_U32(ctx, 31, 0x1DD46Cu);
    ctx->pc = 0x1DD468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD464u;
    // 0x1dd468: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD464u, 0x1DD46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD46Cu;
label_1dd46c:
    // 0x1dd46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd470: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1dd470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1dd474: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD474u;
    SET_GPR_U32(ctx, 31, 0x1DD47Cu);
    ctx->pc = 0x1DD478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD474u;
    // 0x1dd478: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD474u, 0x1DD47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD47Cu;
label_1dd47c:
    // 0x1dd47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd480: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1dd480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1dd484: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD484u;
    SET_GPR_U32(ctx, 31, 0x1DD48Cu);
    ctx->pc = 0x1DD488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD484u;
    // 0x1dd488: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD484u, 0x1DD48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD48Cu;
label_1dd48c:
    // 0x1dd48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd490: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1dd490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1dd494: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD494u;
    SET_GPR_U32(ctx, 31, 0x1DD49Cu);
    ctx->pc = 0x1DD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD494u;
    // 0x1dd498: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD494u, 0x1DD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD49Cu;
label_1dd49c:
    // 0x1dd49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4a0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1dd4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dd4a4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD4A4u;
    SET_GPR_U32(ctx, 31, 0x1DD4ACu);
    ctx->pc = 0x1DD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4A4u;
    // 0x1dd4a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD4A4u, 0x1DD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4ACu;
label_1dd4ac:
    // 0x1dd4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4b0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1dd4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1dd4b4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD4B4u;
    SET_GPR_U32(ctx, 31, 0x1DD4BCu);
    ctx->pc = 0x1DD4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4B4u;
    // 0x1dd4b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD4B4u, 0x1DD4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4BCu;
label_1dd4bc:
    // 0x1dd4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4c0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1dd4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1dd4c4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD4C4u;
    SET_GPR_U32(ctx, 31, 0x1DD4CCu);
    ctx->pc = 0x1DD4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4C4u;
    // 0x1dd4c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD4C4u, 0x1DD4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4CCu;
label_1dd4cc:
    // 0x1dd4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4d0: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1dd4d4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD4D4u;
    SET_GPR_U32(ctx, 31, 0x1DD4DCu);
    ctx->pc = 0x1DD4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4D4u;
    // 0x1dd4d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD4D4u, 0x1DD4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4DCu;
label_1dd4dc:
    // 0x1dd4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4e0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1dd4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1dd4e4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD4E4u;
    SET_GPR_U32(ctx, 31, 0x1DD4ECu);
    ctx->pc = 0x1DD4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4E4u;
    // 0x1dd4e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD4E4u, 0x1DD4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4ECu;
label_1dd4ec:
    // 0x1dd4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4f0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1dd4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1dd4f4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD4F4u;
    SET_GPR_U32(ctx, 31, 0x1DD4FCu);
    ctx->pc = 0x1DD4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4F4u;
    // 0x1dd4f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD4F4u, 0x1DD4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4FCu;
label_1dd4fc:
    // 0x1dd4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd500: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1dd500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1dd504: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD504u;
    SET_GPR_U32(ctx, 31, 0x1DD50Cu);
    ctx->pc = 0x1DD508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD504u;
    // 0x1dd508: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD504u, 0x1DD50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD50Cu;
label_1dd50c:
    // 0x1dd50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd510: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1dd510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1dd514: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD514u;
    SET_GPR_U32(ctx, 31, 0x1DD51Cu);
    ctx->pc = 0x1DD518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD514u;
    // 0x1dd518: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD514u, 0x1DD51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD51Cu;
label_1dd51c:
    // 0x1dd51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd520: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1dd520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dd524: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD524u;
    SET_GPR_U32(ctx, 31, 0x1DD52Cu);
    ctx->pc = 0x1DD528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD524u;
    // 0x1dd528: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD524u, 0x1DD52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD52Cu;
label_1dd52c:
    // 0x1dd52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd530: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1dd530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1dd534: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD534u;
    SET_GPR_U32(ctx, 31, 0x1DD53Cu);
    ctx->pc = 0x1DD538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD534u;
    // 0x1dd538: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD534u, 0x1DD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD53Cu;
label_1dd53c:
    // 0x1dd53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd540: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1dd540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1dd544: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD544u;
    SET_GPR_U32(ctx, 31, 0x1DD54Cu);
    ctx->pc = 0x1DD548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD544u;
    // 0x1dd548: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD544u, 0x1DD54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD54Cu;
label_1dd54c:
    // 0x1dd54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd550: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1dd550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1dd554: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD554u;
    SET_GPR_U32(ctx, 31, 0x1DD55Cu);
    ctx->pc = 0x1DD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD554u;
    // 0x1dd558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD554u, 0x1DD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD55Cu;
label_1dd55c:
    // 0x1dd55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd560: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1dd560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1dd564: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD564u;
    SET_GPR_U32(ctx, 31, 0x1DD56Cu);
    ctx->pc = 0x1DD568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD564u;
    // 0x1dd568: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD564u, 0x1DD56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD56Cu;
label_1dd56c:
    // 0x1dd56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd570: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1dd570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1dd574: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD574u;
    SET_GPR_U32(ctx, 31, 0x1DD57Cu);
    ctx->pc = 0x1DD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD574u;
    // 0x1dd578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD574u, 0x1DD57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD57Cu;
label_1dd57c:
    // 0x1dd57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd580: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1dd580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1dd584: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD584u;
    SET_GPR_U32(ctx, 31, 0x1DD58Cu);
    ctx->pc = 0x1DD588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD584u;
    // 0x1dd588: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD584u, 0x1DD58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD58Cu;
label_1dd58c:
    // 0x1dd58c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd594: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD594u;
        // 0x1dd598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD59Cu;
    // 0x1dd59c: 0x0  nop
    ctx->pc = 0x1dd59cu;
    // NOP
    ctx->pc = 0x1dd5a0u;
}
