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

// Function: func_00111010
// Address: 0x111010 - 0x111210
void func_00111010_0x111010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00111010_0x111010");
#endif

    switch (ctx->pc) {
        case 0x111064u: goto label_111064;
        case 0x11109cu: goto label_11109c;
        case 0x1110b8u: goto label_1110b8;
        case 0x1110ecu: goto label_1110ec;
        case 0x111108u: goto label_111108;
        case 0x11112cu: goto label_11112c;
        case 0x11113cu: goto label_11113c;
        case 0x11115cu: goto label_11115c;
        case 0x111164u: goto label_111164;
        case 0x111178u: goto label_111178;
        case 0x11119cu: goto label_11119c;
        case 0x1111a8u: goto label_1111a8;
        case 0x1111b0u: goto label_1111b0;
        case 0x1111d4u: goto label_1111d4;
        case 0x1111e0u: goto label_1111e0;
        case 0x1111f4u: goto label_1111f4;
        default: break;
    }

    ctx->pc = 0x111010u;

    // 0x111010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111014: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x111014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x111018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11101c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x111020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x111020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x111024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111028: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x111028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11102c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111030: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x111030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x111034: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x111034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x111038: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x111038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11103c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11103Cu;
    {
        const bool branch_taken_0x11103c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11103Cu;
        // 0x111040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11103c) {
            ctx->pc = 0x111054u;
            goto label_111054;
        }
    }
    ctx->pc = 0x111044u;
    // 0x111044: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x111044u;
    {
        const bool branch_taken_0x111044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x111044) {
            ctx->pc = 0x111154u;
            goto label_111154;
        }
    }
    ctx->pc = 0x11104Cu;
    // 0x11104c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x11104Cu;
    {
        const bool branch_taken_0x11104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11104c) {
            ctx->pc = 0x1111A8u;
            goto label_1111a8;
        }
    }
    ctx->pc = 0x111054u;
label_111054:
    // 0x111054: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x111054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x111058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11105c: 0xc049396  jal         func_124E58
    ctx->pc = 0x11105Cu;
    SET_GPR_U32(ctx, 31, 0x111064u);
    ctx->pc = 0x111060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11105Cu;
    // 0x111060: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x11105Cu, 0x111064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111064u;
label_111064:
    // 0x111064: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x111064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x111068: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x111068u;
    {
        const bool branch_taken_0x111068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111068u;
        // 0x11106c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111068) {
            ctx->pc = 0x1110C0u;
            goto label_1110c0;
        }
    }
    ctx->pc = 0x111070u;
    // 0x111070: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x111070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x111074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111078: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x111078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x11107c: 0x8c4304bc  lw          $v1, 0x4BC($v0)
    ctx->pc = 0x11107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1212)));
    // 0x111080: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x111080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x111084: 0x8c4a04c0  lw          $t2, 0x4C0($v0)
    ctx->pc = 0x111084u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1216)));
    // 0x111088: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11108c: 0x24090123  addiu       $t1, $zero, 0x123
    ctx->pc = 0x11108cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x111090: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x111090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111094: 0xc042902  jal         func_10A408
    ctx->pc = 0x111094u;
    SET_GPR_U32(ctx, 31, 0x11109Cu);
    ctx->pc = 0x111098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111094u;
    // 0x111098: 0x1428821  addu        $s1, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x111094u, 0x11109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11109Cu;
label_11109c:
    // 0x11109c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110a0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1110a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1110a4: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1110a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1110a8: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x1110a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1110ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1110acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110b0: 0xc042908  jal         func_10A420
    ctx->pc = 0x1110B0u;
    SET_GPR_U32(ctx, 31, 0x1110B8u);
    ctx->pc = 0x1110B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110B0u;
    // 0x1110b4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1110B0u, 0x1110B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110B8u;
label_1110b8:
    // 0x1110b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1110B8u;
    {
        const bool branch_taken_0x1110b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1110b8) {
            ctx->pc = 0x111108u;
            goto label_111108;
        }
    }
    ctx->pc = 0x1110C0u;
label_1110c0:
    // 0x1110c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1110c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1110c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1110c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110c8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1110cc: 0x8c430494  lw          $v1, 0x494($v0)
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x1110d0: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x1110d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1110d4: 0x8c4a0498  lw          $t2, 0x498($v0)
    ctx->pc = 0x1110d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
    // 0x1110d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1110d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110dc: 0x24090123  addiu       $t1, $zero, 0x123
    ctx->pc = 0x1110dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1110e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1110e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1110e4: 0xc042902  jal         func_10A408
    ctx->pc = 0x1110E4u;
    SET_GPR_U32(ctx, 31, 0x1110ECu);
    ctx->pc = 0x1110E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110E4u;
    // 0x1110e8: 0x1428821  addu        $s1, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1110E4u, 0x1110ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110ECu;
label_1110ec:
    // 0x1110ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1110ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110f0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1110f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1110f4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1110f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1110f8: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x1110f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1110fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1110fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111100: 0xc042908  jal         func_10A420
    ctx->pc = 0x111100u;
    SET_GPR_U32(ctx, 31, 0x111108u);
    ctx->pc = 0x111104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111100u;
    // 0x111104: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x111100u, 0x111108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111108u;
label_111108:
    // 0x111108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x111108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11110c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111110: 0xa2001684  sb          $zero, 0x1684($s0)
    ctx->pc = 0x111110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x111114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111118: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x111118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11111c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11111cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111124: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x111124u;
    SET_GPR_U32(ctx, 31, 0x11112Cu);
    ctx->pc = 0x111128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111124u;
    // 0x111128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x111124u, 0x11112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11112cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x111130: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x111130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x111134: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x111134u;
    SET_GPR_U32(ctx, 31, 0x11113Cu);
    ctx->pc = 0x111138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111134u;
    // 0x111138: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x111134u, 0x11113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11113Cu;
label_11113c:
    // 0x11113c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11113cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x111140: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x111140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x111144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11114c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x11114cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x111150: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x111150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_111154:
    // 0x111154: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x111154u;
    SET_GPR_U32(ctx, 31, 0x11115Cu);
    ctx->pc = 0x111158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111154u;
    // 0x111158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x111154u, 0x11115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11115Cu;
label_11115c:
    // 0x11115c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11115Cu;
    SET_GPR_U32(ctx, 31, 0x111164u);
    ctx->pc = 0x111160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11115Cu;
    // 0x111160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11115Cu, 0x111164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111164u;
label_111164:
    // 0x111164: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111164u;
    {
        const bool branch_taken_0x111164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111164u;
        // 0x111168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111164) {
            ctx->pc = 0x111188u;
            goto label_111188;
        }
    }
    ctx->pc = 0x11116Cu;
    // 0x11116c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111170: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x111170u;
    SET_GPR_U32(ctx, 31, 0x111178u);
    ctx->pc = 0x111174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111170u;
    // 0x111174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x111170u, 0x111178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111178u;
label_111178:
    // 0x111178: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x111178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11117c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11117cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x111180: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x111180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x111184: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x111184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_111188:
    // 0x111188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11118c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11118cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x111190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111194: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x111194u;
    SET_GPR_U32(ctx, 31, 0x11119Cu);
    ctx->pc = 0x111198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111194u;
    // 0x111198: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x111194u, 0x11119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11119Cu;
label_11119c:
    // 0x11119c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11119cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1111a0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1111A0u;
    SET_GPR_U32(ctx, 31, 0x1111A8u);
    ctx->pc = 0x1111A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111A0u;
    // 0x1111a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1111A0u, 0x1111A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111A8u;
label_1111a8:
    // 0x1111a8: 0xc04290e  jal         func_10A438
    ctx->pc = 0x1111A8u;
    SET_GPR_U32(ctx, 31, 0x1111B0u);
    ctx->pc = 0x1111ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111A8u;
    // 0x1111ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x1111A8u, 0x1111B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111B0u;
label_1111b0:
    // 0x1111b0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x1111b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x1111b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1111b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1111b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1111B8u;
    {
        const bool branch_taken_0x1111b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111B8u;
        // 0x1111bc: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111b8) {
            ctx->pc = 0x1111D4u;
            goto label_1111d4;
        }
    }
    ctx->pc = 0x1111C0u;
    // 0x1111c0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1111c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1111c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1111c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1111c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1111c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1111cc: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x1111CCu;
    SET_GPR_U32(ctx, 31, 0x1111D4u);
    ctx->pc = 0x1111D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111CCu;
    // 0x1111d0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1111CCu, 0x1111D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111D4u;
label_1111d4:
    // 0x1111d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1111d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111d8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1111D8u;
    SET_GPR_U32(ctx, 31, 0x1111E0u);
    ctx->pc = 0x1111DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111D8u;
    // 0x1111dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1111D8u, 0x1111E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111E0u;
label_1111e0:
    // 0x1111e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1111E0u;
    {
        const bool branch_taken_0x1111e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111E0u;
        // 0x1111e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111e0) {
            ctx->pc = 0x1111F4u;
            goto label_1111f4;
        }
    }
    ctx->pc = 0x1111E8u;
    // 0x1111e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1111e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1111ec: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1111ECu;
    SET_GPR_U32(ctx, 31, 0x1111F4u);
    ctx->pc = 0x1111F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111ECu;
    // 0x1111f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1111ECu, 0x1111F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111F4u;
label_1111f4:
    // 0x1111f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1111f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1111f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1111f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1111fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1111fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111204: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x111204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x111208: 0x3e00008  jr          $ra
    ctx->pc = 0x111208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111208u;
        // 0x11120c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111210u;
}
