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

// Function: func_003B9998
// Address: 0x3b9998 - 0x3b9af8
void func_003B9998_0x3b9998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9998_0x3b9998");
#endif

    switch (ctx->pc) {
        case 0x3b99ccu: goto label_3b99cc;
        case 0x3b99d4u: goto label_3b99d4;
        case 0x3b99e0u: goto label_3b99e0;
        case 0x3b99ecu: goto label_3b99ec;
        case 0x3b99f4u: goto label_3b99f4;
        case 0x3b9a04u: goto label_3b9a04;
        case 0x3b9a14u: goto label_3b9a14;
        case 0x3b9a20u: goto label_3b9a20;
        case 0x3b9a70u: goto label_3b9a70;
        case 0x3b9a7cu: goto label_3b9a7c;
        default: break;
    }

    ctx->pc = 0x3b9998u;

    // 0x3b9998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b9998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b999c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b99a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b99a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b99a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b99a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b99a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b99ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b99acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b99b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b99b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b99b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b99b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b99b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3b99b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3b99bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3b99bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3b99c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b99c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b99c4: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x3B99C4u;
    SET_GPR_U32(ctx, 31, 0x3B99CCu);
    ctx->pc = 0x3B99C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B99C4u;
    // 0x3b99c8: 0x26140018  addiu       $s4, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x3B99C4u, 0x3B99CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B99CCu;
label_3b99cc:
    // 0x3b99cc: 0xc0ee6be  jal         func_3B9AF8
    ctx->pc = 0x3B99CCu;
    SET_GPR_U32(ctx, 31, 0x3B99D4u);
    ctx->pc = 0x3B99D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B99CCu;
    // 0x3b99d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9AF8u, 0x3B99CCu, 0x3B99D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B99D4u;
label_3b99d4:
    // 0x3b99d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b99d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b99d8: 0xc0c9888  jal         func_326220
    ctx->pc = 0x3B99D8u;
    SET_GPR_U32(ctx, 31, 0x3B99E0u);
    ctx->pc = 0x3B99DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B99D8u;
    // 0x3b99dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326220u, 0x3B99D8u, 0x3B99E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B99E0u;
label_3b99e0:
    // 0x3b99e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b99e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b99e4: 0xc0c988e  jal         func_326238
    ctx->pc = 0x3B99E4u;
    SET_GPR_U32(ctx, 31, 0x3B99ECu);
    ctx->pc = 0x3B99E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B99E4u;
    // 0x3b99e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326238u, 0x3B99E4u, 0x3B99ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B99ECu;
label_3b99ec:
    // 0x3b99ec: 0xc0ee784  jal         func_3B9E10
    ctx->pc = 0x3B99ECu;
    SET_GPR_U32(ctx, 31, 0x3B99F4u);
    ctx->pc = 0x3B9E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9E10u, 0x3B99ECu, 0x3B99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B99F4u;
label_3b99f4:
    // 0x3b99f4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3b99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3b99f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b99f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b99fc: 0xc0ee766  jal         func_3B9D98
    ctx->pc = 0x3B99FCu;
    SET_GPR_U32(ctx, 31, 0x3B9A04u);
    ctx->pc = 0x3B9A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B99FCu;
    // 0x3b9a00: 0x24849d48  addiu       $a0, $a0, -0x62B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D98u, 0x3B99FCu, 0x3B9A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A04u;
label_3b9a04:
    // 0x3b9a04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b9a08: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x3b9a08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3b9a0c: 0xc0c9718  jal         func_325C60
    ctx->pc = 0x3B9A0Cu;
    SET_GPR_U32(ctx, 31, 0x3B9A14u);
    ctx->pc = 0x3B9A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A0Cu;
    // 0x3b9a10: 0x8c550004  lw          $s5, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C60u, 0x3B9A0Cu, 0x3B9A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A14u;
label_3b9a14:
    // 0x3b9a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a18: 0xc0ee7ac  jal         func_3B9EB0
    ctx->pc = 0x3B9A18u;
    SET_GPR_U32(ctx, 31, 0x3B9A20u);
    ctx->pc = 0x3B9A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A18u;
    // 0x3b9a1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9EB0u, 0x3B9A18u, 0x3B9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A20u;
label_3b9a20:
    // 0x3b9a20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b9a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b9a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a28: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B9A28u;
    {
        const bool branch_taken_0x3b9a28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A28u;
        // 0x3b9a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a28) {
            ctx->pc = 0x3B9A68u;
            goto label_3b9a68;
        }
    }
    ctx->pc = 0x3B9A30u;
    // 0x3b9a30: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3b9a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3b9a34: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3b9a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3b9a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b9a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9a3c: 0x24840818  addiu       $a0, $a0, 0x818
    ctx->pc = 0x3b9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2072));
    // 0x3b9a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b9a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b9a44: 0x24a50840  addiu       $a1, $a1, 0x840
    ctx->pc = 0x3b9a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2112));
    // 0x3b9a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b9a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9a4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b9a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b9a50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b9a50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9a54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3b9a54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b9a58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b9a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b9a5c: 0x80cfc6a  j           func_33F1A8
    ctx->pc = 0x3B9A5Cu;
    ctx->pc = 0x3B9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A5Cu;
    // 0x3b9a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x3B9A5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B9A64u;
    // 0x3b9a64: 0x0  nop
    ctx->pc = 0x3b9a64u;
    // NOP
label_3b9a68:
    // 0x3b9a68: 0xc0eea30  jal         func_3BA8C0
    ctx->pc = 0x3B9A68u;
    SET_GPR_U32(ctx, 31, 0x3B9A70u);
    ctx->pc = 0x3B9A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A68u;
    // 0x3b9a6c: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA8C0u, 0x3B9A68u, 0x3B9A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A70u;
label_3b9a70:
    // 0x3b9a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a74: 0xc0eea40  jal         func_3BA900
    ctx->pc = 0x3B9A74u;
    SET_GPR_U32(ctx, 31, 0x3B9A7Cu);
    ctx->pc = 0x3B9A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A74u;
    // 0x3b9a78: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA900u, 0x3B9A74u, 0x3B9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A7Cu;
label_3b9a7c:
    // 0x3b9a7c: 0xaeb000c0  sw          $s0, 0xC0($s5)
    ctx->pc = 0x3b9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 16));
    // 0x3b9a80: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3b9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3b9a84: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3b9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3b9a88: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3b9a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3b9a8c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x3b9a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x3b9a90: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x3b9a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x3b9a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b9a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b9a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b9a9c: 0x24429b20  addiu       $v0, $v0, -0x64E0
    ctx->pc = 0x3b9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941472));
    // 0x3b9aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b9aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9aa4: 0x24639bf0  addiu       $v1, $v1, -0x6410
    ctx->pc = 0x3b9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941680));
    // 0x3b9aa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b9aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b9aac: 0x24849bb8  addiu       $a0, $a0, -0x6448
    ctx->pc = 0x3b9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941624));
    // 0x3b9ab0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b9ab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9ab4: 0x24a59ce8  addiu       $a1, $a1, -0x6318
    ctx->pc = 0x3b9ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941928));
    // 0x3b9ab8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3b9ab8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b9abc: 0x24c69d30  addiu       $a2, $a2, -0x62D0
    ctx->pc = 0x3b9abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942000));
    // 0x3b9ac0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b9ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b9ac4: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3b9ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x3b9ac8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x3b9ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x3b9acc: 0x3c09003d  lui         $t1, 0x3D
    ctx->pc = 0x3b9accu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)61 << 16));
    // 0x3b9ad0: 0x3c0a003f  lui         $t2, 0x3F
    ctx->pc = 0x3b9ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
    // 0x3b9ad4: 0x3c0b003f  lui         $t3, 0x3F
    ctx->pc = 0x3b9ad4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)63 << 16));
    // 0x3b9ad8: 0xace2141c  sw          $v0, 0x141C($a3)
    ctx->pc = 0x3b9ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D141Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D141Cu, _value); } while (0);
    // 0x3b9adc: 0xad039d20  sw          $v1, -0x62E0($t0)
    ctx->pc = 0x3b9adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9D20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9D20u, _value); } while (0);
    // 0x3b9ae0: 0xad241420  sw          $a0, 0x1420($t1)
    ctx->pc = 0x3b9ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3D1420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D1420u, _value); } while (0);
    // 0x3b9ae4: 0xad459d18  sw          $a1, -0x62E8($t2)
    ctx->pc = 0x3b9ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3E9D18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9D18u, _value); } while (0);
    // 0x3b9ae8: 0xad669d1c  sw          $a2, -0x62E4($t3)
    ctx->pc = 0x3b9ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3E9D1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9D1Cu, _value); } while (0);
    // 0x3b9aec: 0x80c971e  j           func_325C78
    ctx->pc = 0x3B9AECu;
    ctx->pc = 0x3B9AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9AECu;
    // 0x3b9af0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C78u, 0x3B9AECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B9AF4u;
    // 0x3b9af4: 0x0  nop
    ctx->pc = 0x3b9af4u;
    // NOP
    ctx->pc = 0x3b9af8u;
}
