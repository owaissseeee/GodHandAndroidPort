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

// Function: func_002E6868
// Address: 0x2e6868 - 0x2e6af8
void func_002E6868_0x2e6868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E6868_0x2e6868");
#endif

    switch (ctx->pc) {
        case 0x2e6884u: goto label_2e6884;
        case 0x2e68c4u: goto label_2e68c4;
        case 0x2e68d4u: goto label_2e68d4;
        case 0x2e68e4u: goto label_2e68e4;
        case 0x2e68f4u: goto label_2e68f4;
        case 0x2e6944u: goto label_2e6944;
        case 0x2e6958u: goto label_2e6958;
        case 0x2e6984u: goto label_2e6984;
        case 0x2e6998u: goto label_2e6998;
        case 0x2e69a8u: goto label_2e69a8;
        case 0x2e6a78u: goto label_2e6a78;
        default: break;
    }

    ctx->pc = 0x2e6868u;

    // 0x2e6868: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e686c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e6870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e6870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6874: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e6874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e6878: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e6878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e687c: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2E687Cu;
    SET_GPR_U32(ctx, 31, 0x2E6884u);
    ctx->pc = 0x2E6880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E687Cu;
    // 0x2e6880: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2E687Cu, 0x2E6884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6884u;
label_2e6884:
    // 0x2e6884: 0x922202dc  lbu         $v0, 0x2DC($s1)
    ctx->pc = 0x2e6884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x2e6888: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e6888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e688c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e688cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e6890: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E6890u;
    {
        const bool branch_taken_0x2e6890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6890u;
        // 0x2e6894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6890) {
            ctx->pc = 0x2E68FCu;
            goto label_2e68fc;
        }
    }
    ctx->pc = 0x2E6898u;
    // 0x2e6898: 0x8e2302d4  lw          $v1, 0x2D4($s1)
    ctx->pc = 0x2e6898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
    // 0x2e689c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E689Cu;
    {
        const bool branch_taken_0x2e689c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e689c) {
            ctx->pc = 0x2E68CCu;
            goto label_2e68cc;
        }
    }
    ctx->pc = 0x2E68A4u;
    // 0x2e68a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E68A4u;
    {
        const bool branch_taken_0x2e68a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68A4u;
        // 0x2e68a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68a4) {
            ctx->pc = 0x2E68BCu;
            goto label_2e68bc;
        }
    }
    ctx->pc = 0x2E68ACu;
    // 0x2e68ac: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E68ACu;
    {
        const bool branch_taken_0x2e68ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e68ac) {
            ctx->pc = 0x2E68DCu;
            goto label_2e68dc;
        }
    }
    ctx->pc = 0x2E68B4u;
    // 0x2e68b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E68B4u;
    {
        const bool branch_taken_0x2e68b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e68b4) {
            ctx->pc = 0x2E68ECu;
            goto label_2e68ec;
        }
    }
    ctx->pc = 0x2E68BCu;
label_2e68bc:
    // 0x2e68bc: 0xc0b9bba  jal         func_2E6EE8
    ctx->pc = 0x2E68BCu;
    SET_GPR_U32(ctx, 31, 0x2E68C4u);
    ctx->pc = 0x2E68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68BCu;
    // 0x2e68c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6EE8u, 0x2E68BCu, 0x2E68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68C4u;
label_2e68c4:
    // 0x2e68c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E68C4u;
    {
        const bool branch_taken_0x2e68c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68C4u;
        // 0x2e68c8: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68c4) {
            ctx->pc = 0x2E6934u;
            goto label_2e6934;
        }
    }
    ctx->pc = 0x2E68CCu;
label_2e68cc:
    // 0x2e68cc: 0xc0b9bf6  jal         func_2E6FD8
    ctx->pc = 0x2E68CCu;
    SET_GPR_U32(ctx, 31, 0x2E68D4u);
    ctx->pc = 0x2E68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68CCu;
    // 0x2e68d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6FD8u, 0x2E68CCu, 0x2E68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68D4u;
label_2e68d4:
    // 0x2e68d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E68D4u;
    {
        const bool branch_taken_0x2e68d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68D4u;
        // 0x2e68d8: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68d4) {
            ctx->pc = 0x2E6934u;
            goto label_2e6934;
        }
    }
    ctx->pc = 0x2E68DCu;
label_2e68dc:
    // 0x2e68dc: 0xc0b9c26  jal         func_2E7098
    ctx->pc = 0x2E68DCu;
    SET_GPR_U32(ctx, 31, 0x2E68E4u);
    ctx->pc = 0x2E68E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68DCu;
    // 0x2e68e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7098u, 0x2E68DCu, 0x2E68E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68E4u;
label_2e68e4:
    // 0x2e68e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E68E4u;
    {
        const bool branch_taken_0x2e68e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68E4u;
        // 0x2e68e8: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68e4) {
            ctx->pc = 0x2E6934u;
            goto label_2e6934;
        }
    }
    ctx->pc = 0x2E68ECu;
label_2e68ec:
    // 0x2e68ec: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2E68ECu;
    SET_GPR_U32(ctx, 31, 0x2E68F4u);
    ctx->pc = 0x2E68F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68ECu;
    // 0x2e68f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2E68ECu, 0x2E68F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68F4u;
label_2e68f4:
    // 0x2e68f4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2E68F4u;
    {
        const bool branch_taken_0x2e68f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68F4u;
        // 0x2e68f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68f4) {
            ctx->pc = 0x2E6AE0u;
            goto label_2e6ae0;
        }
    }
    ctx->pc = 0x2E68FCu;
label_2e68fc:
    // 0x2e68fc: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x2e68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x2e6900: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e6900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e6904: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E6904u;
    {
        const bool branch_taken_0x2e6904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6904) {
            ctx->pc = 0x2E6908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6904u;
            // 0x2e6908: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6934u;
            goto label_2e6934;
        }
    }
    ctx->pc = 0x2E690Cu;
    // 0x2e690c: 0x922202e5  lbu         $v0, 0x2E5($s1)
    ctx->pc = 0x2e690cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
    // 0x2e6910: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E6910u;
    {
        const bool branch_taken_0x2e6910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6910) {
            ctx->pc = 0x2E6914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6910u;
            // 0x2e6914: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6918u;
            goto label_2e6918;
        }
    }
    ctx->pc = 0x2E6918u;
label_2e6918:
    // 0x2e6918: 0xa222024c  sb          $v0, 0x24C($s1)
    ctx->pc = 0x2e6918u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 588), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e691c: 0x8e2302dc  lw          $v1, 0x2DC($s1)
    ctx->pc = 0x2e691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x2e6920: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e6920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e6924: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2e6924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2e6928: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e6928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e692c: 0xae2302dc  sw          $v1, 0x2DC($s1)
    ctx->pc = 0x2e692cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 3));
    // 0x2e6930: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2e6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e6934:
    // 0x2e6934: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x2E6934u;
    {
        const bool branch_taken_0x2e6934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6934) {
            ctx->pc = 0x2E6938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6934u;
            // 0x2e6938: 0x8e2302b0  lw          $v1, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6AD0u;
            goto label_2e6ad0;
        }
    }
    ctx->pc = 0x2E693Cu;
    // 0x2e693c: 0xc0bec18  jal         func_2FB060
    ctx->pc = 0x2E693Cu;
    SET_GPR_U32(ctx, 31, 0x2E6944u);
    ctx->pc = 0x2E6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E693Cu;
    // 0x2e6940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB060u, 0x2E693Cu, 0x2E6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6944u;
label_2e6944:
    // 0x2e6944: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2E6944u;
    {
        const bool branch_taken_0x2e6944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6944u;
        // 0x2e6948: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6944) {
            ctx->pc = 0x2E6ACCu;
            goto label_2e6acc;
        }
    }
    ctx->pc = 0x2E694Cu;
    // 0x2e694c: 0x8e3002b0  lw          $s0, 0x2B0($s1)
    ctx->pc = 0x2e694cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2e6950: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E6950u;
    SET_GPR_U32(ctx, 31, 0x2E6958u);
    ctx->pc = 0x2E6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6950u;
    // 0x2e6954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E6950u, 0x2E6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6958u;
label_2e6958:
    // 0x2e6958: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2e6958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e695c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E695Cu;
    {
        const bool branch_taken_0x2e695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2E6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E695Cu;
        // 0x2e6960: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e695c) {
            ctx->pc = 0x2E6978u;
            goto label_2e6978;
        }
    }
    ctx->pc = 0x2E6964u;
    // 0x2e6964: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e6964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e6968: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e6968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e696c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e696cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e6970: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e6970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6974: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e6974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e6978:
    // 0x2e6978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e697c: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2E697Cu;
    SET_GPR_U32(ctx, 31, 0x2E6984u);
    ctx->pc = 0x2E6980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E697Cu;
    // 0x2e6980: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2E697Cu, 0x2E6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6984u;
label_2e6984:
    // 0x2e6984: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e6984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6988: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e6988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e698c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6990: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2E6990u;
    SET_GPR_U32(ctx, 31, 0x2E6998u);
    ctx->pc = 0x2E6994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6990u;
    // 0x2e6994: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2E6990u, 0x2E6998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6998u;
label_2e6998:
    // 0x2e6998: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e6998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e699c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e699cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69a0: 0xc0ad834  jal         func_2B60D0
    ctx->pc = 0x2E69A0u;
    SET_GPR_U32(ctx, 31, 0x2E69A8u);
    ctx->pc = 0x2E69A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E69A0u;
    // 0x2e69a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2E69A0u, 0x2E69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69A8u;
label_2e69a8:
    // 0x2e69a8: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2e69ac: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2e69acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2e69b0: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E69B0u;
    {
        const bool branch_taken_0x2e69b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69B0u;
        // 0x2e69b4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69b0) {
            ctx->pc = 0x2E69D0u;
            goto label_2e69d0;
        }
    }
    ctx->pc = 0x2E69B8u;
    // 0x2e69b8: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2e69b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x2e69bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e69bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e69c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e69c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e69c4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e69c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e69c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e69c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e69cc: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e69d0:
    // 0x2e69d0: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2e69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2e69d4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E69D4u;
    {
        const bool branch_taken_0x2e69d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2E69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69D4u;
        // 0x2e69d8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69d4) {
            ctx->pc = 0x2E69F0u;
            goto label_2e69f0;
        }
    }
    ctx->pc = 0x2E69DCu;
    // 0x2e69dc: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2e69dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2e69e0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e69e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e69e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e69e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e69e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e69ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e69ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e69f0:
    // 0x2e69f0: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e69f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2e69f4: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x2e69f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e69f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e69f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e69fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e69fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e6a00: 0xe4600240  swc1        $f0, 0x240($v1)
    ctx->pc = 0x2e6a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
    // 0x2e6a04: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2e6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2e6a08: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x2e6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a0c: 0xe4400244  swc1        $f0, 0x244($v0)
    ctx->pc = 0x2e6a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 580), bits); }
    // 0x2e6a10: 0xc6200190  lwc1        $f0, 0x190($s1)
    ctx->pc = 0x2e6a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a14: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2e6a18: 0xe4600248  swc1        $f0, 0x248($v1)
    ctx->pc = 0x2e6a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 584), bits); }
    // 0x2e6a1c: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2e6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2e6a20: 0xc6200194  lwc1        $f0, 0x194($s1)
    ctx->pc = 0x2e6a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a24: 0xe480024c  swc1        $f0, 0x24C($a0)
    ctx->pc = 0x2e6a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 588), bits); }
    // 0x2e6a28: 0x9222024c  lbu         $v0, 0x24C($s1)
    ctx->pc = 0x2e6a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x2e6a2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6A2Cu;
    {
        const bool branch_taken_0x2e6a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A2Cu;
        // 0x2e6a30: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a2c) {
            ctx->pc = 0x2E6A58u;
            goto label_2e6a58;
        }
    }
    ctx->pc = 0x2E6A34u;
    // 0x2e6a34: 0x9223024d  lbu         $v1, 0x24D($s1)
    ctx->pc = 0x2e6a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 589)));
    // 0x2e6a38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6a3c: 0x0  nop
    ctx->pc = 0x2e6a3cu;
    // NOP
    // 0x2e6a40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e6a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e6a44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e6a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6a4c: 0x0  nop
    ctx->pc = 0x2e6a4cu;
    // NOP
    // 0x2e6a50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6a54: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2e6a54u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2e6a58:
    // 0x2e6a58: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E6A58u;
    {
        const bool branch_taken_0x2e6a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A58u;
        // 0x2e6a5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a58) {
            ctx->pc = 0x2E6A90u;
            goto label_2e6a90;
        }
    }
    ctx->pc = 0x2E6A60u;
    // 0x2e6a60: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e6a64: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2e6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2e6a68: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6A68u;
    {
        const bool branch_taken_0x2e6a68 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2e6a68) {
            ctx->pc = 0x2E6A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A68u;
            // 0x2e6a6c: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A8Cu;
            goto label_2e6a8c;
        }
    }
    ctx->pc = 0x2E6A70u;
    // 0x2e6a70: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2E6A70u;
    SET_GPR_U32(ctx, 31, 0x2E6A78u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2E6A70u, 0x2E6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A78u;
label_2e6a78:
    // 0x2e6a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6a7c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6A7Cu;
    {
        const bool branch_taken_0x2e6a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e6a7c) {
            ctx->pc = 0x2E6A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A7Cu;
            // 0x2e6a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A90u;
            goto label_2e6a90;
        }
    }
    ctx->pc = 0x2E6A84u;
    // 0x2e6a84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6A84u;
    {
        const bool branch_taken_0x2e6a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A84u;
        // 0x2e6a88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a84) {
            ctx->pc = 0x2E6A94u;
            goto label_2e6a94;
        }
    }
    ctx->pc = 0x2E6A8Cu;
label_2e6a8c:
    // 0x2e6a8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e6a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a90:
    // 0x2e6a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6a94:
    // 0x2e6a94: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6A94u;
    {
        const bool branch_taken_0x2e6a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6a94) {
            ctx->pc = 0x2E6A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A94u;
            // 0x2e6a98: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6ABCu;
            goto label_2e6abc;
        }
    }
    ctx->pc = 0x2E6A9Cu;
    // 0x2e6a9c: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x2e6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2e6aa0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2e6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e6aa4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e6aa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e6aa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e6aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e6aac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6AACu;
    {
        const bool branch_taken_0x2e6aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AACu;
        // 0x2e6ab0: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6aac) {
            ctx->pc = 0x2E6ABCu;
            goto label_2e6abc;
        }
    }
    ctx->pc = 0x2E6AB4u;
    // 0x2e6ab4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e6ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6ab8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e6ab8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2e6abc:
    // 0x2e6abc: 0xc440024c  lwc1        $f0, 0x24C($v0)
    ctx->pc = 0x2e6abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6ac0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e6ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e6ac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6AC4u;
    {
        const bool branch_taken_0x2e6ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AC4u;
        // 0x2e6ac8: 0xe440024c  swc1        $f0, 0x24C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ac4) {
            ctx->pc = 0x2E6ADCu;
            goto label_2e6adc;
        }
    }
    ctx->pc = 0x2E6ACCu;
label_2e6acc:
    // 0x2e6acc: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e6accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e6ad0:
    // 0x2e6ad0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2e6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2e6ad4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e6ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e6ad8: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x2e6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_2e6adc:
    // 0x2e6adc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e6adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e6ae0:
    // 0x2e6ae0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e6ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6ae4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e6ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6ae8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2e6ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6aec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AECu;
        // 0x2e6af0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6AF4u;
    // 0x2e6af4: 0x0  nop
    ctx->pc = 0x2e6af4u;
    // NOP
    ctx->pc = 0x2e6af8u;
}
