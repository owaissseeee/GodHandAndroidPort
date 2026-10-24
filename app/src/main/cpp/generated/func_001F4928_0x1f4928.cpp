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

// Function: func_001F4928
// Address: 0x1f4928 - 0x1f4b78
void func_001F4928_0x1f4928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F4928_0x1f4928");
#endif

    switch (ctx->pc) {
        case 0x1f494cu: goto label_1f494c;
        case 0x1f495cu: goto label_1f495c;
        case 0x1f496cu: goto label_1f496c;
        case 0x1f497cu: goto label_1f497c;
        case 0x1f498cu: goto label_1f498c;
        case 0x1f499cu: goto label_1f499c;
        case 0x1f49acu: goto label_1f49ac;
        case 0x1f49bcu: goto label_1f49bc;
        case 0x1f49ccu: goto label_1f49cc;
        case 0x1f49dcu: goto label_1f49dc;
        case 0x1f49ecu: goto label_1f49ec;
        case 0x1f49fcu: goto label_1f49fc;
        case 0x1f4a0cu: goto label_1f4a0c;
        case 0x1f4a1cu: goto label_1f4a1c;
        case 0x1f4a2cu: goto label_1f4a2c;
        case 0x1f4a3cu: goto label_1f4a3c;
        case 0x1f4a4cu: goto label_1f4a4c;
        case 0x1f4a60u: goto label_1f4a60;
        case 0x1f4a70u: goto label_1f4a70;
        case 0x1f4a80u: goto label_1f4a80;
        case 0x1f4a90u: goto label_1f4a90;
        case 0x1f4aa0u: goto label_1f4aa0;
        case 0x1f4ab0u: goto label_1f4ab0;
        case 0x1f4ac0u: goto label_1f4ac0;
        case 0x1f4ad0u: goto label_1f4ad0;
        case 0x1f4ae0u: goto label_1f4ae0;
        case 0x1f4af0u: goto label_1f4af0;
        case 0x1f4b00u: goto label_1f4b00;
        case 0x1f4b10u: goto label_1f4b10;
        case 0x1f4b20u: goto label_1f4b20;
        case 0x1f4b30u: goto label_1f4b30;
        case 0x1f4b40u: goto label_1f4b40;
        case 0x1f4b50u: goto label_1f4b50;
        case 0x1f4b60u: goto label_1f4b60;
        default: break;
    }

    ctx->pc = 0x1f4928u;

    // 0x1f4928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f492c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f492cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4930: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f4930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f4934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f4938: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f4938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f493c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f493cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4944: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4944u;
    SET_GPR_U32(ctx, 31, 0x1F494Cu);
    ctx->pc = 0x1F4948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4944u;
    // 0x1f4948: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4944u, 0x1F494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F494Cu;
label_1f494c:
    // 0x1f494c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4950: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1f4950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1f4954: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4954u;
    SET_GPR_U32(ctx, 31, 0x1F495Cu);
    ctx->pc = 0x1F4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4954u;
    // 0x1f4958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4954u, 0x1F495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F495Cu;
label_1f495c:
    // 0x1f495c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f495cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4960: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1f4960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1f4964: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4964u;
    SET_GPR_U32(ctx, 31, 0x1F496Cu);
    ctx->pc = 0x1F4968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4964u;
    // 0x1f4968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4964u, 0x1F496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F496Cu;
label_1f496c:
    // 0x1f496c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4970: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1f4974: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4974u;
    SET_GPR_U32(ctx, 31, 0x1F497Cu);
    ctx->pc = 0x1F4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4974u;
    // 0x1f4978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4974u, 0x1F497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F497Cu;
label_1f497c:
    // 0x1f497c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4980: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x1f4980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1f4984: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4984u;
    SET_GPR_U32(ctx, 31, 0x1F498Cu);
    ctx->pc = 0x1F4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4984u;
    // 0x1f4988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4984u, 0x1F498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F498Cu;
label_1f498c:
    // 0x1f498c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4990: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x1f4990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1f4994: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4994u;
    SET_GPR_U32(ctx, 31, 0x1F499Cu);
    ctx->pc = 0x1F4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4994u;
    // 0x1f4998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4994u, 0x1F499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F499Cu;
label_1f499c:
    // 0x1f499c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49a0: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x1f49a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1f49a4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F49A4u;
    SET_GPR_U32(ctx, 31, 0x1F49ACu);
    ctx->pc = 0x1F49A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49A4u;
    // 0x1f49a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F49A4u, 0x1F49ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49ACu;
label_1f49ac:
    // 0x1f49ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f49acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49b0: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x1f49b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1f49b4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F49B4u;
    SET_GPR_U32(ctx, 31, 0x1F49BCu);
    ctx->pc = 0x1F49B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49B4u;
    // 0x1f49b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F49B4u, 0x1F49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49BCu;
label_1f49bc:
    // 0x1f49bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f49bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49c0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1f49c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1f49c4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F49C4u;
    SET_GPR_U32(ctx, 31, 0x1F49CCu);
    ctx->pc = 0x1F49C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49C4u;
    // 0x1f49c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F49C4u, 0x1F49CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49CCu;
label_1f49cc:
    // 0x1f49cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f49ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49d0: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x1f49d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1f49d4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F49D4u;
    SET_GPR_U32(ctx, 31, 0x1F49DCu);
    ctx->pc = 0x1F49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49D4u;
    // 0x1f49d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F49D4u, 0x1F49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49DCu;
label_1f49dc:
    // 0x1f49dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f49dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49e0: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1f49e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1f49e4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F49E4u;
    SET_GPR_U32(ctx, 31, 0x1F49ECu);
    ctx->pc = 0x1F49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49E4u;
    // 0x1f49e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F49E4u, 0x1F49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49ECu;
label_1f49ec:
    // 0x1f49ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f49ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49f0: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x1f49f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1f49f4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F49F4u;
    SET_GPR_U32(ctx, 31, 0x1F49FCu);
    ctx->pc = 0x1F49F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49F4u;
    // 0x1f49f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F49F4u, 0x1F49FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49FCu;
label_1f49fc:
    // 0x1f49fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f49fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a00: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x1f4a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1f4a04: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A04u;
    SET_GPR_U32(ctx, 31, 0x1F4A0Cu);
    ctx->pc = 0x1F4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A04u;
    // 0x1f4a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A04u, 0x1F4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A0Cu;
label_1f4a0c:
    // 0x1f4a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a10: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x1f4a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1f4a14: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A14u;
    SET_GPR_U32(ctx, 31, 0x1F4A1Cu);
    ctx->pc = 0x1F4A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A14u;
    // 0x1f4a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A14u, 0x1F4A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A1Cu;
label_1f4a1c:
    // 0x1f4a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a20: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x1f4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1f4a24: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A24u;
    SET_GPR_U32(ctx, 31, 0x1F4A2Cu);
    ctx->pc = 0x1F4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A24u;
    // 0x1f4a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A24u, 0x1F4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A2Cu;
label_1f4a2c:
    // 0x1f4a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a30: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1f4a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1f4a34: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A34u;
    SET_GPR_U32(ctx, 31, 0x1F4A3Cu);
    ctx->pc = 0x1F4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A34u;
    // 0x1f4a38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A34u, 0x1F4A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A3Cu;
label_1f4a3c:
    // 0x1f4a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a40: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1f4a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1f4a44: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A44u;
    SET_GPR_U32(ctx, 31, 0x1F4A4Cu);
    ctx->pc = 0x1F4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A44u;
    // 0x1f4a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A44u, 0x1F4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A4Cu;
label_1f4a4c:
    // 0x1f4a4c: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1F4A4Cu;
    {
        const bool branch_taken_0x1f4a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A4Cu;
        // 0x1f4a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a4c) {
            ctx->pc = 0x1F4B60u;
            goto label_1f4b60;
        }
    }
    ctx->pc = 0x1F4A54u;
    // 0x1f4a54: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1f4a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f4a58: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A58u;
    SET_GPR_U32(ctx, 31, 0x1F4A60u);
    ctx->pc = 0x1F4A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A58u;
    // 0x1f4a5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A58u, 0x1F4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A60u;
label_1f4a60:
    // 0x1f4a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a64: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1f4a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1f4a68: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A68u;
    SET_GPR_U32(ctx, 31, 0x1F4A70u);
    ctx->pc = 0x1F4A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A68u;
    // 0x1f4a6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A68u, 0x1F4A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A70u;
label_1f4a70:
    // 0x1f4a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a74: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1f4a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1f4a78: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A78u;
    SET_GPR_U32(ctx, 31, 0x1F4A80u);
    ctx->pc = 0x1F4A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A78u;
    // 0x1f4a7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A78u, 0x1F4A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A80u;
label_1f4a80:
    // 0x1f4a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a84: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1f4a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1f4a88: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A88u;
    SET_GPR_U32(ctx, 31, 0x1F4A90u);
    ctx->pc = 0x1F4A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A88u;
    // 0x1f4a8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A88u, 0x1F4A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A90u;
label_1f4a90:
    // 0x1f4a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a94: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x1f4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1f4a98: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4A98u;
    SET_GPR_U32(ctx, 31, 0x1F4AA0u);
    ctx->pc = 0x1F4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A98u;
    // 0x1f4a9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4A98u, 0x1F4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AA0u;
label_1f4aa0:
    // 0x1f4aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4aa4: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x1f4aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1f4aa8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4AA8u;
    SET_GPR_U32(ctx, 31, 0x1F4AB0u);
    ctx->pc = 0x1F4AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AA8u;
    // 0x1f4aac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4AA8u, 0x1F4AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AB0u;
label_1f4ab0:
    // 0x1f4ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ab4: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x1f4ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1f4ab8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4AB8u;
    SET_GPR_U32(ctx, 31, 0x1F4AC0u);
    ctx->pc = 0x1F4ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AB8u;
    // 0x1f4abc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4AB8u, 0x1F4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AC0u;
label_1f4ac0:
    // 0x1f4ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ac4: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x1f4ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1f4ac8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4AC8u;
    SET_GPR_U32(ctx, 31, 0x1F4AD0u);
    ctx->pc = 0x1F4ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AC8u;
    // 0x1f4acc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4AC8u, 0x1F4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AD0u;
label_1f4ad0:
    // 0x1f4ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ad4: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1f4ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1f4ad8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4AD8u;
    SET_GPR_U32(ctx, 31, 0x1F4AE0u);
    ctx->pc = 0x1F4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AD8u;
    // 0x1f4adc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4AD8u, 0x1F4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AE0u;
label_1f4ae0:
    // 0x1f4ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ae4: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x1f4ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1f4ae8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4AE8u;
    SET_GPR_U32(ctx, 31, 0x1F4AF0u);
    ctx->pc = 0x1F4AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AE8u;
    // 0x1f4aec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4AE8u, 0x1F4AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AF0u;
label_1f4af0:
    // 0x1f4af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4af4: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1f4af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1f4af8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4AF8u;
    SET_GPR_U32(ctx, 31, 0x1F4B00u);
    ctx->pc = 0x1F4AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AF8u;
    // 0x1f4afc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4AF8u, 0x1F4B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B00u;
label_1f4b00:
    // 0x1f4b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b04: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x1f4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1f4b08: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4B08u;
    SET_GPR_U32(ctx, 31, 0x1F4B10u);
    ctx->pc = 0x1F4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B08u;
    // 0x1f4b0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4B08u, 0x1F4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B10u;
label_1f4b10:
    // 0x1f4b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b14: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x1f4b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1f4b18: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4B18u;
    SET_GPR_U32(ctx, 31, 0x1F4B20u);
    ctx->pc = 0x1F4B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B18u;
    // 0x1f4b1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4B18u, 0x1F4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B20u;
label_1f4b20:
    // 0x1f4b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b24: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x1f4b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1f4b28: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4B28u;
    SET_GPR_U32(ctx, 31, 0x1F4B30u);
    ctx->pc = 0x1F4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B28u;
    // 0x1f4b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4B28u, 0x1F4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B30u;
label_1f4b30:
    // 0x1f4b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b34: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x1f4b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1f4b38: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4B38u;
    SET_GPR_U32(ctx, 31, 0x1F4B40u);
    ctx->pc = 0x1F4B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B38u;
    // 0x1f4b3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4B38u, 0x1F4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B40u;
label_1f4b40:
    // 0x1f4b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b44: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1f4b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1f4b48: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4B48u;
    SET_GPR_U32(ctx, 31, 0x1F4B50u);
    ctx->pc = 0x1F4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B48u;
    // 0x1f4b4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4B48u, 0x1F4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B50u;
label_1f4b50:
    // 0x1f4b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b54: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1f4b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1f4b58: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4B58u;
    SET_GPR_U32(ctx, 31, 0x1F4B60u);
    ctx->pc = 0x1F4B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B58u;
    // 0x1f4b5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4B58u, 0x1F4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B60u;
label_1f4b60:
    // 0x1f4b60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f4b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B6Cu;
        // 0x1f4b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4B74u;
    // 0x1f4b74: 0x0  nop
    ctx->pc = 0x1f4b74u;
    // NOP
    ctx->pc = 0x1f4b78u;
}
