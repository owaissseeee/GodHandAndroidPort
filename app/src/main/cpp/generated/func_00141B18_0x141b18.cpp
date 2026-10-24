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

// Function: func_00141B18
// Address: 0x141b18 - 0x141ce8
void func_00141B18_0x141b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00141B18_0x141b18");
#endif

    switch (ctx->pc) {
        case 0x141b54u: goto label_141b54;
        case 0x141b64u: goto label_141b64;
        case 0x141b74u: goto label_141b74;
        case 0x141b84u: goto label_141b84;
        case 0x141b88u: goto label_141b88;
        case 0x141b90u: goto label_141b90;
        case 0x141b9cu: goto label_141b9c;
        case 0x141bd8u: goto label_141bd8;
        case 0x141be0u: goto label_141be0;
        case 0x141becu: goto label_141bec;
        case 0x141c18u: goto label_141c18;
        case 0x141c20u: goto label_141c20;
        case 0x141c2cu: goto label_141c2c;
        case 0x141c58u: goto label_141c58;
        case 0x141c64u: goto label_141c64;
        case 0x141cb4u: goto label_141cb4;
        default: break;
    }

    ctx->pc = 0x141b18u;

    // 0x141b18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x141b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x141b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141b20: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x141b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x141b24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x141b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b2c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x141b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x141b30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x141b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x141b34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x141b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x141b38: 0x26320098  addiu       $s2, $s1, 0x98
    ctx->pc = 0x141b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x141b3c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x141b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x141b40: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x141b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x141b44: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x141b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x141b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141b4c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x141B4Cu;
    SET_GPR_U32(ctx, 31, 0x141B54u);
    ctx->pc = 0x141B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B4Cu;
    // 0x141b50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x141B4Cu, 0x141B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B54u;
label_141b54:
    // 0x141b54: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x141b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x141b58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141b5c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x141B5Cu;
    SET_GPR_U32(ctx, 31, 0x141B64u);
    ctx->pc = 0x141B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B5Cu;
    // 0x141b60: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x141B5Cu, 0x141B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B64u;
label_141b64:
    // 0x141b64: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x141b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x141b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141b6c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x141B6Cu;
    SET_GPR_U32(ctx, 31, 0x141B74u);
    ctx->pc = 0x141B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B6Cu;
    // 0x141b70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x141B6Cu, 0x141B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B74u;
label_141b74:
    // 0x141b74: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x141b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x141b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141b7c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x141B7Cu;
    SET_GPR_U32(ctx, 31, 0x141B84u);
    ctx->pc = 0x141B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B7Cu;
    // 0x141b80: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x141B7Cu, 0x141B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B84u;
label_141b84:
    // 0x141b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141b88:
    // 0x141b88: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x141B88u;
    SET_GPR_U32(ctx, 31, 0x141B90u);
    ctx->pc = 0x141B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B88u;
    // 0x141b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x141B88u, 0x141B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B90u;
label_141b90:
    // 0x141b90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b94: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x141B94u;
    SET_GPR_U32(ctx, 31, 0x141B9Cu);
    ctx->pc = 0x141B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B94u;
    // 0x141b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x141B94u, 0x141B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B9Cu;
label_141b9c:
    // 0x141b9c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x141b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x141ba0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x141ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141ba4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x141ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x141ba8: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x141ba8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x141bac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x141bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x141bb0: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x141bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x141bb4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x141BB4u;
    {
        const bool branch_taken_0x141bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BB4u;
        // 0x141bb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bb4) {
            ctx->pc = 0x141B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141b88;
        }
    }
    ctx->pc = 0x141BBCu;
    // 0x141bbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141bc0: 0x26340190  addiu       $s4, $s1, 0x190
    ctx->pc = 0x141bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x141bc4: 0x26360210  addiu       $s6, $s1, 0x210
    ctx->pc = 0x141bc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x141bc8: 0x26330130  addiu       $s3, $s1, 0x130
    ctx->pc = 0x141bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x141bcc: 0x263501e0  addiu       $s5, $s1, 0x1E0
    ctx->pc = 0x141bccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x141bd0: 0x263200e0  addiu       $s2, $s1, 0xE0
    ctx->pc = 0x141bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x141bd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141bd8:
    // 0x141bd8: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x141BD8u;
    SET_GPR_U32(ctx, 31, 0x141BE0u);
    ctx->pc = 0x141BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BD8u;
    // 0x141bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x141BD8u, 0x141BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BE0u;
label_141be0:
    // 0x141be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141be4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x141BE4u;
    SET_GPR_U32(ctx, 31, 0x141BECu);
    ctx->pc = 0x141BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BE4u;
    // 0x141be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x141BE4u, 0x141BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BECu;
label_141bec:
    // 0x141bec: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x141becu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x141bf0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x141bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141bf4: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x141bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x141bf8: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x141bf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x141bfc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x141bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x141c00: 0x2e020013  sltiu       $v0, $s0, 0x13
    ctx->pc = 0x141c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x141c04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x141C04u;
    {
        const bool branch_taken_0x141c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C04u;
        // 0x141c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c04) {
            ctx->pc = 0x141BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141bd8;
        }
    }
    ctx->pc = 0x141C0Cu;
    // 0x141c0c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x141c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141c18:
    // 0x141c18: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x141C18u;
    SET_GPR_U32(ctx, 31, 0x141C20u);
    ctx->pc = 0x141C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C18u;
    // 0x141c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x141C18u, 0x141C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C20u;
label_141c20:
    // 0x141c20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c24: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x141C24u;
    SET_GPR_U32(ctx, 31, 0x141C2Cu);
    ctx->pc = 0x141C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C24u;
    // 0x141c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x141C24u, 0x141C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C2Cu;
label_141c2c:
    // 0x141c2c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x141c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x141c30: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x141c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141c34: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x141c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x141c38: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x141c38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x141c3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x141c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x141c40: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x141c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x141c44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x141C44u;
    {
        const bool branch_taken_0x141c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C44u;
        // 0x141c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c44) {
            ctx->pc = 0x141C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141c18;
        }
    }
    ctx->pc = 0x141C4Cu;
    // 0x141c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c50: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x141C50u;
    SET_GPR_U32(ctx, 31, 0x141C58u);
    ctx->pc = 0x141C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C50u;
    // 0x141c54: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x141C50u, 0x141C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C58u;
label_141c58:
    // 0x141c58: 0xa230001c  sb          $s0, 0x1C($s1)
    ctx->pc = 0x141c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 16));
    // 0x141c5c: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x141C5Cu;
    SET_GPR_U32(ctx, 31, 0x141C64u);
    ctx->pc = 0x141C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C5Cu;
    // 0x141c60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x141C5Cu, 0x141C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C64u;
label_141c64:
    // 0x141c64: 0xa2d0001c  sb          $s0, 0x1C($s6)
    ctx->pc = 0x141c64u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 28), (uint8_t)GPR_U32(ctx, 16));
    // 0x141c68: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x141c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x141c6c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x141c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x141c70: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x141c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x141c74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141c78: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x141c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x141c7c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141c80: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x141c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x141c84: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141c88: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x141c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x141c8c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141c90: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x141c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x141c94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141c98: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x141c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x141c9c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141ca0: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x141ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x141ca4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141ca8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x141ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x141cac: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x141CACu;
    SET_GPR_U32(ctx, 31, 0x141CB4u);
    ctx->pc = 0x141CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CACu;
    // 0x141cb0: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x141CACu, 0x141CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CB4u;
label_141cb4:
    // 0x141cb4: 0xa230026d  sb          $s0, 0x26D($s1)
    ctx->pc = 0x141cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 621), (uint8_t)GPR_U32(ctx, 16));
    // 0x141cb8: 0xa622017c  sh          $v0, 0x17C($s1)
    ctx->pc = 0x141cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 380), (uint16_t)GPR_U32(ctx, 2));
    // 0x141cbc: 0xa220026c  sb          $zero, 0x26C($s1)
    ctx->pc = 0x141cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 620), (uint8_t)GPR_U32(ctx, 0));
    // 0x141cc0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x141cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141cc4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x141cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141cc8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x141cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141ccc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x141cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141cd0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x141cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141cd4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x141cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141cd8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x141cd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x141CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CE0u;
        // 0x141ce4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141CE8u;
}
