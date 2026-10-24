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

// Function: func_0010EE80
// Address: 0x10ee80 - 0x10f1f0
void func_0010EE80_0x10ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010EE80_0x10ee80");
#endif

    switch (ctx->pc) {
        case 0x10eec0u: goto label_10eec0;
        case 0x10eeccu: goto label_10eecc;
        case 0x10eef8u: goto label_10eef8;
        case 0x10ef10u: goto label_10ef10;
        case 0x10ef34u: goto label_10ef34;
        case 0x10ef48u: goto label_10ef48;
        case 0x10ef78u: goto label_10ef78;
        case 0x10ef94u: goto label_10ef94;
        case 0x10efb8u: goto label_10efb8;
        case 0x10efd4u: goto label_10efd4;
        case 0x10f008u: goto label_10f008;
        case 0x10f024u: goto label_10f024;
        case 0x10f048u: goto label_10f048;
        case 0x10f064u: goto label_10f064;
        case 0x10f098u: goto label_10f098;
        case 0x10f0acu: goto label_10f0ac;
        case 0x10f0c0u: goto label_10f0c0;
        case 0x10f0c8u: goto label_10f0c8;
        case 0x10f0d8u: goto label_10f0d8;
        case 0x10f0f8u: goto label_10f0f8;
        case 0x10f10cu: goto label_10f10c;
        case 0x10f118u: goto label_10f118;
        case 0x10f13cu: goto label_10f13c;
        case 0x10f144u: goto label_10f144;
        case 0x10f150u: goto label_10f150;
        case 0x10f160u: goto label_10f160;
        case 0x10f170u: goto label_10f170;
        case 0x10f194u: goto label_10f194;
        default: break;
    }

    ctx->pc = 0x10ee80u;

    // 0x10ee80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ee84: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x10ee84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x10ee88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ee88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10ee90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ee94: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10ee98: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x10ee98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x10ee9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10ee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10eea0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x10eea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10eeac: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x10eeacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x10eeb0: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x10eeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x10eeb4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x10eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x10eeb8: 0xc0a480c  jal         func_292030
    ctx->pc = 0x10EEB8u;
    SET_GPR_U32(ctx, 31, 0x10EEC0u);
    ctx->pc = 0x10EEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEB8u;
    // 0x10eebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x10EEB8u, 0x10EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EEC0u;
label_10eec0:
    // 0x10eec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10eec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eec4: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x10EEC4u;
    SET_GPR_U32(ctx, 31, 0x10EECCu);
    ctx->pc = 0x10EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEC4u;
    // 0x10eec8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x10EEC4u, 0x10EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EECCu;
label_10eecc:
    // 0x10eecc: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x10eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x10eed0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10eed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x10eed4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x10eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x10eed8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x10EED8u;
    {
        const bool branch_taken_0x10eed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EED8u;
        // 0x10eedc: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eed8) {
            ctx->pc = 0x10EF10u;
            goto label_10ef10;
        }
    }
    ctx->pc = 0x10EEE0u;
    // 0x10eee0: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x10eee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
    // 0x10eee4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10EEE4u;
    {
        const bool branch_taken_0x10eee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10eee4) {
            ctx->pc = 0x10EEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EEE4u;
            // 0x10eee8: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EF14u;
            goto label_10ef14;
        }
    }
    ctx->pc = 0x10EEECu;
    // 0x10eeec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10eeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eef0: 0xc042cba  jal         func_10B2E8
    ctx->pc = 0x10EEF0u;
    SET_GPR_U32(ctx, 31, 0x10EEF8u);
    ctx->pc = 0x10EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEF0u;
    // 0x10eef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x10EEF0u, 0x10EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EEF8u;
label_10eef8:
    // 0x10eef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EEF8u;
    {
        const bool branch_taken_0x10eef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF8u;
        // 0x10eefc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eef8) {
            ctx->pc = 0x10EF10u;
            goto label_10ef10;
        }
    }
    ctx->pc = 0x10EF00u;
    // 0x10ef00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x10ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x10ef04: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x10ef04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ef08: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x10EF08u;
    SET_GPR_U32(ctx, 31, 0x10EF10u);
    ctx->pc = 0x10EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF08u;
    // 0x10ef0c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x10EF08u, 0x10EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF10u;
label_10ef10:
    // 0x10ef10: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10ef10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10ef14:
    // 0x10ef14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EF14u;
    {
        const bool branch_taken_0x10ef14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF14u;
        // 0x10ef18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef14) {
            ctx->pc = 0x10EF2Cu;
            goto label_10ef2c;
        }
    }
    ctx->pc = 0x10EF1Cu;
    // 0x10ef1c: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x10EF1Cu;
    {
        const bool branch_taken_0x10ef1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10ef1c) {
            ctx->pc = 0x10F0A4u;
            goto label_10f0a4;
        }
    }
    ctx->pc = 0x10EF24u;
    // 0x10ef24: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x10EF24u;
    {
        const bool branch_taken_0x10ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF24u;
        // 0x10ef28: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef24) {
            ctx->pc = 0x10F11Cu;
            goto label_10f11c;
        }
    }
    ctx->pc = 0x10EF2Cu;
label_10ef2c:
    // 0x10ef2c: 0xc04a55e  jal         func_129578
    ctx->pc = 0x10EF2Cu;
    SET_GPR_U32(ctx, 31, 0x10EF34u);
    ctx->pc = 0x10EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF2Cu;
    // 0x10ef30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x10EF2Cu, 0x10EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF34u;
label_10ef34:
    // 0x10ef34: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10ef34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10ef38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef3c: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x10ef3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x10ef40: 0xc049150  jal         func_124540
    ctx->pc = 0x10EF40u;
    SET_GPR_U32(ctx, 31, 0x10EF48u);
    ctx->pc = 0x10EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF40u;
    // 0x10ef44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10EF40u, 0x10EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF48u;
label_10ef48:
    // 0x10ef48: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x10ef48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x10ef4c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x10EF4Cu;
    {
        const bool branch_taken_0x10ef4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF4Cu;
        // 0x10ef50: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef4c) {
            ctx->pc = 0x10EFE4u;
            goto label_10efe4;
        }
    }
    ctx->pc = 0x10EF54u;
    // 0x10ef54: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x10ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
    // 0x10ef58: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10EF58u;
    {
        const bool branch_taken_0x10ef58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF58u;
        // 0x10ef5c: 0x240500e6  addiu       $a1, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef58) {
            ctx->pc = 0x10EF9Cu;
            goto label_10ef9c;
        }
    }
    ctx->pc = 0x10EF60u;
    // 0x10ef60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef64: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10ef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10ef68: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10ef68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10ef6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10ef6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef70: 0xc042902  jal         func_10A408
    ctx->pc = 0x10EF70u;
    SET_GPR_U32(ctx, 31, 0x10EF78u);
    ctx->pc = 0x10EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF70u;
    // 0x10ef74: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10EF70u, 0x10EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF78u;
label_10ef78:
    // 0x10ef78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef7c: 0x240500e6  addiu       $a1, $zero, 0xE6
    ctx->pc = 0x10ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x10ef80: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10ef80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10ef84: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10ef84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10ef88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10ef88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef8c: 0xc042908  jal         func_10A420
    ctx->pc = 0x10EF8Cu;
    SET_GPR_U32(ctx, 31, 0x10EF94u);
    ctx->pc = 0x10EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF8Cu;
    // 0x10ef90: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10EF8Cu, 0x10EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF94u;
label_10ef94:
    // 0x10ef94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10EF94u;
    {
        const bool branch_taken_0x10ef94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF94u;
        // 0x10ef98: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef94) {
            ctx->pc = 0x10EFD8u;
            goto label_10efd8;
        }
    }
    ctx->pc = 0x10EF9Cu;
label_10ef9c:
    // 0x10ef9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efa0: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x10efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x10efa4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10efa8: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10efa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10efac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10efacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efb0: 0xc042902  jal         func_10A408
    ctx->pc = 0x10EFB0u;
    SET_GPR_U32(ctx, 31, 0x10EFB8u);
    ctx->pc = 0x10EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFB0u;
    // 0x10efb4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10EFB0u, 0x10EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFB8u;
label_10efb8:
    // 0x10efb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10efb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efbc: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x10efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x10efc0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10efc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10efc4: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10efc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10efc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10efc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efcc: 0xc042908  jal         func_10A420
    ctx->pc = 0x10EFCCu;
    SET_GPR_U32(ctx, 31, 0x10EFD4u);
    ctx->pc = 0x10EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFCCu;
    // 0x10efd0: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10EFCCu, 0x10EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFD4u;
label_10efd4:
    // 0x10efd4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10efd8:
    // 0x10efd8: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x10efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x10efdc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x10EFDCu;
    {
        const bool branch_taken_0x10efdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFDCu;
        // 0x10efe0: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efdc) {
            ctx->pc = 0x10F070u;
            goto label_10f070;
        }
    }
    ctx->pc = 0x10EFE4u;
label_10efe4:
    // 0x10efe4: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x10efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
    // 0x10efe8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10EFE8u;
    {
        const bool branch_taken_0x10efe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFE8u;
        // 0x10efec: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efe8) {
            ctx->pc = 0x10F02Cu;
            goto label_10f02c;
        }
    }
    ctx->pc = 0x10EFF0u;
    // 0x10eff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eff4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10eff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10eff8: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10eff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10effc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10effcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f000: 0xc042902  jal         func_10A408
    ctx->pc = 0x10F000u;
    SET_GPR_U32(ctx, 31, 0x10F008u);
    ctx->pc = 0x10F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F000u;
    // 0x10f004: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10F000u, 0x10F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F008u;
label_10f008:
    // 0x10f008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f00c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x10f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x10f010: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10f010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10f014: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10f014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10f018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f01c: 0xc042908  jal         func_10A420
    ctx->pc = 0x10F01Cu;
    SET_GPR_U32(ctx, 31, 0x10F024u);
    ctx->pc = 0x10F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F01Cu;
    // 0x10f020: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10F01Cu, 0x10F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F024u;
label_10f024:
    // 0x10f024: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10F024u;
    {
        const bool branch_taken_0x10f024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F024u;
        // 0x10f028: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f024) {
            ctx->pc = 0x10F068u;
            goto label_10f068;
        }
    }
    ctx->pc = 0x10F02Cu;
label_10f02c:
    // 0x10f02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f030: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x10f030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x10f034: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10f034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10f038: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10f038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10f03c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f03cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f040: 0xc042902  jal         func_10A408
    ctx->pc = 0x10F040u;
    SET_GPR_U32(ctx, 31, 0x10F048u);
    ctx->pc = 0x10F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F040u;
    // 0x10f044: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10F040u, 0x10F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F048u;
label_10f048:
    // 0x10f048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f04c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x10f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x10f050: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10f050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10f054: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10f054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10f058: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f05c: 0xc042908  jal         func_10A420
    ctx->pc = 0x10F05Cu;
    SET_GPR_U32(ctx, 31, 0x10F064u);
    ctx->pc = 0x10F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F05Cu;
    // 0x10f060: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10F05Cu, 0x10F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F064u;
label_10f064:
    // 0x10f064: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10f068:
    // 0x10f068: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x10f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x10f06c: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x10f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_10f070:
    // 0x10f070: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10f070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10f074: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10f074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10f078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f07c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10f07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f080: 0xa2221684  sb          $v0, 0x1684($s1)
    ctx->pc = 0x10f080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x10f084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f088: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10f088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f08c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f08cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f090: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10F090u;
    SET_GPR_U32(ctx, 31, 0x10F098u);
    ctx->pc = 0x10F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F090u;
    // 0x10f094: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10F090u, 0x10F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F098u;
label_10f098:
    // 0x10f098: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10f098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x10f09c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10f0a0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10f0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10f0a4:
    // 0x10f0a4: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x10F0A4u;
    SET_GPR_U32(ctx, 31, 0x10F0ACu);
    ctx->pc = 0x10F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0A4u;
    // 0x10f0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x10F0A4u, 0x10F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0ACu;
label_10f0ac:
    // 0x10f0ac: 0x3c013e06  lui         $at, 0x3E06
    ctx->pc = 0x10f0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15878 << 16));
    // 0x10f0b0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10f0b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x10f0b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10f0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f0b8: 0xc04939a  jal         func_124E68
    ctx->pc = 0x10F0B8u;
    SET_GPR_U32(ctx, 31, 0x10F0C0u);
    ctx->pc = 0x10F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0B8u;
    // 0x10f0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10F0B8u, 0x10F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0C0u;
label_10f0c0:
    // 0x10f0c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10F0C0u;
    SET_GPR_U32(ctx, 31, 0x10F0C8u);
    ctx->pc = 0x10F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0C0u;
    // 0x10f0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10F0C0u, 0x10F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0C8u;
label_10f0c8:
    // 0x10f0c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10F0C8u;
    {
        const bool branch_taken_0x10f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f0c8) {
            ctx->pc = 0x10F0F8u;
            goto label_10f0f8;
        }
    }
    ctx->pc = 0x10F0D0u;
    // 0x10f0d0: 0xc04a58c  jal         func_129630
    ctx->pc = 0x10F0D0u;
    SET_GPR_U32(ctx, 31, 0x10F0D8u);
    ctx->pc = 0x10F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0D0u;
    // 0x10f0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x10F0D0u, 0x10F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0D8u;
label_10f0d8:
    // 0x10f0d8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10f0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f0dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0e0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10f0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f0e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f0e8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10f0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0f0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10F0F0u;
    SET_GPR_U32(ctx, 31, 0x10F0F8u);
    ctx->pc = 0x10F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0F0u;
    // 0x10f0f4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10F0F0u, 0x10F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0F8u;
label_10f0f8:
    // 0x10f0f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10f0fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10f100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f104: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10F104u;
    SET_GPR_U32(ctx, 31, 0x10F10Cu);
    ctx->pc = 0x10F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F104u;
    // 0x10f108: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10F104u, 0x10F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F10Cu;
label_10f10c:
    // 0x10f10c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10f10cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10f110: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10F110u;
    SET_GPR_U32(ctx, 31, 0x10F118u);
    ctx->pc = 0x10F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F110u;
    // 0x10f114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10F110u, 0x10F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F118u;
label_10f118:
    // 0x10f118: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10f118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10f11c:
    // 0x10f11c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10f120: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F120u;
    {
        const bool branch_taken_0x10f120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f120) {
            ctx->pc = 0x10F13Cu;
            goto label_10f13c;
        }
    }
    ctx->pc = 0x10F128u;
    // 0x10f128: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x10f128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x10f12c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10f12cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10f130: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10f130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f134: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x10F134u;
    SET_GPR_U32(ctx, 31, 0x10F13Cu);
    ctx->pc = 0x10F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F134u;
    // 0x10f138: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x10F134u, 0x10F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F13Cu;
label_10f13c:
    // 0x10f13c: 0xc04290e  jal         func_10A438
    ctx->pc = 0x10F13Cu;
    SET_GPR_U32(ctx, 31, 0x10F144u);
    ctx->pc = 0x10F140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F13Cu;
    // 0x10f140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10F13Cu, 0x10F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F144u;
label_10f144:
    // 0x10f144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f148: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10F148u;
    SET_GPR_U32(ctx, 31, 0x10F150u);
    ctx->pc = 0x10F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F148u;
    // 0x10f14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10F148u, 0x10F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F150u;
label_10f150:
    // 0x10f150: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10F150u;
    {
        const bool branch_taken_0x10f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f150) {
            ctx->pc = 0x10F154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F150u;
            // 0x10f154: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F178u;
            goto label_10f178;
        }
    }
    ctx->pc = 0x10F158u;
    // 0x10f158: 0xc04a58c  jal         func_129630
    ctx->pc = 0x10F158u;
    SET_GPR_U32(ctx, 31, 0x10F160u);
    ctx->pc = 0x10F15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F158u;
    // 0x10f15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x10F158u, 0x10F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F160u;
label_10f160:
    // 0x10f160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f168: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10F168u;
    SET_GPR_U32(ctx, 31, 0x10F170u);
    ctx->pc = 0x10F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F168u;
    // 0x10f16c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10F168u, 0x10F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F170u;
label_10f170:
    // 0x10f170: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10F170u;
    {
        const bool branch_taken_0x10f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F170u;
        // 0x10f174: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f170) {
            ctx->pc = 0x10F1D8u;
            goto label_10f1d8;
        }
    }
    ctx->pc = 0x10F178u;
label_10f178:
    // 0x10f178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10f178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10f17c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10F17Cu;
    {
        const bool branch_taken_0x10f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F17Cu;
        // 0x10f180: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f17c) {
            ctx->pc = 0x10F1B8u;
            goto label_10f1b8;
        }
    }
    ctx->pc = 0x10F184u;
    // 0x10f184: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x10f184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x10f188: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x10f188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x10f18c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x10F18Cu;
    SET_GPR_U32(ctx, 31, 0x10F194u);
    ctx->pc = 0x10F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F18Cu;
    // 0x10f190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x10F18Cu, 0x10F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F194u;
label_10f194:
    // 0x10f194: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x10f194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x10f198: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x10f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x10f19c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f1a0: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x10f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x10f1a4: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x10f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x10f1a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10f1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10f1ac: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10f1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f1b0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x10f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x10f1b4: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x10f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_10f1b8:
    // 0x10f1b8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10f1b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x10f1bc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x10f1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x10f1c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10f1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10f1c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f1c8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x10f1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x10f1cc: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x10f1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x10f1d0: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x10f1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x10f1d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10f1d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10f1d8:
    // 0x10f1d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10f1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f1dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10f1dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f1e4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x10f1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1E8u;
        // 0x10f1ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1F0u;
}
