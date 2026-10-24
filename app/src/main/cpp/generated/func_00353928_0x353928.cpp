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

// Function: func_00353928
// Address: 0x353928 - 0x353bd8
void func_00353928_0x353928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353928_0x353928");
#endif

    switch (ctx->pc) {
        case 0x353988u: goto label_353988;
        case 0x3539a4u: goto label_3539a4;
        case 0x3539b4u: goto label_3539b4;
        case 0x3539bcu: goto label_3539bc;
        case 0x3539c4u: goto label_3539c4;
        case 0x3539d8u: goto label_3539d8;
        case 0x3539f0u: goto label_3539f0;
        case 0x353a04u: goto label_353a04;
        case 0x353a0cu: goto label_353a0c;
        case 0x353a24u: goto label_353a24;
        case 0x353a5cu: goto label_353a5c;
        case 0x353a6cu: goto label_353a6c;
        case 0x353a7cu: goto label_353a7c;
        case 0x353a9cu: goto label_353a9c;
        case 0x353aa8u: goto label_353aa8;
        case 0x353ab8u: goto label_353ab8;
        case 0x353b50u: goto label_353b50;
        case 0x353b60u: goto label_353b60;
        case 0x353b74u: goto label_353b74;
        case 0x353b88u: goto label_353b88;
        case 0x353ba0u: goto label_353ba0;
        default: break;
    }

    ctx->pc = 0x353928u;

    // 0x353928: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x353928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x35392c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x35392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x353930: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x353930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353934: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x353934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x353938: 0x269609f8  addiu       $s6, $s4, 0x9F8
    ctx->pc = 0x353938u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 2552));
    // 0x35393c: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x35393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x353940: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x353940u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353944: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x353944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x353948: 0x26820950  addiu       $v0, $s4, 0x950
    ctx->pc = 0x353948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2384));
    // 0x35394c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x35394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x353950: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x353950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353954: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x353954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x353958: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x353958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35395c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x35395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x353960: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x353960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x353964: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x353964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x353968: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x353968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x35396c: 0x8e931fc0  lw          $s3, 0x1FC0($s4)
    ctx->pc = 0x35396cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8128)));
    // 0x353970: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x353970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x353974: 0x267e008c  addiu       $fp, $s3, 0x8C
    ctx->pc = 0x353974u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x353978: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x353978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35397c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x35397cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353980: 0xc0d4ef6  jal         func_353BD8
    ctx->pc = 0x353980u;
    SET_GPR_U32(ctx, 31, 0x353988u);
    ctx->pc = 0x353984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353980u;
    // 0x353984: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BD8u, 0x353980u, 0x353988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353988u;
label_353988:
    // 0x353988: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x353988u;
    {
        const bool branch_taken_0x353988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353988) {
            ctx->pc = 0x35398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353988u;
            // 0x35398c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353BA4u;
            goto label_353ba4;
        }
    }
    ctx->pc = 0x353990u;
    // 0x353990: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x353990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x353994: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x353994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x353998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x353998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35399c: 0xc0d4fb8  jal         func_353EE0
    ctx->pc = 0x35399Cu;
    SET_GPR_U32(ctx, 31, 0x3539A4u);
    ctx->pc = 0x3539A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35399Cu;
    // 0x3539a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353EE0u, 0x35399Cu, 0x3539A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3539A4u;
label_3539a4:
    // 0x3539a4: 0x2665108c  addiu       $a1, $s3, 0x108C
    ctx->pc = 0x3539a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4236));
    // 0x3539a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3539a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3539ac: 0xc0d510c  jal         func_354430
    ctx->pc = 0x3539ACu;
    SET_GPR_U32(ctx, 31, 0x3539B4u);
    ctx->pc = 0x3539B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3539ACu;
    // 0x3539b0: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354430u, 0x3539ACu, 0x3539B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3539B4u;
label_3539b4:
    // 0x3539b4: 0xc0d4fda  jal         func_353F68
    ctx->pc = 0x3539B4u;
    SET_GPR_U32(ctx, 31, 0x3539BCu);
    ctx->pc = 0x3539B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3539B4u;
    // 0x3539b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F68u, 0x3539B4u, 0x3539BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3539BCu;
label_3539bc:
    // 0x3539bc: 0xc0d6e96  jal         func_35BA58
    ctx->pc = 0x3539BCu;
    SET_GPR_U32(ctx, 31, 0x3539C4u);
    ctx->pc = 0x35BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA58u, 0x3539BCu, 0x3539C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3539C4u;
label_3539c4:
    // 0x3539c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3539c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3539c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3539ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3539d0: 0xc0ce804  jal         func_33A010
    ctx->pc = 0x3539D0u;
    SET_GPR_U32(ctx, 31, 0x3539D8u);
    ctx->pc = 0x3539D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3539D0u;
    // 0x3539d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x3539D0u, 0x3539D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3539D8u;
label_3539d8:
    // 0x3539d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3539d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x3539dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3539e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3539e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3539e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539e8: 0xc0d5ac4  jal         func_356B10
    ctx->pc = 0x3539E8u;
    SET_GPR_U32(ctx, 31, 0x3539F0u);
    ctx->pc = 0x3539ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3539E8u;
    // 0x3539ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356B10u, 0x3539E8u, 0x3539F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3539F0u;
label_3539f0:
    // 0x3539f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3539f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3539f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3539f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3539f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539fc: 0xc0ce804  jal         func_33A010
    ctx->pc = 0x3539FCu;
    SET_GPR_U32(ctx, 31, 0x353A04u);
    ctx->pc = 0x353A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3539FCu;
    // 0x353a00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x3539FCu, 0x353A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A04u;
label_353a04:
    // 0x353a04: 0xc0d6e96  jal         func_35BA58
    ctx->pc = 0x353A04u;
    SET_GPR_U32(ctx, 31, 0x353A0Cu);
    ctx->pc = 0x353A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A04u;
    // 0x353a08: 0x50a823  subu        $s5, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA58u, 0x353A04u, 0x353A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A0Cu;
label_353a0c:
    // 0x353a0c: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x353a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x353a10: 0x52282f  dsubu       $a1, $v0, $s2
    ctx->pc = 0x353a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x353a14: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x353a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x353a18: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x353a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x353a1c: 0xc0d6ed8  jal         func_35BB60
    ctx->pc = 0x353A1Cu;
    SET_GPR_U32(ctx, 31, 0x353A24u);
    ctx->pc = 0x353A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A1Cu;
    // 0x353a20: 0x248436c0  addiu       $a0, $a0, 0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BB60u, 0x353A1Cu, 0x353A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A24u;
label_353a24:
    // 0x353a24: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x353a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x353a28: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x353a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x353a2c: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x353a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x353a30: 0x8fa8002c  lw          $t0, 0x2C($sp)
    ctx->pc = 0x353a30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x353a34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x353a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a38: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x353a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x353a3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x353a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x353a40: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x353a40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x353a44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x353a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a48: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x353a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x353a4c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x353a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a50: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x353a50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x353a54: 0xc0d4706  jal         func_351C18
    ctx->pc = 0x353A54u;
    SET_GPR_U32(ctx, 31, 0x353A5Cu);
    ctx->pc = 0x353A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A54u;
    // 0x353a58: 0x34e70f06  ori         $a3, $a3, 0xF06 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3846);
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C18u, 0x353A54u, 0x353A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A5Cu;
label_353a5c:
    // 0x353a5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x353a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a64: 0xc0d46dc  jal         func_351B70
    ctx->pc = 0x353A64u;
    SET_GPR_U32(ctx, 31, 0x353A6Cu);
    ctx->pc = 0x353A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A64u;
    // 0x353a68: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B70u, 0x353A64u, 0x353A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A6Cu;
label_353a6c:
    // 0x353a6c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x353A6Cu;
    {
        const bool branch_taken_0x353a6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a6c) {
            ctx->pc = 0x353A88u;
            goto label_353a88;
        }
    }
    ctx->pc = 0x353A74u;
    // 0x353a74: 0xc0d558c  jal         func_355630
    ctx->pc = 0x353A74u;
    SET_GPR_U32(ctx, 31, 0x353A7Cu);
    ctx->pc = 0x353A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A74u;
    // 0x353a78: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355630u, 0x353A74u, 0x353A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A7Cu;
label_353a7c:
    // 0x353a7c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x353A7Cu;
    {
        const bool branch_taken_0x353a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353A7Cu;
        // 0x353a80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353a7c) {
            ctx->pc = 0x353BA4u;
            goto label_353ba4;
        }
    }
    ctx->pc = 0x353A84u;
    // 0x353a84: 0x0  nop
    ctx->pc = 0x353a84u;
    // NOP
label_353a88:
    // 0x353a88: 0x5aa00041  blezl       $s5, . + 4 + (0x41 << 2)
    ctx->pc = 0x353A88u;
    {
        const bool branch_taken_0x353a88 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x353a88) {
            ctx->pc = 0x353A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353A88u;
            // 0x353a8c: 0x8e620168  lw          $v0, 0x168($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353B90u;
            goto label_353b90;
        }
    }
    ctx->pc = 0x353A90u;
    // 0x353a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a94: 0xc0d553e  jal         func_3554F8
    ctx->pc = 0x353A94u;
    SET_GPR_U32(ctx, 31, 0x353A9Cu);
    ctx->pc = 0x353A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A94u;
    // 0x353a98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3554F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3554F8u, 0x353A94u, 0x353A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A9Cu;
label_353a9c:
    // 0x353a9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x353a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353aa0: 0xc0d5020  jal         func_354080
    ctx->pc = 0x353AA0u;
    SET_GPR_U32(ctx, 31, 0x353AA8u);
    ctx->pc = 0x353AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353AA0u;
    // 0x353aa4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354080u, 0x353AA0u, 0x353AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353AA8u;
label_353aa8:
    // 0x353aa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x353aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353aac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x353aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353ab0: 0xc0d5084  jal         func_354210
    ctx->pc = 0x353AB0u;
    SET_GPR_U32(ctx, 31, 0x353AB8u);
    ctx->pc = 0x353AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353AB0u;
    // 0x353ab4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354210u, 0x353AB0u, 0x353AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353AB8u;
label_353ab8:
    // 0x353ab8: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x353ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x353abc: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x353abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353ac0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x353ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353ac4: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x353ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x353ac8: 0xad020048  sw          $v0, 0x48($t0)
    ctx->pc = 0x353ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 2));
    // 0x353acc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x353accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353ad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x353ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x353ad4: 0x8e620174  lw          $v0, 0x174($s3)
    ctx->pc = 0x353ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x353ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353adc: 0x8fc50038  lw          $a1, 0x38($fp)
    ctx->pc = 0x353adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x353ae0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x353ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x353ae4: 0xad030040  sw          $v1, 0x40($t0)
    ctx->pc = 0x353ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 3));
    // 0x353ae8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x353ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x353aec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x353aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x353af0: 0x10a70007  beq         $a1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x353AF0u;
    {
        const bool branch_taken_0x353af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x353AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AF0u;
        // 0x353af4: 0xad020044  sw          $v0, 0x44($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353af0) {
            ctx->pc = 0x353B10u;
            goto label_353b10;
        }
    }
    ctx->pc = 0x353AF8u;
    // 0x353af8: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x353af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x353afc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x353AFCu;
    {
        const bool branch_taken_0x353afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353afc) {
            ctx->pc = 0x353B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353AFCu;
            // 0x353b00: 0xae600168  sw          $zero, 0x168($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353B14u;
            goto label_353b14;
        }
    }
    ctx->pc = 0x353B04u;
    // 0x353b04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x353B04u;
    {
        const bool branch_taken_0x353b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B04u;
        // 0x353b08: 0xae680168  sw          $t0, 0x168($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b04) {
            ctx->pc = 0x353B14u;
            goto label_353b14;
        }
    }
    ctx->pc = 0x353B0Cu;
    // 0x353b0c: 0x0  nop
    ctx->pc = 0x353b0cu;
    // NOP
label_353b10:
    // 0x353b10: 0xae600168  sw          $zero, 0x168($s3)
    ctx->pc = 0x353b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 0));
label_353b14:
    // 0x353b14: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x353b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x353b18: 0xae60016c  sw          $zero, 0x16C($s3)
    ctx->pc = 0x353b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 364), GPR_U32(ctx, 0));
    // 0x353b1c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x353B1Cu;
    {
        const bool branch_taken_0x353b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B1Cu;
        // 0x353b20: 0xae600170  sw          $zero, 0x170($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b1c) {
            ctx->pc = 0x353B78u;
            goto label_353b78;
        }
    }
    ctx->pc = 0x353B24u;
    // 0x353b24: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x353b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x353b28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x353b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353b2c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x353B2Cu;
    {
        const bool branch_taken_0x353b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353b2c) {
            ctx->pc = 0x353B58u;
            goto label_353b58;
        }
    }
    ctx->pc = 0x353B34u;
    // 0x353b34: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x353b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x353b38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x353b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x353b3c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x353b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x353b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353B40u;
    {
        const bool branch_taken_0x353b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b40) {
            ctx->pc = 0x353B58u;
            goto label_353b58;
        }
    }
    ctx->pc = 0x353B48u;
    // 0x353b48: 0xc0d5596  jal         func_355658
    ctx->pc = 0x353B48u;
    SET_GPR_U32(ctx, 31, 0x353B50u);
    ctx->pc = 0x353B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B48u;
    // 0x353b4c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355658u, 0x353B48u, 0x353B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B50u;
label_353b50:
    // 0x353b50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353B50u;
    {
        const bool branch_taken_0x353b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B50u;
        // 0x353b54: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b50) {
            ctx->pc = 0x353B64u;
            goto label_353b64;
        }
    }
    ctx->pc = 0x353B58u;
label_353b58:
    // 0x353b58: 0xc0d5590  jal         func_355640
    ctx->pc = 0x353B58u;
    SET_GPR_U32(ctx, 31, 0x353B60u);
    ctx->pc = 0x353B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B58u;
    // 0x353b5c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355640u, 0x353B58u, 0x353B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B60u;
label_353b60:
    // 0x353b60: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x353b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_353b64:
    // 0x353b64: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x353b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353b68: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x353b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x353b6c: 0xc0db0ee  jal         func_36C3B8
    ctx->pc = 0x353B6Cu;
    SET_GPR_U32(ctx, 31, 0x353B74u);
    ctx->pc = 0x353B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B6Cu;
    // 0x353b70: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3B8u, 0x353B6Cu, 0x353B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B74u;
label_353b74:
    // 0x353b74: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x353b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_353b78:
    // 0x353b78: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x353b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x353b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x353b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b80: 0xc0d61c0  jal         func_358700
    ctx->pc = 0x353B80u;
    SET_GPR_U32(ctx, 31, 0x353B88u);
    ctx->pc = 0x353B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B80u;
    // 0x353b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358700u, 0x353B80u, 0x353B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B88u;
label_353b88:
    // 0x353b88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x353B88u;
    {
        const bool branch_taken_0x353b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B88u;
        // 0x353b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b88) {
            ctx->pc = 0x353BA4u;
            goto label_353ba4;
        }
    }
    ctx->pc = 0x353B90u;
label_353b90:
    // 0x353b90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x353B90u;
    {
        const bool branch_taken_0x353b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353b90) {
            ctx->pc = 0x353B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353B90u;
            // 0x353b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353BA4u;
            goto label_353ba4;
        }
    }
    ctx->pc = 0x353B98u;
    // 0x353b98: 0xc0d558c  jal         func_355630
    ctx->pc = 0x353B98u;
    SET_GPR_U32(ctx, 31, 0x353BA0u);
    ctx->pc = 0x353B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B98u;
    // 0x353b9c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355630u, 0x353B98u, 0x353BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353BA0u;
label_353ba0:
    // 0x353ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353ba4:
    // 0x353ba4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x353ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353ba8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x353ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x353bac: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x353bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x353bb0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x353bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x353bb4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x353bb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x353bb8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x353bb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x353bbc: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x353bbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x353bc0: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x353bc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x353bc4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x353bc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x353bc8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x353bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x353bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x353BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BCCu;
        // 0x353bd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353BD4u;
    // 0x353bd4: 0x0  nop
    ctx->pc = 0x353bd4u;
    // NOP
    ctx->pc = 0x353bd8u;
}
