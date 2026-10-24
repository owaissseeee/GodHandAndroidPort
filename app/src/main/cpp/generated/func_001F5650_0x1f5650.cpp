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

// Function: func_001F5650
// Address: 0x1f5650 - 0x1f5a58
void func_001F5650_0x1f5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F5650_0x1f5650");
#endif

    switch (ctx->pc) {
        case 0x1f56c4u: goto label_1f56c4;
        case 0x1f56d4u: goto label_1f56d4;
        case 0x1f56e4u: goto label_1f56e4;
        case 0x1f56f4u: goto label_1f56f4;
        case 0x1f5704u: goto label_1f5704;
        case 0x1f5714u: goto label_1f5714;
        case 0x1f5724u: goto label_1f5724;
        case 0x1f5734u: goto label_1f5734;
        case 0x1f5744u: goto label_1f5744;
        case 0x1f5754u: goto label_1f5754;
        case 0x1f5764u: goto label_1f5764;
        case 0x1f5774u: goto label_1f5774;
        case 0x1f5784u: goto label_1f5784;
        case 0x1f5794u: goto label_1f5794;
        case 0x1f57a4u: goto label_1f57a4;
        case 0x1f57b4u: goto label_1f57b4;
        case 0x1f57c4u: goto label_1f57c4;
        case 0x1f57fcu: goto label_1f57fc;
        case 0x1f5838u: goto label_1f5838;
        case 0x1f5860u: goto label_1f5860;
        case 0x1f5888u: goto label_1f5888;
        case 0x1f58b0u: goto label_1f58b0;
        case 0x1f58c0u: goto label_1f58c0;
        case 0x1f58d0u: goto label_1f58d0;
        case 0x1f58e0u: goto label_1f58e0;
        case 0x1f58f0u: goto label_1f58f0;
        case 0x1f5900u: goto label_1f5900;
        case 0x1f5910u: goto label_1f5910;
        case 0x1f5920u: goto label_1f5920;
        case 0x1f5930u: goto label_1f5930;
        case 0x1f5948u: goto label_1f5948;
        case 0x1f5968u: goto label_1f5968;
        case 0x1f5990u: goto label_1f5990;
        case 0x1f59acu: goto label_1f59ac;
        case 0x1f59d0u: goto label_1f59d0;
        case 0x1f59e4u: goto label_1f59e4;
        case 0x1f5a00u: goto label_1f5a00;
        case 0x1f5a10u: goto label_1f5a10;
        case 0x1f5a20u: goto label_1f5a20;
        default: break;
    }

    ctx->pc = 0x1f5650u;

    // 0x1f5650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f5650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f5654: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1f5654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1f5658: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f5658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1f565c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1f565cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1f5660: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f5660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1f5664: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1f5664u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1f5668: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1f5668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1f566c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1f566cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1f5670: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f5670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1f5674: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1f5674u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1f5678: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f567c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x1f567cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1f5680: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1f5680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1f5684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5688: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1f5688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1f568c: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1f568cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1f5690: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1f5690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1f5694: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1f5694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f5698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f569c: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x1f569cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1f56a0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1f56a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f56a4: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x1f56a4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1f56a8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1f56a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f56ac: 0x9b403  sra         $s6, $t1, 16
    ctx->pc = 0x1f56acu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 9), 16));
    // 0x1f56b0: 0xaa403  sra         $s4, $t2, 16
    ctx->pc = 0x1f56b0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 10), 16));
    // 0x1f56b4: 0xbbc03  sra         $s7, $t3, 16
    ctx->pc = 0x1f56b4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 16));
    // 0x1f56b8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1f56b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f56bc: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F56BCu;
    SET_GPR_U32(ctx, 31, 0x1F56C4u);
    ctx->pc = 0x1F56C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56BCu;
    // 0x1f56c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F56BCu, 0x1F56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56C4u;
label_1f56c4:
    // 0x1f56c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f56c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56c8: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1f56c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1f56cc: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F56CCu;
    SET_GPR_U32(ctx, 31, 0x1F56D4u);
    ctx->pc = 0x1F56D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56CCu;
    // 0x1f56d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F56CCu, 0x1F56D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56D4u;
label_1f56d4:
    // 0x1f56d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f56d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56d8: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1f56d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1f56dc: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F56DCu;
    SET_GPR_U32(ctx, 31, 0x1F56E4u);
    ctx->pc = 0x1F56E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56DCu;
    // 0x1f56e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F56DCu, 0x1F56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56E4u;
label_1f56e4:
    // 0x1f56e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f56e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56e8: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1f56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1f56ec: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F56ECu;
    SET_GPR_U32(ctx, 31, 0x1F56F4u);
    ctx->pc = 0x1F56F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56ECu;
    // 0x1f56f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F56ECu, 0x1F56F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56F4u;
label_1f56f4:
    // 0x1f56f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f56f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56f8: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x1f56f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1f56fc: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F56FCu;
    SET_GPR_U32(ctx, 31, 0x1F5704u);
    ctx->pc = 0x1F5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56FCu;
    // 0x1f5700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F56FCu, 0x1F5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5704u;
label_1f5704:
    // 0x1f5704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5708: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x1f5708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1f570c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F570Cu;
    SET_GPR_U32(ctx, 31, 0x1F5714u);
    ctx->pc = 0x1F5710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F570Cu;
    // 0x1f5710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F570Cu, 0x1F5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5714u;
label_1f5714:
    // 0x1f5714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5718: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x1f5718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1f571c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F571Cu;
    SET_GPR_U32(ctx, 31, 0x1F5724u);
    ctx->pc = 0x1F5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F571Cu;
    // 0x1f5720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F571Cu, 0x1F5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5724u;
label_1f5724:
    // 0x1f5724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5728: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x1f5728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1f572c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F572Cu;
    SET_GPR_U32(ctx, 31, 0x1F5734u);
    ctx->pc = 0x1F5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F572Cu;
    // 0x1f5730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F572Cu, 0x1F5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5734u;
label_1f5734:
    // 0x1f5734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5738: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1f5738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1f573c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F573Cu;
    SET_GPR_U32(ctx, 31, 0x1F5744u);
    ctx->pc = 0x1F5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F573Cu;
    // 0x1f5740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F573Cu, 0x1F5744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5744u;
label_1f5744:
    // 0x1f5744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5748: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x1f5748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1f574c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F574Cu;
    SET_GPR_U32(ctx, 31, 0x1F5754u);
    ctx->pc = 0x1F5750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F574Cu;
    // 0x1f5750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F574Cu, 0x1F5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5754u;
label_1f5754:
    // 0x1f5754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5758: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1f575c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F575Cu;
    SET_GPR_U32(ctx, 31, 0x1F5764u);
    ctx->pc = 0x1F5760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F575Cu;
    // 0x1f5760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F575Cu, 0x1F5764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5764u;
label_1f5764:
    // 0x1f5764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5768: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x1f5768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1f576c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F576Cu;
    SET_GPR_U32(ctx, 31, 0x1F5774u);
    ctx->pc = 0x1F5770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F576Cu;
    // 0x1f5770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F576Cu, 0x1F5774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5774u;
label_1f5774:
    // 0x1f5774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5778: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x1f5778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1f577c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F577Cu;
    SET_GPR_U32(ctx, 31, 0x1F5784u);
    ctx->pc = 0x1F5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F577Cu;
    // 0x1f5780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F577Cu, 0x1F5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5784u;
label_1f5784:
    // 0x1f5784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5788: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x1f5788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1f578c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F578Cu;
    SET_GPR_U32(ctx, 31, 0x1F5794u);
    ctx->pc = 0x1F5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F578Cu;
    // 0x1f5790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F578Cu, 0x1F5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5794u;
label_1f5794:
    // 0x1f5794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5798: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x1f5798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1f579c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F579Cu;
    SET_GPR_U32(ctx, 31, 0x1F57A4u);
    ctx->pc = 0x1F57A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F579Cu;
    // 0x1f57a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F579Cu, 0x1F57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57A4u;
label_1f57a4:
    // 0x1f57a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57a8: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1f57a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1f57ac: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F57ACu;
    SET_GPR_U32(ctx, 31, 0x1F57B4u);
    ctx->pc = 0x1F57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57ACu;
    // 0x1f57b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F57ACu, 0x1F57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57B4u;
label_1f57b4:
    // 0x1f57b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f57b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57b8: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1f57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1f57bc: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F57BCu;
    SET_GPR_U32(ctx, 31, 0x1F57C4u);
    ctx->pc = 0x1F57C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57BCu;
    // 0x1f57c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F57BCu, 0x1F57C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57C4u;
label_1f57c4:
    // 0x1f57c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f57c8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F57C8u;
    {
        const bool branch_taken_0x1f57c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57C8u;
        // 0x1f57cc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57c8) {
            ctx->pc = 0x1F57ECu;
            goto label_1f57ec;
        }
    }
    ctx->pc = 0x1F57D0u;
    // 0x1f57d0: 0x54400094  bnel        $v0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x1F57D0u;
    {
        const bool branch_taken_0x1f57d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f57d0) {
            ctx->pc = 0x1F57D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F57D0u;
            // 0x1f57d4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A24u;
            goto label_1f5a24;
        }
    }
    ctx->pc = 0x1F57D8u;
    // 0x1f57d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f57dc: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F57DCu;
    {
        const bool branch_taken_0x1f57dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57DCu;
        // 0x1f57e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57dc) {
            ctx->pc = 0x1F5804u;
            goto label_1f5804;
        }
    }
    ctx->pc = 0x1F57E4u;
    // 0x1f57e4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1F57E4u;
    {
        const bool branch_taken_0x1f57e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57E4u;
        // 0x1f57e8: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57e4) {
            ctx->pc = 0x1F5A28u;
            goto label_1f5a28;
        }
    }
    ctx->pc = 0x1F57ECu;
label_1f57ec:
    // 0x1f57ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f57ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57f0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1f57f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1f57f4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F57F4u;
    SET_GPR_U32(ctx, 31, 0x1F57FCu);
    ctx->pc = 0x1F57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57F4u;
    // 0x1f57f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F57F4u, 0x1F57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57FCu;
label_1f57fc:
    // 0x1f57fc: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1F57FCu;
    {
        const bool branch_taken_0x1f57fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57FCu;
        // 0x1f5800: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57fc) {
            ctx->pc = 0x1F5A24u;
            goto label_1f5a24;
        }
    }
    ctx->pc = 0x1F5804u;
label_1f5804:
    // 0x1f5804: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x1f5804u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5808: 0x0  nop
    ctx->pc = 0x1f5808u;
    // NOP
    // 0x1f580c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f580cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f5810: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1f5810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1f5814: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f5814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f5818: 0x26242a84  addiu       $a0, $s1, 0x2A84
    ctx->pc = 0x1f5818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10884));
    // 0x1f581c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5820: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5824: 0x0  nop
    ctx->pc = 0x1f5824u;
    // NOP
    // 0x1f5828: 0x0  nop
    ctx->pc = 0x1f5828u;
    // NOP
    // 0x1f582c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x1f582cu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x1f5830: 0xc0b5a6a  jal         func_2D69A8
    ctx->pc = 0x1F5830u;
    SET_GPR_U32(ctx, 31, 0x1F5838u);
    ctx->pc = 0x1F5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5830u;
    // 0x1f5834: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D69A8u, 0x1F5830u, 0x1F5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5838u;
label_1f5838:
    // 0x1f5838: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x1f5838u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f583c: 0x0  nop
    ctx->pc = 0x1f583cu;
    // NOP
    // 0x1f5840: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f5840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f5844: 0x26242b00  addiu       $a0, $s1, 0x2B00
    ctx->pc = 0x1f5844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11008));
    // 0x1f5848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f584c: 0x0  nop
    ctx->pc = 0x1f584cu;
    // NOP
    // 0x1f5850: 0x0  nop
    ctx->pc = 0x1f5850u;
    // NOP
    // 0x1f5854: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x1f5854u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x1f5858: 0xc0b5a6a  jal         func_2D69A8
    ctx->pc = 0x1F5858u;
    SET_GPR_U32(ctx, 31, 0x1F5860u);
    ctx->pc = 0x1F585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5858u;
    // 0x1f585c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D69A8u, 0x1F5858u, 0x1F5860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5860u;
label_1f5860:
    // 0x1f5860: 0x44956000  mtc1        $s5, $f12
    ctx->pc = 0x1f5860u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5864: 0x0  nop
    ctx->pc = 0x1f5864u;
    // NOP
    // 0x1f5868: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f5868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f586c: 0x26242c74  addiu       $a0, $s1, 0x2C74
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11380));
    // 0x1f5870: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5874: 0x0  nop
    ctx->pc = 0x1f5874u;
    // NOP
    // 0x1f5878: 0x0  nop
    ctx->pc = 0x1f5878u;
    // NOP
    // 0x1f587c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x1f587cu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x1f5880: 0xc0b5a6a  jal         func_2D69A8
    ctx->pc = 0x1F5880u;
    SET_GPR_U32(ctx, 31, 0x1F5888u);
    ctx->pc = 0x1F5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5880u;
    // 0x1f5884: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D69A8u, 0x1F5880u, 0x1F5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5888u;
label_1f5888:
    // 0x1f5888: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x1f5888u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f588c: 0x0  nop
    ctx->pc = 0x1f588cu;
    // NOP
    // 0x1f5890: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f5890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f5894: 0x26242cf0  addiu       $a0, $s1, 0x2CF0
    ctx->pc = 0x1f5894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11504));
    // 0x1f5898: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f589c: 0x0  nop
    ctx->pc = 0x1f589cu;
    // NOP
    // 0x1f58a0: 0x0  nop
    ctx->pc = 0x1f58a0u;
    // NOP
    // 0x1f58a4: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x1f58a4u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x1f58a8: 0xc0b5a6a  jal         func_2D69A8
    ctx->pc = 0x1F58A8u;
    SET_GPR_U32(ctx, 31, 0x1F58B0u);
    ctx->pc = 0x1F58ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58A8u;
    // 0x1f58ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D69A8u, 0x1F58A8u, 0x1F58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58B0u;
label_1f58b0:
    // 0x1f58b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f58b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58b4: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x1f58b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1f58b8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F58B8u;
    SET_GPR_U32(ctx, 31, 0x1F58C0u);
    ctx->pc = 0x1F58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58B8u;
    // 0x1f58bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F58B8u, 0x1F58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58C0u;
label_1f58c0:
    // 0x1f58c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f58c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58c4: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x1f58c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1f58c8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F58C8u;
    SET_GPR_U32(ctx, 31, 0x1F58D0u);
    ctx->pc = 0x1F58CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58C8u;
    // 0x1f58cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F58C8u, 0x1F58D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58D0u;
label_1f58d0:
    // 0x1f58d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f58d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58d4: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1f58d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1f58d8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F58D8u;
    SET_GPR_U32(ctx, 31, 0x1F58E0u);
    ctx->pc = 0x1F58DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58D8u;
    // 0x1f58dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F58D8u, 0x1F58E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58E0u;
label_1f58e0:
    // 0x1f58e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f58e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58e4: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x1f58e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1f58e8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F58E8u;
    SET_GPR_U32(ctx, 31, 0x1F58F0u);
    ctx->pc = 0x1F58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58E8u;
    // 0x1f58ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F58E8u, 0x1F58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58F0u;
label_1f58f0:
    // 0x1f58f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f58f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58f4: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1f58f8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F58F8u;
    SET_GPR_U32(ctx, 31, 0x1F5900u);
    ctx->pc = 0x1F58FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58F8u;
    // 0x1f58fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F58F8u, 0x1F5900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5900u;
label_1f5900:
    // 0x1f5900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5904: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x1f5904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1f5908: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5908u;
    SET_GPR_U32(ctx, 31, 0x1F5910u);
    ctx->pc = 0x1F590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5908u;
    // 0x1f590c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5908u, 0x1F5910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5910u;
label_1f5910:
    // 0x1f5910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5914: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x1f5914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1f5918: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5918u;
    SET_GPR_U32(ctx, 31, 0x1F5920u);
    ctx->pc = 0x1F591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5918u;
    // 0x1f591c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5918u, 0x1F5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5920u;
label_1f5920:
    // 0x1f5920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5924: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1f5928: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5928u;
    SET_GPR_U32(ctx, 31, 0x1F5930u);
    ctx->pc = 0x1F592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5928u;
    // 0x1f592c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5928u, 0x1F5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5930u;
label_1f5930:
    // 0x1f5930: 0x1a80002f  blez        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F5930u;
    {
        const bool branch_taken_0x1f5930 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x1F5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5930u;
        // 0x1f5934: 0x26302720  addiu       $s0, $s1, 0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5930) {
            ctx->pc = 0x1F59F0u;
            goto label_1f59f0;
        }
    }
    ctx->pc = 0x1F5938u;
    // 0x1f5938: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1f5938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f593c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f593cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f5940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f5940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f5944: 0x0  nop
    ctx->pc = 0x1f5944u;
    // NOP
label_1f5948:
    // 0x1f5948: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x1f5948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1f594c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F594Cu;
    {
        const bool branch_taken_0x1f594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F594Cu;
        // 0x1f5950: 0x26530050  addiu       $s3, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f594c) {
            ctx->pc = 0x1F5998u;
            goto label_1f5998;
        }
    }
    ctx->pc = 0x1F5954u;
    // 0x1f5954: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x1f5954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x1f5958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f595c: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1f595cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1f5960: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F5960u;
    SET_GPR_U32(ctx, 31, 0x1F5968u);
    ctx->pc = 0x1F5964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5960u;
    // 0x1f5964: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F5960u, 0x1F5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5968u;
label_1f5968:
    // 0x1f5968: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1f596c: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1f596cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1f5970: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f5970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f5974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5978: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1f5978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
    // 0x1f597c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1f597cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1f5980: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f5980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f5984: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f5984u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f5988: 0xc0b597e  jal         func_2D65F8
    ctx->pc = 0x1F5988u;
    SET_GPR_U32(ctx, 31, 0x1F5990u);
    ctx->pc = 0x1F598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5988u;
    // 0x1f598c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65F8u, 0x1F5988u, 0x1F5990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5990u;
label_1f5990:
    // 0x1f5990: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F5990u;
    {
        const bool branch_taken_0x1f5990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5990u;
        // 0x1f5994: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5990) {
            ctx->pc = 0x1F59D4u;
            goto label_1f59d4;
        }
    }
    ctx->pc = 0x1F5998u;
label_1f5998:
    // 0x1f5998: 0x3c05626c  lui         $a1, 0x626C
    ctx->pc = 0x1f5998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25196 << 16));
    // 0x1f599c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f59a0: 0x34a56c6c  ori         $a1, $a1, 0x6C6C
    ctx->pc = 0x1f59a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27756);
    // 0x1f59a4: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F59A4u;
    SET_GPR_U32(ctx, 31, 0x1F59ACu);
    ctx->pc = 0x1F59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59A4u;
    // 0x1f59a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F59A4u, 0x1F59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59ACu;
label_1f59ac:
    // 0x1f59ac: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x1f59acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
    // 0x1f59b0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1f59b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1f59b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f59b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f59b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f59b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f59bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f59bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f59c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f59c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f59c4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f59c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1f59c8: 0xc0b597e  jal         func_2D65F8
    ctx->pc = 0x1F59C8u;
    SET_GPR_U32(ctx, 31, 0x1F59D0u);
    ctx->pc = 0x1F59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59C8u;
    // 0x1f59cc: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65F8u, 0x1F59C8u, 0x1F59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59D0u;
label_1f59d0:
    // 0x1f59d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f59d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f59d4:
    // 0x1f59d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f59d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f59d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f59d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f59dc: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F59DCu;
    SET_GPR_U32(ctx, 31, 0x1F59E4u);
    ctx->pc = 0x1F59E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59DCu;
    // 0x1f59e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F59DCu, 0x1F59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59E4u;
label_1f59e4:
    // 0x1f59e4: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1f59e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1f59e8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1F59E8u;
    {
        const bool branch_taken_0x1f59e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59E8u;
        // 0x1f59ec: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59e8) {
            ctx->pc = 0x1F5948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5948;
        }
    }
    ctx->pc = 0x1F59F0u;
label_1f59f0:
    // 0x1f59f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f59f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f59f4: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x1f59f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1f59f8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F59F8u;
    SET_GPR_U32(ctx, 31, 0x1F5A00u);
    ctx->pc = 0x1F59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59F8u;
    // 0x1f59fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F59F8u, 0x1F5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A00u;
label_1f5a00:
    // 0x1f5a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a04: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1f5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1f5a08: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5A08u;
    SET_GPR_U32(ctx, 31, 0x1F5A10u);
    ctx->pc = 0x1F5A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A08u;
    // 0x1f5a0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5A08u, 0x1F5A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A10u;
label_1f5a10:
    // 0x1f5a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a14: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1f5a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1f5a18: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5A18u;
    SET_GPR_U32(ctx, 31, 0x1F5A20u);
    ctx->pc = 0x1F5A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A18u;
    // 0x1f5a1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5A18u, 0x1F5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A20u;
label_1f5a20:
    // 0x1f5a20: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f5a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f5a24:
    // 0x1f5a24: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f5a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5a28:
    // 0x1f5a28: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1f5a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5a2c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f5a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5a30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f5a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5a34: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1f5a34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5a38: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1f5a38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5a3c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1f5a3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5a44: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1f5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f5a48: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1f5a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A4Cu;
        // 0x1f5a50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5A54u;
    // 0x1f5a54: 0x0  nop
    ctx->pc = 0x1f5a54u;
    // NOP
    ctx->pc = 0x1f5a58u;
}
