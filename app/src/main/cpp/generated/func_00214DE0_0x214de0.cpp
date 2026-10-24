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

// Function: func_00214DE0
// Address: 0x214de0 - 0x215d40
void func_00214DE0_0x214de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00214DE0_0x214de0");
#endif

    switch (ctx->pc) {
        case 0x214e2cu: goto label_214e2c;
        case 0x214e3cu: goto label_214e3c;
        case 0x214e50u: goto label_214e50;
        case 0x214e64u: goto label_214e64;
        case 0x214e70u: goto label_214e70;
        case 0x214f38u: goto label_214f38;
        case 0x214f90u: goto label_214f90;
        case 0x214fe0u: goto label_214fe0;
        case 0x214ff8u: goto label_214ff8;
        case 0x215038u: goto label_215038;
        case 0x2150f0u: goto label_2150f0;
        case 0x21524cu: goto label_21524c;
        case 0x215264u: goto label_215264;
        case 0x215284u: goto label_215284;
        case 0x2152d4u: goto label_2152d4;
        case 0x2152e4u: goto label_2152e4;
        case 0x215374u: goto label_215374;
        case 0x21537cu: goto label_21537c;
        case 0x2153b8u: goto label_2153b8;
        case 0x215488u: goto label_215488;
        case 0x2154a4u: goto label_2154a4;
        case 0x2154d8u: goto label_2154d8;
        case 0x2154ecu: goto label_2154ec;
        case 0x21553cu: goto label_21553c;
        case 0x215550u: goto label_215550;
        case 0x2155a8u: goto label_2155a8;
        case 0x2155fcu: goto label_2155fc;
        case 0x215618u: goto label_215618;
        case 0x215654u: goto label_215654;
        case 0x215688u: goto label_215688;
        case 0x2156a8u: goto label_2156a8;
        case 0x2156b8u: goto label_2156b8;
        case 0x215714u: goto label_215714;
        case 0x215748u: goto label_215748;
        case 0x21575cu: goto label_21575c;
        case 0x215778u: goto label_215778;
        case 0x215788u: goto label_215788;
        case 0x21579cu: goto label_21579c;
        case 0x215808u: goto label_215808;
        case 0x215888u: goto label_215888;
        case 0x2158d0u: goto label_2158d0;
        case 0x2158e0u: goto label_2158e0;
        case 0x215960u: goto label_215960;
        case 0x21598cu: goto label_21598c;
        case 0x21599cu: goto label_21599c;
        case 0x215a30u: goto label_215a30;
        case 0x215a90u: goto label_215a90;
        case 0x215b50u: goto label_215b50;
        case 0x215b94u: goto label_215b94;
        case 0x215bd0u: goto label_215bd0;
        case 0x215c18u: goto label_215c18;
        case 0x215c68u: goto label_215c68;
        case 0x215c80u: goto label_215c80;
        case 0x215c8cu: goto label_215c8c;
        case 0x215cfcu: goto label_215cfc;
        case 0x215d0cu: goto label_215d0c;
        case 0x215d1cu: goto label_215d1c;
        default: break;
    }

    ctx->pc = 0x214de0u;

    // 0x214de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x214de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x214de4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x214de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x214de8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x214de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x214dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x214df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x214df4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x214df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x214df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214dfc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x214dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x214e00: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x214e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x214e04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214E04u;
    {
        const bool branch_taken_0x214e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E04u;
        // 0x214e08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e04) {
            ctx->pc = 0x214E1Cu;
            goto label_214e1c;
        }
    }
    ctx->pc = 0x214E0Cu;
    // 0x214e0c: 0x10620113  beq         $v1, $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x214E0Cu;
    {
        const bool branch_taken_0x214e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214e0c) {
            ctx->pc = 0x21525Cu;
            goto label_21525c;
        }
    }
    ctx->pc = 0x214E14u;
    // 0x214e14: 0x1000039e  b           . + 4 + (0x39E << 2)
    ctx->pc = 0x214E14u;
    {
        const bool branch_taken_0x214e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E14u;
        // 0x214e18: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e14) {
            ctx->pc = 0x215C90u;
            goto label_215c90;
        }
    }
    ctx->pc = 0x214E1Cu;
label_214e1c:
    // 0x214e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e24: 0xc09aa4e  jal         func_26A938
    ctx->pc = 0x214E24u;
    SET_GPR_U32(ctx, 31, 0x214E2Cu);
    ctx->pc = 0x214E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E24u;
    // 0x214e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x214E24u, 0x214E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E2Cu;
label_214e2c:
    // 0x214e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x214e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214e34: 0xc09aa4e  jal         func_26A938
    ctx->pc = 0x214E34u;
    SET_GPR_U32(ctx, 31, 0x214E3Cu);
    ctx->pc = 0x214E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E34u;
    // 0x214e38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x214E34u, 0x214E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E3Cu;
label_214e3c:
    // 0x214e3c: 0x8e0406f0  lw          $a0, 0x6F0($s0)
    ctx->pc = 0x214e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x214e40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x214E40u;
    {
        const bool branch_taken_0x214e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x214e40) {
            ctx->pc = 0x214E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214E40u;
            // 0x214e44: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214E54u;
            goto label_214e54;
        }
    }
    ctx->pc = 0x214E48u;
    // 0x214e48: 0xc074134  jal         func_1D04D0
    ctx->pc = 0x214E48u;
    SET_GPR_U32(ctx, 31, 0x214E50u);
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x214E48u, 0x214E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E50u;
label_214e50:
    // 0x214e50: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x214e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_214e54:
    // 0x214e54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214E54u;
    {
        const bool branch_taken_0x214e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x214e54) {
            ctx->pc = 0x214E64u;
            goto label_214e64;
        }
    }
    ctx->pc = 0x214E5Cu;
    // 0x214e5c: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x214E5Cu;
    SET_GPR_U32(ctx, 31, 0x214E64u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x214E5Cu, 0x214E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E64u;
label_214e64:
    // 0x214e64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x214e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214e68: 0xc09d91a  jal         func_276468
    ctx->pc = 0x214E68u;
    SET_GPR_U32(ctx, 31, 0x214E70u);
    ctx->pc = 0x214E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E68u;
    // 0x214e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x214E68u, 0x214E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E70u;
label_214e70:
    // 0x214e70: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x214e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x214e74: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x214e74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x214e78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214e80: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x214e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x214e84: 0x2c62007a  sltiu       $v0, $v1, 0x7A
    ctx->pc = 0x214e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x214e88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214E88u;
    {
        const bool branch_taken_0x214e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E88u;
        // 0x214e8c: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e88) {
            ctx->pc = 0x214EACu;
            goto label_214eac;
        }
    }
    ctx->pc = 0x214E90u;
    // 0x214e90: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x214e94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214e98: 0x24426120  addiu       $v0, $v0, 0x6120
    ctx->pc = 0x214e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24864));
    // 0x214e9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214ea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214ea4: 0x800008  jr          $a0
    ctx->pc = 0x214EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214EACu: goto label_214eac;
            case 0x214EDCu: goto label_214edc;
            case 0x214EF8u: goto label_214ef8;
            case 0x214F14u: goto label_214f14;
            case 0x214F30u: goto label_214f30;
            case 0x214F88u: goto label_214f88;
            case 0x214FF0u: goto label_214ff0;
            case 0x215070u: goto label_215070;
            case 0x21508Cu: goto label_21508c;
            case 0x2150A0u: goto label_2150a0;
            case 0x2150C0u: goto label_2150c0;
            case 0x2150F8u: goto label_2150f8;
            case 0x215124u: goto label_215124;
            case 0x215140u: goto label_215140;
            case 0x21515Cu: goto label_21515c;
            case 0x215178u: goto label_215178;
            case 0x215194u: goto label_215194;
            case 0x2151A8u: goto label_2151a8;
            case 0x2151BCu: goto label_2151bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214EA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x214EACu;
label_214eac:
    // 0x214eac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214eb0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x214eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x214eb4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x214eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x214eb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214ebc: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x214ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x214ec0: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x214ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x214ec4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x214ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214ec8: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x214ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x214ecc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x214eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x214ed0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214ed4: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x214ED4u;
    {
        const bool branch_taken_0x214ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214ED4u;
        // 0x214ed8: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ed4) {
            ctx->pc = 0x2151E4u;
            goto label_2151e4;
        }
    }
    ctx->pc = 0x214EDCu;
label_214edc:
    // 0x214edc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214ee0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x214ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x214ee4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214ee8: 0x8c432f1c  lw          $v1, 0x2F1C($v0)
    ctx->pc = 0x214ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12060)));
    // 0x214eec: 0x8c442f20  lw          $a0, 0x2F20($v0)
    ctx->pc = 0x214eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12064)));
    // 0x214ef0: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x214EF0u;
    {
        const bool branch_taken_0x214ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EF0u;
        // 0x214ef4: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ef0) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x214EF8u;
label_214ef8:
    // 0x214ef8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214efc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x214efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x214f00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x214f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x214f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214f08: 0x8c4335fc  lw          $v1, 0x35FC($v0)
    ctx->pc = 0x214f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13820)));
    // 0x214f0c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x214F0Cu;
    {
        const bool branch_taken_0x214f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F0Cu;
        // 0x214f10: 0x8c443600  lw          $a0, 0x3600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f0c) {
            ctx->pc = 0x21510Cu;
            goto label_21510c;
        }
    }
    ctx->pc = 0x214F14u;
label_214f14:
    // 0x214f14: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214f18: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x214f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x214f1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214f20: 0x8c4310dc  lw          $v1, 0x10DC($v0)
    ctx->pc = 0x214f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4316)));
    // 0x214f24: 0x8c4410e0  lw          $a0, 0x10E0($v0)
    ctx->pc = 0x214f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4320)));
    // 0x214f28: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x214F28u;
    {
        const bool branch_taken_0x214f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F28u;
        // 0x214f2c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f28) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x214F30u;
label_214f30:
    // 0x214f30: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x214F30u;
    SET_GPR_U32(ctx, 31, 0x214F38u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x214F30u, 0x214F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214F38u;
label_214f38:
    // 0x214f38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x214f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x214f3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x214F3Cu;
    {
        const bool branch_taken_0x214f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F3Cu;
        // 0x214f40: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f3c) {
            ctx->pc = 0x214F5Cu;
            goto label_214f5c;
        }
    }
    ctx->pc = 0x214F44u;
    // 0x214f44: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x214f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x214f48: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x214f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x214f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214f50: 0x8c4310dc  lw          $v1, 0x10DC($v0)
    ctx->pc = 0x214f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4316)));
    // 0x214f54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214F54u;
    {
        const bool branch_taken_0x214f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F54u;
        // 0x214f58: 0x8c4410e0  lw          $a0, 0x10E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f54) {
            ctx->pc = 0x214F70u;
            goto label_214f70;
        }
    }
    ctx->pc = 0x214F5Cu;
label_214f5c:
    // 0x214f5c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x214f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x214f60: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x214f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x214f64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214f68: 0x8c4310f4  lw          $v1, 0x10F4($v0)
    ctx->pc = 0x214f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4340)));
    // 0x214f6c: 0x8c4410f8  lw          $a0, 0x10F8($v0)
    ctx->pc = 0x214f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4344)));
label_214f70:
    // 0x214f70: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x214f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214f74: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x214f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x214f78: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x214f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x214f7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214f80: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x214F80u;
    {
        const bool branch_taken_0x214f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F80u;
        // 0x214f84: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f80) {
            ctx->pc = 0x2151E4u;
            goto label_2151e4;
        }
    }
    ctx->pc = 0x214F88u;
label_214f88:
    // 0x214f88: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x214F88u;
    SET_GPR_U32(ctx, 31, 0x214F90u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x214F88u, 0x214F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214F90u;
label_214f90:
    // 0x214f90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x214f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x214f94: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x214F94u;
    {
        const bool branch_taken_0x214f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F94u;
        // 0x214f98: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f94) {
            ctx->pc = 0x215040u;
            goto label_215040;
        }
    }
    ctx->pc = 0x214F9Cu;
    // 0x214f9c: 0x8e070304  lw          $a3, 0x304($s0)
    ctx->pc = 0x214f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214fa0: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x214fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x214fa4: 0x8ce32b8c  lw          $v1, 0x2B8C($a3)
    ctx->pc = 0x214fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11148)));
    // 0x214fa8: 0x8ce42b90  lw          $a0, 0x2B90($a3)
    ctx->pc = 0x214fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11152)));
    // 0x214fac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x214facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x214fb0: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x214fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x214fb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214FB4u;
    {
        const bool branch_taken_0x214fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FB4u;
        // 0x214fb8: 0x878821  addu        $s1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fb4) {
            ctx->pc = 0x214FC4u;
            goto label_214fc4;
        }
    }
    ctx->pc = 0x214FBCu;
    // 0x214fbc: 0x8ce22b94  lw          $v0, 0x2B94($a3)
    ctx->pc = 0x214fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11156)));
    // 0x214fc0: 0x478821  addu        $s1, $v0, $a3
    ctx->pc = 0x214fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_214fc4:
    // 0x214fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fc8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x214fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x214fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fd0: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x214fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x214fd4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x214fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214fd8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x214FD8u;
    SET_GPR_U32(ctx, 31, 0x214FE0u);
    ctx->pc = 0x214FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FD8u;
    // 0x214fdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x214FD8u, 0x214FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FE0u;
label_214fe0:
    // 0x214fe0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214fe4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214fe8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x214FE8u;
    {
        const bool branch_taken_0x214fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214fe8) {
            ctx->pc = 0x21505Cu;
            goto label_21505c;
        }
    }
    ctx->pc = 0x214FF0u;
label_214ff0:
    // 0x214ff0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x214FF0u;
    SET_GPR_U32(ctx, 31, 0x214FF8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x214FF0u, 0x214FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FF8u;
label_214ff8:
    // 0x214ff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x214ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x214ffc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x214FFCu;
    {
        const bool branch_taken_0x214ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FFCu;
        // 0x215000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ffc) {
            ctx->pc = 0x215040u;
            goto label_215040;
        }
    }
    ctx->pc = 0x215004u;
    // 0x215004: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x215004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215008: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x215008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21500c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21500cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215010: 0x8c432b8c  lw          $v1, 0x2B8C($v0)
    ctx->pc = 0x215010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11148)));
    // 0x215014: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x215014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x215018: 0x8c4a2b94  lw          $t2, 0x2B94($v0)
    ctx->pc = 0x215018u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11156)));
    // 0x21501c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x21501cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215020: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x215020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x215024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21502c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21502cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x215030: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x215030u;
    SET_GPR_U32(ctx, 31, 0x215038u);
    ctx->pc = 0x215034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215030u;
    // 0x215034: 0x1428821  addu        $s1, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x215030u, 0x215038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215038u;
label_215038:
    // 0x215038: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x215038u;
    {
        const bool branch_taken_0x215038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215038) {
            ctx->pc = 0x21505Cu;
            goto label_21505c;
        }
    }
    ctx->pc = 0x215040u;
label_215040:
    // 0x215040: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x215040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215044: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x215044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x215048: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x215048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21504c: 0x8c4325d4  lw          $v1, 0x25D4($v0)
    ctx->pc = 0x21504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9684)));
    // 0x215050: 0x8c4425d8  lw          $a0, 0x25D8($v0)
    ctx->pc = 0x215050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9688)));
    // 0x215054: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x215054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215058: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x215058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21505c:
    // 0x21505c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x21505cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x215060: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x215060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x215064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215068: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x215068u;
    {
        const bool branch_taken_0x215068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215068u;
        // 0x21506c: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215068) {
            ctx->pc = 0x2151E4u;
            goto label_2151e4;
        }
    }
    ctx->pc = 0x215070u;
label_215070:
    // 0x215070: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x215070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215074: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x215074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x215078: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x215078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21507c: 0x8c430d08  lw          $v1, 0xD08($v0)
    ctx->pc = 0x21507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3336)));
    // 0x215080: 0x8c440d0c  lw          $a0, 0xD0C($v0)
    ctx->pc = 0x215080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3340)));
    // 0x215084: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x215084u;
    {
        const bool branch_taken_0x215084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215084u;
        // 0x215088: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215084) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x21508Cu;
label_21508c:
    // 0x21508c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x21508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215090: 0x8c4322b4  lw          $v1, 0x22B4($v0)
    ctx->pc = 0x215090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8884)));
    // 0x215094: 0x8c4422b8  lw          $a0, 0x22B8($v0)
    ctx->pc = 0x215094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8888)));
    // 0x215098: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x215098u;
    {
        const bool branch_taken_0x215098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215098u;
        // 0x21509c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215098) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x2150A0u;
label_2150a0:
    // 0x2150a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2150a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2150a4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2150a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2150a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2150a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2150ac: 0x8c43086c  lw          $v1, 0x86C($v0)
    ctx->pc = 0x2150acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2156)));
    // 0x2150b0: 0x8c440870  lw          $a0, 0x870($v0)
    ctx->pc = 0x2150b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2160)));
    // 0x2150b4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2150b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2150b8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2150B8u;
    {
        const bool branch_taken_0x2150b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150B8u;
        // 0x2150bc: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150b8) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x2150C0u;
label_2150c0:
    // 0x2150c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2150c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2150c4: 0x24060279  addiu       $a2, $zero, 0x279
    ctx->pc = 0x2150c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x2150c8: 0x8e050564  lw          $a1, 0x564($s0)
    ctx->pc = 0x2150c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2150cc: 0x8c432004  lw          $v1, 0x2004($v0)
    ctx->pc = 0x2150ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8196)));
    // 0x2150d0: 0x8c442008  lw          $a0, 0x2008($v0)
    ctx->pc = 0x2150d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8200)));
    // 0x2150d4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2150d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2150d8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2150d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2150dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2150dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2150e0: 0x14a60040  bne         $a1, $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2150E0u;
    {
        const bool branch_taken_0x2150e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2150E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150E0u;
        // 0x2150e4: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150e0) {
            ctx->pc = 0x2151E4u;
            goto label_2151e4;
        }
    }
    ctx->pc = 0x2150E8u;
    // 0x2150e8: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x2150E8u;
    SET_GPR_U32(ctx, 31, 0x2150F0u);
    ctx->pc = 0x2150ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150E8u;
    // 0x2150ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x2150E8u, 0x2150F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150F0u;
label_2150f0:
    // 0x2150f0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2150F0u;
    {
        const bool branch_taken_0x2150f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150F0u;
        // 0x2150f4: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150f0) {
            ctx->pc = 0x2151E8u;
            goto label_2151e8;
        }
    }
    ctx->pc = 0x2150F8u;
label_2150f8:
    // 0x2150f8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2150f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2150fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2150fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x215100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215104: 0x8c431ebc  lw          $v1, 0x1EBC($v0)
    ctx->pc = 0x215104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7868)));
    // 0x215108: 0x8c441ec0  lw          $a0, 0x1EC0($v0)
    ctx->pc = 0x215108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7872)));
label_21510c:
    // 0x21510c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x21510cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215110: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x215110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x215114: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x215114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x215118: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x215118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21511c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21511Cu;
    {
        const bool branch_taken_0x21511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21511Cu;
        // 0x215120: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21511c) {
            ctx->pc = 0x2151E4u;
            goto label_2151e4;
        }
    }
    ctx->pc = 0x215124u;
label_215124:
    // 0x215124: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x215124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215128: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x215128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x21512c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21512cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x215130: 0x8c4315a4  lw          $v1, 0x15A4($v0)
    ctx->pc = 0x215130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5540)));
    // 0x215134: 0x8c4415a8  lw          $a0, 0x15A8($v0)
    ctx->pc = 0x215134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5544)));
    // 0x215138: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x215138u;
    {
        const bool branch_taken_0x215138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215138u;
        // 0x21513c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215138) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x215140u;
label_215140:
    // 0x215140: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x215140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215144: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x215144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x215148: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x215148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21514c: 0x8c4315a4  lw          $v1, 0x15A4($v0)
    ctx->pc = 0x21514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5540)));
    // 0x215150: 0x8c4415a8  lw          $a0, 0x15A8($v0)
    ctx->pc = 0x215150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5544)));
    // 0x215154: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x215154u;
    {
        const bool branch_taken_0x215154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215154u;
        // 0x215158: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215154) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x21515Cu;
label_21515c:
    // 0x21515c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x21515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215160: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x215160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x215164: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x215164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x215168: 0x8c43194c  lw          $v1, 0x194C($v0)
    ctx->pc = 0x215168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6476)));
    // 0x21516c: 0x8c441950  lw          $a0, 0x1950($v0)
    ctx->pc = 0x21516cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6480)));
    // 0x215170: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x215170u;
    {
        const bool branch_taken_0x215170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215170u;
        // 0x215174: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215170) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x215178u;
label_215178:
    // 0x215178: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x215178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x21517c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x21517cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x215180: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x215180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x215184: 0x8c433078  lw          $v1, 0x3078($v0)
    ctx->pc = 0x215184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12408)));
    // 0x215188: 0x8c44307c  lw          $a0, 0x307C($v0)
    ctx->pc = 0x215188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12412)));
    // 0x21518c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21518Cu;
    {
        const bool branch_taken_0x21518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21518Cu;
        // 0x215190: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21518c) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x215194u;
label_215194:
    // 0x215194: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x215194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215198: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x215198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x21519c: 0x8c443270  lw          $a0, 0x3270($v0)
    ctx->pc = 0x21519cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
    // 0x2151a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2151A0u;
    {
        const bool branch_taken_0x2151a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2151A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151A0u;
        // 0x2151a4: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151a0) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x2151A8u;
label_2151a8:
    // 0x2151a8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2151a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2151ac: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x2151acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x2151b0: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x2151b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x2151b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2151B4u;
    {
        const bool branch_taken_0x2151b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2151B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151B4u;
        // 0x2151b8: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151b4) {
            ctx->pc = 0x2151E0u;
            goto label_2151e0;
        }
    }
    ctx->pc = 0x2151BCu;
label_2151bc:
    // 0x2151bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2151bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2151c0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2151c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2151c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2151c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2151c8: 0x8c432d6c  lw          $v1, 0x2D6C($v0)
    ctx->pc = 0x2151c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11628)));
    // 0x2151cc: 0x8c442d70  lw          $a0, 0x2D70($v0)
    ctx->pc = 0x2151ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11632)));
    // 0x2151d0: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x2151d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x2151d4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2151d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2151d8: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2151d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2151dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2151dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2151e0:
    // 0x2151e0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2151e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2151e4:
    // 0x2151e4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x2151e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_2151e8:
    // 0x2151e8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2151E8u;
    {
        const bool branch_taken_0x2151e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2151e8) {
            ctx->pc = 0x2151ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2151E8u;
            // 0x2151ec: 0xae000600  sw          $zero, 0x600($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21521Cu;
            goto label_21521c;
        }
    }
    ctx->pc = 0x2151F0u;
    // 0x2151f0: 0xe6140600  swc1        $f20, 0x600($s0)
    ctx->pc = 0x2151f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2151f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2151f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2151f8: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x2151f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2151fc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2151fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215200: 0x0  nop
    ctx->pc = 0x215200u;
    // NOP
    // 0x215204: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x215204u;
    {
        const bool branch_taken_0x215204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215204u;
        // 0x215208: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215204) {
            ctx->pc = 0x215230u;
            goto label_215230;
        }
    }
    ctx->pc = 0x21520Cu;
    // 0x21520c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x21520cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x215210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x215214u;
    {
        const bool branch_taken_0x215214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215214u;
        // 0x215218: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215214) {
            ctx->pc = 0x215230u;
            goto label_215230;
        }
    }
    ctx->pc = 0x21521Cu;
label_21521c:
    // 0x21521c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x21521cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x215220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215224: 0x0  nop
    ctx->pc = 0x215224u;
    // NOP
    // 0x215228: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x215228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x21522c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_215230:
    // 0x215230: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x215230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215234: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x215234u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x215238: 0x36680040  ori         $t0, $s3, 0x40
    ctx->pc = 0x215238u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)64);
    // 0x21523c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215240: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x215240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x215244: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x215244u;
    SET_GPR_U32(ctx, 31, 0x21524Cu);
    ctx->pc = 0x215248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215244u;
    // 0x215248: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x215244u, 0x21524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21524Cu;
label_21524c:
    // 0x21524c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x21524cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x215250: 0xae0016e0  sw          $zero, 0x16E0($s0)
    ctx->pc = 0x215250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 0));
    // 0x215254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x215254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x215258: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x215258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_21525c:
    // 0x21525c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x21525Cu;
    SET_GPR_U32(ctx, 31, 0x215264u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x21525Cu, 0x215264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215264u;
label_215264:
    // 0x215264: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x215264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21526c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x21526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x215270: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x215270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x215274: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215278: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x215278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x21527c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x21527Cu;
    SET_GPR_U32(ctx, 31, 0x215284u);
    ctx->pc = 0x215280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21527Cu;
    // 0x215280: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x21527Cu, 0x215284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215284u;
label_215284:
    // 0x215284: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x215284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215288: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x215288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21528c: 0x0  nop
    ctx->pc = 0x21528cu;
    // NOP
    // 0x215290: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x215290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215294: 0x0  nop
    ctx->pc = 0x215294u;
    // NOP
    // 0x215298: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x215298u;
    {
        const bool branch_taken_0x215298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215298u;
        // 0x21529c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215298) {
            ctx->pc = 0x2152CCu;
            goto label_2152cc;
        }
    }
    ctx->pc = 0x2152A0u;
    // 0x2152a0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2152a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2152a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2152a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2152a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2152a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2152ac: 0x0  nop
    ctx->pc = 0x2152acu;
    // NOP
    // 0x2152b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2152B0u;
    {
        const bool branch_taken_0x2152b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2152B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152B0u;
        // 0x2152b4: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152b0) {
            ctx->pc = 0x2152CCu;
            goto label_2152cc;
        }
    }
    ctx->pc = 0x2152B8u;
    // 0x2152b8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2152b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2152bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2152bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2152c0: 0x0  nop
    ctx->pc = 0x2152c0u;
    // NOP
    // 0x2152c4: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2152c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2152c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2152c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2152cc:
    // 0x2152cc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2152CCu;
    SET_GPR_U32(ctx, 31, 0x2152D4u);
    ctx->pc = 0x2152D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152CCu;
    // 0x2152d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2152CCu, 0x2152D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152D4u;
label_2152d4:
    // 0x2152d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2152d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152d8: 0x242880b  movn        $s1, $s2, $v0
    ctx->pc = 0x2152d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    // 0x2152dc: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2152DCu;
    SET_GPR_U32(ctx, 31, 0x2152E4u);
    ctx->pc = 0x2152E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152DCu;
    // 0x2152e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2152DCu, 0x2152E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152E4u;
label_2152e4:
    // 0x2152e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2152E4u;
    {
        const bool branch_taken_0x2152e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2152e4) {
            ctx->pc = 0x2152F8u;
            goto label_2152f8;
        }
    }
    ctx->pc = 0x2152ECu;
    // 0x2152ec: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2152ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x2152f0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2152f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2152f4: 0x242880b  movn        $s1, $s2, $v0
    ctx->pc = 0x2152f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_2152f8:
    // 0x2152f8: 0x1220025d  beqz        $s1, . + 4 + (0x25D << 2)
    ctx->pc = 0x2152F8u;
    {
        const bool branch_taken_0x2152f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2152f8) {
            ctx->pc = 0x215C70u;
            goto label_215c70;
        }
    }
    ctx->pc = 0x215300u;
    // 0x215300: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x215300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x215304: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x215304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215308: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x215308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x21530c: 0x2c62007f  sltiu       $v0, $v1, 0x7F
    ctx->pc = 0x21530cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x215310: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x215310u;
    {
        const bool branch_taken_0x215310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215310u;
        // 0x215314: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215310) {
            ctx->pc = 0x215780u;
            goto label_215780;
        }
    }
    ctx->pc = 0x215318u;
    // 0x215318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x215318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21531c: 0x24426310  addiu       $v0, $v0, 0x6310
    ctx->pc = 0x21531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25360));
    // 0x215320: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215324: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x215324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215328: 0x800008  jr          $a0
    ctx->pc = 0x215328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215330u: goto label_215330;
            case 0x215390u: goto label_215390;
            case 0x215460u: goto label_215460;
            case 0x215564u: goto label_215564;
            case 0x2156CCu: goto label_2156cc;
            case 0x215720u: goto label_215720;
            case 0x215780u: goto label_215780;
            case 0x215790u: goto label_215790;
            case 0x215800u: goto label_215800;
            case 0x21589Cu: goto label_21589c;
            case 0x215994u: goto label_215994;
            case 0x2159F8u: goto label_2159f8;
            case 0x215AA4u: goto label_215aa4;
            case 0x215B24u: goto label_215b24;
            case 0x215B6Cu: goto label_215b6c;
            case 0x215BA8u: goto label_215ba8;
            case 0x215C10u: goto label_215c10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215328u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x215330u;
label_215330:
    // 0x215330: 0x24020228  addiu       $v0, $zero, 0x228
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x215334: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x215334u;
    {
        const bool branch_taken_0x215334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x215334) {
            ctx->pc = 0x215374u;
            goto label_215374;
        }
    }
    ctx->pc = 0x21533Cu;
    // 0x21533c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x21533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215340: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x215340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x215344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215348: 0x0  nop
    ctx->pc = 0x215348u;
    // NOP
    // 0x21534c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21534cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215350: 0x0  nop
    ctx->pc = 0x215350u;
    // NOP
    // 0x215354: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x215354u;
    {
        const bool branch_taken_0x215354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215354) {
            ctx->pc = 0x215374u;
            goto label_215374;
        }
    }
    ctx->pc = 0x21535Cu;
    // 0x21535c: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x21535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x215360: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x215360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x215364: 0x1440016f  bnez        $v0, . + 4 + (0x16F << 2)
    ctx->pc = 0x215364u;
    {
        const bool branch_taken_0x215364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215364u;
        // 0x215368: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215364) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x21536Cu;
    // 0x21536c: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x21536Cu;
    {
        const bool branch_taken_0x21536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21536Cu;
        // 0x215370: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21536c) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x215374u;
label_215374:
    // 0x215374: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215374u;
    SET_GPR_U32(ctx, 31, 0x21537Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215374u, 0x21537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21537Cu;
label_21537c:
    // 0x21537c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215380: 0x14400168  bnez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x215380u;
    {
        const bool branch_taken_0x215380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215380u;
        // 0x215384: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215380) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x215388u;
    // 0x215388: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x215388u;
    {
        const bool branch_taken_0x215388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215388) {
            ctx->pc = 0x215984u;
            goto label_215984;
        }
    }
    ctx->pc = 0x215390u;
label_215390:
    // 0x215390: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x215390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x215394: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x215394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x215398: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x215398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21539c: 0x1440022b  bnez        $v0, . + 4 + (0x22B << 2)
    ctx->pc = 0x21539Cu;
    {
        const bool branch_taken_0x21539c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21539Cu;
        // 0x2153a0: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21539c) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x2153A4u;
    // 0x2153a4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2153a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2153a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2153A8u;
    {
        const bool branch_taken_0x2153a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2153a8) {
            ctx->pc = 0x2153ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2153A8u;
            // 0x2153ac: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2153C8u;
            goto label_2153c8;
        }
    }
    ctx->pc = 0x2153B0u;
    // 0x2153b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2153B0u;
    SET_GPR_U32(ctx, 31, 0x2153B8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2153B0u, 0x2153B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2153B8u;
label_2153b8:
    // 0x2153b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2153b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2153bc: 0x14400223  bnez        $v0, . + 4 + (0x223 << 2)
    ctx->pc = 0x2153BCu;
    {
        const bool branch_taken_0x2153bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153BCu;
        // 0x2153c0: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153bc) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x2153C4u;
    // 0x2153c4: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x2153c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_2153c8:
    // 0x2153c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2153c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2153ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2153d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2153D0u;
    {
        const bool branch_taken_0x2153d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2153D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153D0u;
        // 0x2153d4: 0x30620380  andi        $v0, $v1, 0x380 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153d0) {
            ctx->pc = 0x215408u;
            goto label_215408;
        }
    }
    ctx->pc = 0x2153D8u;
    // 0x2153d8: 0x82021869  lb          $v0, 0x1869($s0)
    ctx->pc = 0x2153d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6249)));
    // 0x2153dc: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2153DCu;
    {
        const bool branch_taken_0x2153dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2153E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153DCu;
        // 0x2153e0: 0x30620380  andi        $v0, $v1, 0x380 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153dc) {
            ctx->pc = 0x215408u;
            goto label_215408;
        }
    }
    ctx->pc = 0x2153E4u;
    // 0x2153e4: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2153e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2153e8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2153e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2153ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2153ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2153f0: 0x0  nop
    ctx->pc = 0x2153f0u;
    // NOP
    // 0x2153f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2153f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2153f8: 0x0  nop
    ctx->pc = 0x2153f8u;
    // NOP
    // 0x2153fc: 0x45010213  bc1t        . + 4 + (0x213 << 2)
    ctx->pc = 0x2153FCu;
    {
        const bool branch_taken_0x2153fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x215400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153FCu;
        // 0x215400: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153fc) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215404u;
    // 0x215404: 0x30620380  andi        $v0, $v1, 0x380
    ctx->pc = 0x215404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
label_215408:
    // 0x215408: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x215408u;
    {
        const bool branch_taken_0x215408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215408u;
        // 0x21540c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215408) {
            ctx->pc = 0x215448u;
            goto label_215448;
        }
    }
    ctx->pc = 0x215410u;
    // 0x215410: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215414: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x215414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x215418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21541c: 0x0  nop
    ctx->pc = 0x21541cu;
    // NOP
    // 0x215420: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215424: 0x0  nop
    ctx->pc = 0x215424u;
    // NOP
    // 0x215428: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x215428u;
    {
        const bool branch_taken_0x215428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215428u;
        // 0x21542c: 0x34420380  ori         $v0, $v0, 0x380 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215428) {
            ctx->pc = 0x21544Cu;
            goto label_21544c;
        }
    }
    ctx->pc = 0x215430u;
    // 0x215430: 0x8e0217a8  lw          $v0, 0x17A8($s0)
    ctx->pc = 0x215430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6056)));
    // 0x215434: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x215434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x215438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215438u;
    {
        const bool branch_taken_0x215438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215438u;
        // 0x21543c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215438) {
            ctx->pc = 0x215448u;
            goto label_215448;
        }
    }
    ctx->pc = 0x215440u;
    // 0x215440: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x215440u;
    {
        const bool branch_taken_0x215440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215440u;
        // 0x215444: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215440) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215448u;
label_215448:
    // 0x215448: 0x34420380  ori         $v0, $v0, 0x380
    ctx->pc = 0x215448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)896);
label_21544c:
    // 0x21544c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x215450: 0x1440014c  bnez        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x215450u;
    {
        const bool branch_taken_0x215450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215450) {
            ctx->pc = 0x215984u;
            goto label_215984;
        }
    }
    ctx->pc = 0x215458u;
    // 0x215458: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x215458u;
    {
        const bool branch_taken_0x215458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215458) {
            ctx->pc = 0x215374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215374;
        }
    }
    ctx->pc = 0x215460u;
label_215460:
    // 0x215460: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215464: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x215464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x215468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21546c: 0x0  nop
    ctx->pc = 0x21546cu;
    // NOP
    // 0x215470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215474: 0x0  nop
    ctx->pc = 0x215474u;
    // NOP
    // 0x215478: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x215478u;
    {
        const bool branch_taken_0x215478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215478) {
            ctx->pc = 0x2154B0u;
            goto label_2154b0;
        }
    }
    ctx->pc = 0x215480u;
    // 0x215480: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215480u;
    SET_GPR_U32(ctx, 31, 0x215488u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215480u, 0x215488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215488u;
label_215488:
    // 0x215488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21548c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21548Cu;
    {
        const bool branch_taken_0x21548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21548c) {
            ctx->pc = 0x215490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21548Cu;
            // 0x215490: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2154B0u;
            goto label_2154b0;
        }
    }
    ctx->pc = 0x215494u;
    // 0x215494: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x215494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x215498: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21549c: 0xc09ce58  jal         func_273960
    ctx->pc = 0x21549Cu;
    SET_GPR_U32(ctx, 31, 0x2154A4u);
    ctx->pc = 0x2154A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21549Cu;
    // 0x2154a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273960u, 0x21549Cu, 0x2154A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2154A4u;
label_2154a4:
    // 0x2154a4: 0x5440021e  bnel        $v0, $zero, . + 4 + (0x21E << 2)
    ctx->pc = 0x2154A4u;
    {
        const bool branch_taken_0x2154a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2154a4) {
            ctx->pc = 0x2154A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154A4u;
            // 0x2154a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D20u;
            goto label_215d20;
        }
    }
    ctx->pc = 0x2154ACu;
    // 0x2154ac: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2154acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2154b0:
    // 0x2154b0: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x2154b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x2154b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2154b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2154b8: 0x0  nop
    ctx->pc = 0x2154b8u;
    // NOP
    // 0x2154bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2154bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2154c0: 0x0  nop
    ctx->pc = 0x2154c0u;
    // NOP
    // 0x2154c4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2154C4u;
    {
        const bool branch_taken_0x2154c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154C4u;
        // 0x2154c8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154c4) {
            ctx->pc = 0x215514u;
            goto label_215514;
        }
    }
    ctx->pc = 0x2154CCu;
    // 0x2154cc: 0x245164f0  addiu       $s1, $v0, 0x64F0
    ctx->pc = 0x2154ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2154d0: 0xc0a529e  jal         func_294A78
    ctx->pc = 0x2154D0u;
    SET_GPR_U32(ctx, 31, 0x2154D8u);
    ctx->pc = 0x2154D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2154D0u;
    // 0x2154d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A78u, 0x2154D0u, 0x2154D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2154D8u;
label_2154d8:
    // 0x2154d8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2154D8u;
    {
        const bool branch_taken_0x2154d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2154d8) {
            ctx->pc = 0x2154DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154D8u;
            // 0x2154dc: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215518u;
            goto label_215518;
        }
    }
    ctx->pc = 0x2154E0u;
    // 0x2154e0: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2154e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2154e4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2154E4u;
    SET_GPR_U32(ctx, 31, 0x2154ECu);
    ctx->pc = 0x2154E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2154E4u;
    // 0x2154e8: 0xa2220541  sb          $v0, 0x541($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1345), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2154E4u, 0x2154ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2154ECu;
label_2154ec:
    // 0x2154ec: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2154ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2154f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2154F0u;
    {
        const bool branch_taken_0x2154f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F0u;
        // 0x2154f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f0) {
            ctx->pc = 0x215500u;
            goto label_215500;
        }
    }
    ctx->pc = 0x2154F8u;
    // 0x2154f8: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2154F8u;
    {
        const bool branch_taken_0x2154f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F8u;
        // 0x2154fc: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f8) {
            ctx->pc = 0x215504u;
            goto label_215504;
        }
    }
    ctx->pc = 0x215500u;
label_215500:
    // 0x215500: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x215500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_215504:
    // 0x215504: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x215504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x215508: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x215508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x21550c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x21550cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x215510: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x215510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_215514:
    // 0x215514: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215518:
    // 0x215518: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x215518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x21551c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21551cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215520: 0x0  nop
    ctx->pc = 0x215520u;
    // NOP
    // 0x215524: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215528: 0x0  nop
    ctx->pc = 0x215528u;
    // NOP
    // 0x21552c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21552Cu;
    {
        const bool branch_taken_0x21552c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21552c) {
            ctx->pc = 0x215548u;
            goto label_215548;
        }
    }
    ctx->pc = 0x215534u;
    // 0x215534: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215534u;
    SET_GPR_U32(ctx, 31, 0x21553Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215534u, 0x21553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21553Cu;
label_21553c:
    // 0x21553c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21553cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215540: 0x144000f8  bnez        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x215540u;
    {
        const bool branch_taken_0x215540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215540u;
        // 0x215544: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215540) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x215548u;
label_215548:
    // 0x215548: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215548u;
    SET_GPR_U32(ctx, 31, 0x215550u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215548u, 0x215550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215550u;
label_215550:
    // 0x215550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215554: 0x54400085  bnel        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x215554u;
    {
        const bool branch_taken_0x215554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215554) {
            ctx->pc = 0x215558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215554u;
            // 0x215558: 0xae0016dc  sw          $zero, 0x16DC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21576Cu;
            goto label_21576c;
        }
    }
    ctx->pc = 0x21555Cu;
    // 0x21555c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x21555Cu;
    {
        const bool branch_taken_0x21555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21555Cu;
        // 0x215560: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21555c) {
            ctx->pc = 0x21596Cu;
            goto label_21596c;
        }
    }
    ctx->pc = 0x215564u;
label_215564:
    // 0x215564: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215568: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x215568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x21556c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21556cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215570: 0x0  nop
    ctx->pc = 0x215570u;
    // NOP
    // 0x215574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215578: 0x0  nop
    ctx->pc = 0x215578u;
    // NOP
    // 0x21557c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x21557Cu;
    {
        const bool branch_taken_0x21557c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21557c) {
            ctx->pc = 0x215624u;
            goto label_215624;
        }
    }
    ctx->pc = 0x215584u;
    // 0x215584: 0xc60116e4  lwc1        $f1, 0x16E4($s0)
    ctx->pc = 0x215584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x215588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21558c: 0x0  nop
    ctx->pc = 0x21558cu;
    // NOP
    // 0x215590: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x215590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215594: 0x0  nop
    ctx->pc = 0x215594u;
    // NOP
    // 0x215598: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x215598u;
    {
        const bool branch_taken_0x215598 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215598) {
            ctx->pc = 0x21559Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215598u;
            // 0x21559c: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2155D8u;
            goto label_2155d8;
        }
    }
    ctx->pc = 0x2155A0u;
    // 0x2155a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2155A0u;
    SET_GPR_U32(ctx, 31, 0x2155A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2155A0u, 0x2155A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2155A8u;
label_2155a8:
    // 0x2155a8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2155a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2155ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2155ACu;
    {
        const bool branch_taken_0x2155ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2155ac) {
            ctx->pc = 0x2155B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2155ACu;
            // 0x2155b0: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2155D8u;
            goto label_2155d8;
        }
    }
    ctx->pc = 0x2155B4u;
    // 0x2155b4: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2155b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2155b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2155b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2155bc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2155bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2155c0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2155c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2155c4: 0xe60016e4  swc1        $f0, 0x16E4($s0)
    ctx->pc = 0x2155c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
    // 0x2155c8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2155c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2155cc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2155ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2155d0: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2155D0u;
    {
        const bool branch_taken_0x2155d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155D0u;
        // 0x2155d4: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155d0) {
            ctx->pc = 0x215D1Cu;
            goto label_215d1c;
        }
    }
    ctx->pc = 0x2155D8u;
label_2155d8:
    // 0x2155d8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2155d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2155dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2155dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2155e0: 0x0  nop
    ctx->pc = 0x2155e0u;
    // NOP
    // 0x2155e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2155e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2155e8: 0x0  nop
    ctx->pc = 0x2155e8u;
    // NOP
    // 0x2155ec: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2155ECu;
    {
        const bool branch_taken_0x2155ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2155ec) {
            ctx->pc = 0x2155F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2155ECu;
            // 0x2155f0: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21562Cu;
            goto label_21562c;
        }
    }
    ctx->pc = 0x2155F4u;
    // 0x2155f4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2155F4u;
    SET_GPR_U32(ctx, 31, 0x2155FCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2155F4u, 0x2155FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2155FCu;
label_2155fc:
    // 0x2155fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2155fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215600: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x215600u;
    {
        const bool branch_taken_0x215600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215600) {
            ctx->pc = 0x215604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215600u;
            // 0x215604: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215624u;
            goto label_215624;
        }
    }
    ctx->pc = 0x215608u;
    // 0x215608: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x215608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x21560c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21560cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215610: 0xc09ce58  jal         func_273960
    ctx->pc = 0x215610u;
    SET_GPR_U32(ctx, 31, 0x215618u);
    ctx->pc = 0x215614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215610u;
    // 0x215614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273960u, 0x215610u, 0x215618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215618u;
label_215618:
    // 0x215618: 0x544001c1  bnel        $v0, $zero, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x215618u;
    {
        const bool branch_taken_0x215618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215618) {
            ctx->pc = 0x21561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215618u;
            // 0x21561c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D20u;
            goto label_215d20;
        }
    }
    ctx->pc = 0x215620u;
    // 0x215620: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215624:
    // 0x215624: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x215624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x215628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21562c:
    // 0x21562c: 0x0  nop
    ctx->pc = 0x21562cu;
    // NOP
    // 0x215630: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215634: 0x0  nop
    ctx->pc = 0x215634u;
    // NOP
    // 0x215638: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x215638u;
    {
        const bool branch_taken_0x215638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215638) {
            ctx->pc = 0x21563Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215638u;
            // 0x21563c: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215664u;
            goto label_215664;
        }
    }
    ctx->pc = 0x215640u;
    // 0x215640: 0x8e040700  lw          $a0, 0x700($s0)
    ctx->pc = 0x215640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x215644: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x215644u;
    {
        const bool branch_taken_0x215644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x215644) {
            ctx->pc = 0x215648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215644u;
            // 0x215648: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215664u;
            goto label_215664;
        }
    }
    ctx->pc = 0x21564Cu;
    // 0x21564c: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x21564Cu;
    SET_GPR_U32(ctx, 31, 0x215654u);
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x21564Cu, 0x215654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215654u;
label_215654:
    // 0x215654: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x215654u;
    {
        const bool branch_taken_0x215654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215654) {
            ctx->pc = 0x215658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215654u;
            // 0x215658: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215664u;
            goto label_215664;
        }
    }
    ctx->pc = 0x21565Cu;
    // 0x21565c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x21565Cu;
    {
        const bool branch_taken_0x21565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21565Cu;
        // 0x215660: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21565c) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x215664u;
label_215664:
    // 0x215664: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x215664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x215668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21566c: 0x0  nop
    ctx->pc = 0x21566cu;
    // NOP
    // 0x215670: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215674: 0x0  nop
    ctx->pc = 0x215674u;
    // NOP
    // 0x215678: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x215678u;
    {
        const bool branch_taken_0x215678 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215678) {
            ctx->pc = 0x2156B0u;
            goto label_2156b0;
        }
    }
    ctx->pc = 0x215680u;
    // 0x215680: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215680u;
    SET_GPR_U32(ctx, 31, 0x215688u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215680u, 0x215688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215688u;
label_215688:
    // 0x215688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21568c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21568Cu;
    {
        const bool branch_taken_0x21568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21568c) {
            ctx->pc = 0x2156B0u;
            goto label_2156b0;
        }
    }
    ctx->pc = 0x215694u;
    // 0x215694: 0x8e040700  lw          $a0, 0x700($s0)
    ctx->pc = 0x215694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x215698: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215698u;
    {
        const bool branch_taken_0x215698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x215698) {
            ctx->pc = 0x2156B0u;
            goto label_2156b0;
        }
    }
    ctx->pc = 0x2156A0u;
    // 0x2156a0: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x2156A0u;
    SET_GPR_U32(ctx, 31, 0x2156A8u);
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x2156A0u, 0x2156A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156A8u;
label_2156a8:
    // 0x2156a8: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2156A8u;
    {
        const bool branch_taken_0x2156a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156A8u;
        // 0x2156ac: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156a8) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x2156B0u;
label_2156b0:
    // 0x2156b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2156B0u;
    SET_GPR_U32(ctx, 31, 0x2156B8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2156B0u, 0x2156B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156B8u;
label_2156b8:
    // 0x2156b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2156b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2156bc: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2156BCu;
    {
        const bool branch_taken_0x2156bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2156bc) {
            ctx->pc = 0x2156C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2156BCu;
            // 0x2156c0: 0xae0016dc  sw          $zero, 0x16DC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21576Cu;
            goto label_21576c;
        }
    }
    ctx->pc = 0x2156C4u;
    // 0x2156c4: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2156C4u;
    {
        const bool branch_taken_0x2156c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C4u;
        // 0x2156c8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156c4) {
            ctx->pc = 0x21596Cu;
            goto label_21596c;
        }
    }
    ctx->pc = 0x2156CCu;
label_2156cc:
    // 0x2156cc: 0xc60116e4  lwc1        $f1, 0x16E4($s0)
    ctx->pc = 0x2156ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2156d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2156d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2156d4: 0x0  nop
    ctx->pc = 0x2156d4u;
    // NOP
    // 0x2156d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2156d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2156dc: 0x0  nop
    ctx->pc = 0x2156dcu;
    // NOP
    // 0x2156e0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2156E0u;
    {
        const bool branch_taken_0x2156e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2156E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156E0u;
        // 0x2156e4: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156e0) {
            ctx->pc = 0x215724u;
            goto label_215724;
        }
    }
    ctx->pc = 0x2156E8u;
    // 0x2156e8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2156ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2156ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2156f0: 0x0  nop
    ctx->pc = 0x2156f0u;
    // NOP
    // 0x2156f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2156f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2156f8: 0x0  nop
    ctx->pc = 0x2156f8u;
    // NOP
    // 0x2156fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2156FCu;
    {
        const bool branch_taken_0x2156fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156FCu;
        // 0x215700: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156fc) {
            ctx->pc = 0x215724u;
            goto label_215724;
        }
    }
    ctx->pc = 0x215704u;
    // 0x215704: 0x960502fe  lhu         $a1, 0x2FE($s0)
    ctx->pc = 0x215704u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x215708: 0x8e060564  lw          $a2, 0x564($s0)
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x21570c: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x21570Cu;
    SET_GPR_U32(ctx, 31, 0x215714u);
    ctx->pc = 0x215710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21570Cu;
    // 0x215710: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x21570Cu, 0x215714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215714u;
label_215714:
    // 0x215714: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x215714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x215718: 0x1440014c  bnez        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x215718u;
    {
        const bool branch_taken_0x215718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215718u;
        // 0x21571c: 0x2402008b  addiu       $v0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215718) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215720u;
label_215720:
    // 0x215720: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215724:
    // 0x215724: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x215724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x215728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21572c: 0x0  nop
    ctx->pc = 0x21572cu;
    // NOP
    // 0x215730: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215734: 0x0  nop
    ctx->pc = 0x215734u;
    // NOP
    // 0x215738: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x215738u;
    {
        const bool branch_taken_0x215738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215738) {
            ctx->pc = 0x215754u;
            goto label_215754;
        }
    }
    ctx->pc = 0x215740u;
    // 0x215740: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215740u;
    SET_GPR_U32(ctx, 31, 0x215748u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215740u, 0x215748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215748u;
label_215748:
    // 0x215748: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21574c: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x21574Cu;
    {
        const bool branch_taken_0x21574c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21574Cu;
        // 0x215750: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21574c) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x215754u;
label_215754:
    // 0x215754: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215754u;
    SET_GPR_U32(ctx, 31, 0x21575Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215754u, 0x21575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21575Cu;
label_21575c:
    // 0x21575c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215760: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x215760u;
    {
        const bool branch_taken_0x215760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215760u;
        // 0x215764: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215760) {
            ctx->pc = 0x21596Cu;
            goto label_21596c;
        }
    }
    ctx->pc = 0x215768u;
    // 0x215768: 0xae0016dc  sw          $zero, 0x16DC($s0)
    ctx->pc = 0x215768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 0));
label_21576c:
    // 0x21576c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215770: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x215770u;
    SET_GPR_U32(ctx, 31, 0x215778u);
    ctx->pc = 0x215774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215770u;
    // 0x215774: 0xae0016e0  sw          $zero, 0x16E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x215770u, 0x215778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215778u;
label_215778:
    // 0x215778: 0x14400139  bnez        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x215778u;
    {
        const bool branch_taken_0x215778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215778) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215780u;
label_215780:
    // 0x215780: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x215780u;
    SET_GPR_U32(ctx, 31, 0x215788u);
    ctx->pc = 0x215784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215780u;
    // 0x215784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x215780u, 0x215788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215788u;
label_215788:
    // 0x215788: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x215788u;
    {
        const bool branch_taken_0x215788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215788) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215790u;
label_215790:
    // 0x215790: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x215790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x215794: 0xc0a525c  jal         func_294970
    ctx->pc = 0x215794u;
    SET_GPR_U32(ctx, 31, 0x21579Cu);
    ctx->pc = 0x215798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215794u;
    // 0x215798: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294970u, 0x215794u, 0x21579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21579Cu;
label_21579c:
    // 0x21579c: 0x1040fef5  beqz        $v0, . + 4 + (-0x10B << 2)
    ctx->pc = 0x21579Cu;
    {
        const bool branch_taken_0x21579c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21579c) {
            ctx->pc = 0x215374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215374;
        }
    }
    ctx->pc = 0x2157A4u;
    // 0x2157a4: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2157a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2157a8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2157a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2157ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2157acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2157b0: 0x0  nop
    ctx->pc = 0x2157b0u;
    // NOP
    // 0x2157b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2157b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2157b8: 0x0  nop
    ctx->pc = 0x2157b8u;
    // NOP
    // 0x2157bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2157BCu;
    {
        const bool branch_taken_0x2157bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2157C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157BCu;
        // 0x2157c0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157bc) {
            ctx->pc = 0x2157D4u;
            goto label_2157d4;
        }
    }
    ctx->pc = 0x2157C4u;
    // 0x2157c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2157c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2157c8: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x2157c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x2157cc: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2157CCu;
    {
        const bool branch_taken_0x2157cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2157D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157CCu;
        // 0x2157d0: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157cc) {
            ctx->pc = 0x215C54u;
            goto label_215c54;
        }
    }
    ctx->pc = 0x2157D4u;
label_2157d4:
    // 0x2157d4: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2157d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2157d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2157d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2157dc: 0x0  nop
    ctx->pc = 0x2157dcu;
    // NOP
    // 0x2157e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2157e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2157e4: 0x0  nop
    ctx->pc = 0x2157e4u;
    // NOP
    // 0x2157e8: 0x4500fee2  bc1f        . + 4 + (-0x11E << 2)
    ctx->pc = 0x2157E8u;
    {
        const bool branch_taken_0x2157e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157E8u;
        // 0x2157ec: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157e8) {
            ctx->pc = 0x215374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215374;
        }
    }
    ctx->pc = 0x2157F0u;
    // 0x2157f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2157f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2157f4: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x2157f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x2157f8: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x2157F8u;
    {
        const bool branch_taken_0x2157f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2157FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157F8u;
        // 0x2157fc: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157f8) {
            ctx->pc = 0x215C54u;
            goto label_215c54;
        }
    }
    ctx->pc = 0x215800u;
label_215800:
    // 0x215800: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215800u;
    SET_GPR_U32(ctx, 31, 0x215808u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215800u, 0x215808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215808u;
label_215808:
    // 0x215808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21580c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21580Cu;
    {
        const bool branch_taken_0x21580c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21580Cu;
        // 0x215810: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21580c) {
            ctx->pc = 0x215864u;
            goto label_215864;
        }
    }
    ctx->pc = 0x215814u;
    // 0x215814: 0x8e0206f0  lw          $v0, 0x6F0($s0)
    ctx->pc = 0x215814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x215818: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x215818u;
    {
        const bool branch_taken_0x215818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215818) {
            ctx->pc = 0x215844u;
            goto label_215844;
        }
    }
    ctx->pc = 0x215820u;
    // 0x215820: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x215820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x215824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215828: 0x0  nop
    ctx->pc = 0x215828u;
    // NOP
    // 0x21582c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21582cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215830: 0x0  nop
    ctx->pc = 0x215830u;
    // NOP
    // 0x215834: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x215834u;
    {
        const bool branch_taken_0x215834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215834u;
        // 0x215838: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215834) {
            ctx->pc = 0x215864u;
            goto label_215864;
        }
    }
    ctx->pc = 0x21583Cu;
    // 0x21583c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x21583Cu;
    {
        const bool branch_taken_0x21583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21583Cu;
        // 0x215840: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21583c) {
            ctx->pc = 0x215928u;
            goto label_215928;
        }
    }
    ctx->pc = 0x215844u;
label_215844:
    // 0x215844: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x215844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x215848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21584c: 0x0  nop
    ctx->pc = 0x21584cu;
    // NOP
    // 0x215850: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215854: 0x0  nop
    ctx->pc = 0x215854u;
    // NOP
    // 0x215858: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x215858u;
    {
        const bool branch_taken_0x215858 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215858u;
        // 0x21585c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215858) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x215860u;
    // 0x215860: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215864:
    // 0x215864: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x215864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x215868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21586c: 0x0  nop
    ctx->pc = 0x21586cu;
    // NOP
    // 0x215870: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215874: 0x0  nop
    ctx->pc = 0x215874u;
    // NOP
    // 0x215878: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x215878u;
    {
        const bool branch_taken_0x215878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215878) {
            ctx->pc = 0x215984u;
            goto label_215984;
        }
    }
    ctx->pc = 0x215880u;
    // 0x215880: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215880u;
    SET_GPR_U32(ctx, 31, 0x215888u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215880u, 0x215888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215888u;
label_215888:
    // 0x215888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21588c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x21588Cu;
    {
        const bool branch_taken_0x21588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21588Cu;
        // 0x215890: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21588c) {
            ctx->pc = 0x21596Cu;
            goto label_21596c;
        }
    }
    ctx->pc = 0x215894u;
    // 0x215894: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x215894u;
    {
        const bool branch_taken_0x215894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215894) {
            ctx->pc = 0x215984u;
            goto label_215984;
        }
    }
    ctx->pc = 0x21589Cu;
label_21589c:
    // 0x21589c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x21589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2158a0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2158a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2158a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2158a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2158a8: 0x0  nop
    ctx->pc = 0x2158a8u;
    // NOP
    // 0x2158ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2158acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2158b0: 0x0  nop
    ctx->pc = 0x2158b0u;
    // NOP
    // 0x2158b4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2158B4u;
    {
        const bool branch_taken_0x2158b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2158b4) {
            ctx->pc = 0x2158D8u;
            goto label_2158d8;
        }
    }
    ctx->pc = 0x2158BCu;
    // 0x2158bc: 0x8e040700  lw          $a0, 0x700($s0)
    ctx->pc = 0x2158bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x2158c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2158C0u;
    {
        const bool branch_taken_0x2158c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158c0) {
            ctx->pc = 0x2158D8u;
            goto label_2158d8;
        }
    }
    ctx->pc = 0x2158C8u;
    // 0x2158c8: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x2158C8u;
    SET_GPR_U32(ctx, 31, 0x2158D0u);
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x2158C8u, 0x2158D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2158D0u;
label_2158d0:
    // 0x2158d0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2158D0u;
    {
        const bool branch_taken_0x2158d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158D0u;
        // 0x2158d4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158d0) {
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x2158D8u;
label_2158d8:
    // 0x2158d8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2158D8u;
    SET_GPR_U32(ctx, 31, 0x2158E0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2158D8u, 0x2158E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2158E0u;
label_2158e0:
    // 0x2158e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2158e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2158e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2158E4u;
    {
        const bool branch_taken_0x2158e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158E4u;
        // 0x2158e8: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158e4) {
            ctx->pc = 0x21593Cu;
            goto label_21593c;
        }
    }
    ctx->pc = 0x2158ECu;
    // 0x2158ec: 0x8e0206f0  lw          $v0, 0x6F0($s0)
    ctx->pc = 0x2158ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x2158f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2158F0u;
    {
        const bool branch_taken_0x2158f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158f0) {
            ctx->pc = 0x215908u;
            goto label_215908;
        }
    }
    ctx->pc = 0x2158F8u;
    // 0x2158f8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2158f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2158fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2158fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215900: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x215900u;
    {
        const bool branch_taken_0x215900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215900) {
            ctx->pc = 0x215910u;
            goto label_215910;
        }
    }
    ctx->pc = 0x215908u;
label_215908:
    // 0x215908: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x215908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x21590c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21590cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215910:
    // 0x215910: 0x0  nop
    ctx->pc = 0x215910u;
    // NOP
    // 0x215914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215918: 0x0  nop
    ctx->pc = 0x215918u;
    // NOP
    // 0x21591c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21591Cu;
    {
        const bool branch_taken_0x21591c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21591Cu;
        // 0x215920: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21591c) {
            ctx->pc = 0x215938u;
            goto label_215938;
        }
    }
    ctx->pc = 0x215924u;
label_215924:
    // 0x215924: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x215924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_215928:
    // 0x215928: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x215928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x21592c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x21592cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x215930: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x215930u;
    {
        const bool branch_taken_0x215930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215930u;
        // 0x215934: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215930) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215938u;
label_215938:
    // 0x215938: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21593c:
    // 0x21593c: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x21593cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x215940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215944: 0x0  nop
    ctx->pc = 0x215944u;
    // NOP
    // 0x215948: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21594c: 0x0  nop
    ctx->pc = 0x21594cu;
    // NOP
    // 0x215950: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x215950u;
    {
        const bool branch_taken_0x215950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215950) {
            ctx->pc = 0x215984u;
            goto label_215984;
        }
    }
    ctx->pc = 0x215958u;
    // 0x215958: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215958u;
    SET_GPR_U32(ctx, 31, 0x215960u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215958u, 0x215960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215960u;
label_215960:
    // 0x215960: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215964: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215964u;
    {
        const bool branch_taken_0x215964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215964u;
        // 0x215968: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215964) {
            ctx->pc = 0x215984u;
            goto label_215984;
        }
    }
    ctx->pc = 0x21596Cu;
label_21596c:
    // 0x21596c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215970: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x215970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x215974: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x215974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x215978: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x215978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x21597c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x21597Cu;
    {
        const bool branch_taken_0x21597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21597Cu;
        // 0x215980: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21597c) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215984u;
label_215984:
    // 0x215984: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x215984u;
    SET_GPR_U32(ctx, 31, 0x21598Cu);
    ctx->pc = 0x215988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215984u;
    // 0x215988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x215984u, 0x21598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21598Cu;
label_21598c:
    // 0x21598c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x21598Cu;
    {
        const bool branch_taken_0x21598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21598c) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215994u;
label_215994:
    // 0x215994: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215994u;
    SET_GPR_U32(ctx, 31, 0x21599Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215994u, 0x21599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21599Cu;
label_21599c:
    // 0x21599c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2159a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2159a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2159a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2159a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2159a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2159A8u;
    {
        const bool branch_taken_0x2159a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2159a8) {
            ctx->pc = 0x2159ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2159A8u;
            // 0x2159ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2159B0u;
            goto label_2159b0;
        }
    }
    ctx->pc = 0x2159B0u;
label_2159b0:
    // 0x2159b0: 0x2810  mfhi        $a1
    ctx->pc = 0x2159b0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2159b4: 0x10a400a5  beq         $a1, $a0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2159B4u;
    {
        const bool branch_taken_0x2159b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2159B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159B4u;
        // 0x2159b8: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159b4) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x2159BCu;
    // 0x2159bc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2159BCu;
    {
        const bool branch_taken_0x2159bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159BCu;
        // 0x2159c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159bc) {
            ctx->pc = 0x2159CCu;
            goto label_2159cc;
        }
    }
    ctx->pc = 0x2159C4u;
    // 0x2159c4: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2159C4u;
    {
        const bool branch_taken_0x2159c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2159c4) {
            ctx->pc = 0x2159C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2159C4u;
            // 0x2159c8: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2159D4u;
            goto label_2159d4;
        }
    }
    ctx->pc = 0x2159CCu;
label_2159cc:
    // 0x2159cc: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2159CCu;
    {
        const bool branch_taken_0x2159cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159CCu;
        // 0x2159d0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159cc) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x2159D4u;
label_2159d4:
    // 0x2159d4: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x2159d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x2159d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2159d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2159dc: 0x0  nop
    ctx->pc = 0x2159dcu;
    // NOP
    // 0x2159e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2159e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2159e4: 0x0  nop
    ctx->pc = 0x2159e4u;
    // NOP
    // 0x2159e8: 0x45010098  bc1t        . + 4 + (0x98 << 2)
    ctx->pc = 0x2159E8u;
    {
        const bool branch_taken_0x2159e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2159ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159E8u;
        // 0x2159ec: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159e8) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x2159F0u;
    // 0x2159f0: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2159F0u;
    {
        const bool branch_taken_0x2159f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159F0u;
        // 0x2159f4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159f0) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x2159F8u;
label_2159f8:
    // 0x2159f8: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2159f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2159fc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2159fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x215a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215a04: 0x0  nop
    ctx->pc = 0x215a04u;
    // NOP
    // 0x215a08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215a0c: 0x0  nop
    ctx->pc = 0x215a0cu;
    // NOP
    // 0x215a10: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x215A10u;
    {
        const bool branch_taken_0x215a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A10u;
        // 0x215a14: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a10) {
            ctx->pc = 0x215A44u;
            goto label_215a44;
        }
    }
    ctx->pc = 0x215A18u;
    // 0x215a18: 0x24040406  addiu       $a0, $zero, 0x406
    ctx->pc = 0x215a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    // 0x215a1c: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x215a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
    // 0x215a20: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x215A20u;
    {
        const bool branch_taken_0x215a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x215a20) {
            ctx->pc = 0x215A44u;
            goto label_215a44;
        }
    }
    ctx->pc = 0x215A28u;
    // 0x215a28: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215A28u;
    SET_GPR_U32(ctx, 31, 0x215A30u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215A28u, 0x215A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A30u;
label_215a30:
    // 0x215a30: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x215a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x215a34: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x215A34u;
    {
        const bool branch_taken_0x215a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215a34) {
            ctx->pc = 0x215A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215A34u;
            // 0x215a38: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A44u;
            goto label_215a44;
        }
    }
    ctx->pc = 0x215A3Cu;
    // 0x215a3c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x215A3Cu;
    {
        const bool branch_taken_0x215a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A3Cu;
        // 0x215a40: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a3c) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215A44u;
label_215a44:
    // 0x215a44: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x215a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x215a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215a4c: 0x0  nop
    ctx->pc = 0x215a4cu;
    // NOP
    // 0x215a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215a54: 0x0  nop
    ctx->pc = 0x215a54u;
    // NOP
    // 0x215a58: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
    ctx->pc = 0x215A58u;
    {
        const bool branch_taken_0x215a58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x215A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A58u;
        // 0x215a5c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a58) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215A60u;
    // 0x215a60: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x215a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x215a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215a68: 0x0  nop
    ctx->pc = 0x215a68u;
    // NOP
    // 0x215a6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215a70: 0x0  nop
    ctx->pc = 0x215a70u;
    // NOP
    // 0x215a74: 0x4500007a  bc1f        . + 4 + (0x7A << 2)
    ctx->pc = 0x215A74u;
    {
        const bool branch_taken_0x215a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A74u;
        // 0x215a78: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a74) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215A7Cu;
    // 0x215a7c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x215a80: 0x14620072  bne         $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x215A80u;
    {
        const bool branch_taken_0x215a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A80u;
        // 0x215a84: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a80) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215A88u;
    // 0x215a88: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215A88u;
    SET_GPR_U32(ctx, 31, 0x215A90u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215A88u, 0x215A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A90u;
label_215a90:
    // 0x215a90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215a94: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x215A94u;
    {
        const bool branch_taken_0x215a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A94u;
        // 0x215a98: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a94) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215A9Cu;
    // 0x215a9c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x215A9Cu;
    {
        const bool branch_taken_0x215a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A9Cu;
        // 0x215aa0: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a9c) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215AA4u;
label_215aa4:
    // 0x215aa4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x215aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x215aa8: 0x24040303  addiu       $a0, $zero, 0x303
    ctx->pc = 0x215aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x215aac: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x215aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x215ab0: 0x1464006b  bne         $v1, $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x215AB0u;
    {
        const bool branch_taken_0x215ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x215ab0) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215AB8u;
    // 0x215ab8: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215abc: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x215abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x215ac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215ac4: 0x0  nop
    ctx->pc = 0x215ac4u;
    // NOP
    // 0x215ac8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215acc: 0x0  nop
    ctx->pc = 0x215accu;
    // NOP
    // 0x215ad0: 0x45000063  bc1f        . + 4 + (0x63 << 2)
    ctx->pc = 0x215AD0u;
    {
        const bool branch_taken_0x215ad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215ad0) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215AD8u;
    // 0x215ad8: 0x96020548  lhu         $v0, 0x548($s0)
    ctx->pc = 0x215ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x215adc: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x215adcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x215ae0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x215ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x215ae4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x215ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x215ae8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x215ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x215aec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x215aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x215af0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x215af0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x215af4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x215af4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x215af8: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x215AF8u;
    {
        const bool branch_taken_0x215af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215af8) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215B00u;
    // 0x215b00: 0xc6011728  lwc1        $f1, 0x1728($s0)
    ctx->pc = 0x215b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215b04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x215b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215b08: 0x0  nop
    ctx->pc = 0x215b08u;
    // NOP
    // 0x215b0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x215b0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215b10: 0x0  nop
    ctx->pc = 0x215b10u;
    // NOP
    // 0x215b14: 0x45000052  bc1f        . + 4 + (0x52 << 2)
    ctx->pc = 0x215B14u;
    {
        const bool branch_taken_0x215b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B14u;
        // 0x215b18: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b14) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215B1Cu;
    // 0x215b1c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x215B1Cu;
    {
        const bool branch_taken_0x215b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B1Cu;
        // 0x215b20: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b1c) {
            ctx->pc = 0x215C50u;
            goto label_215c50;
        }
    }
    ctx->pc = 0x215B24u;
label_215b24:
    // 0x215b24: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215b28: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x215b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x215b2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215b30: 0x0  nop
    ctx->pc = 0x215b30u;
    // NOP
    // 0x215b34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215b38: 0x0  nop
    ctx->pc = 0x215b38u;
    // NOP
    // 0x215b3c: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x215B3Cu;
    {
        const bool branch_taken_0x215b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B3Cu;
        // 0x215b40: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b3c) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215B44u;
    // 0x215b44: 0x245164f0  addiu       $s1, $v0, 0x64F0
    ctx->pc = 0x215b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x215b48: 0xc0a529e  jal         func_294A78
    ctx->pc = 0x215B48u;
    SET_GPR_U32(ctx, 31, 0x215B50u);
    ctx->pc = 0x215B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B48u;
    // 0x215b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A78u, 0x215B48u, 0x215B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B50u;
label_215b50:
    // 0x215b50: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x215B50u;
    {
        const bool branch_taken_0x215b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B50u;
        // 0x215b54: 0x2402ff96  addiu       $v0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b50) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215B58u;
    // 0x215b58: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x215b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x215b5c: 0xa2220541  sb          $v0, 0x541($s1)
    ctx->pc = 0x215b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1345), (uint8_t)GPR_U32(ctx, 2));
    // 0x215b60: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x215b60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x215b64: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x215B64u;
    {
        const bool branch_taken_0x215b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B64u;
        // 0x215b68: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b64) {
            ctx->pc = 0x215C54u;
            goto label_215c54;
        }
    }
    ctx->pc = 0x215B6Cu;
label_215b6c:
    // 0x215b6c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215b70: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x215b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x215b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215b78: 0x0  nop
    ctx->pc = 0x215b78u;
    // NOP
    // 0x215b7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215b80: 0x0  nop
    ctx->pc = 0x215b80u;
    // NOP
    // 0x215b84: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x215B84u;
    {
        const bool branch_taken_0x215b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215b84) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215B8Cu;
    // 0x215b8c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215B8Cu;
    SET_GPR_U32(ctx, 31, 0x215B94u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215B8Cu, 0x215B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B94u;
label_215b94:
    // 0x215b94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215b98: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x215B98u;
    {
        const bool branch_taken_0x215b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B98u;
        // 0x215b9c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b98) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215BA0u;
    // 0x215ba0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x215BA0u;
    {
        const bool branch_taken_0x215ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BA0u;
        // 0x215ba4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ba0) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215BA8u;
label_215ba8:
    // 0x215ba8: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215bac: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x215bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x215bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215bb4: 0x0  nop
    ctx->pc = 0x215bb4u;
    // NOP
    // 0x215bb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215bbc: 0x0  nop
    ctx->pc = 0x215bbcu;
    // NOP
    // 0x215bc0: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x215BC0u;
    {
        const bool branch_taken_0x215bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215bc0) {
            ctx->pc = 0x215C60u;
            goto label_215c60;
        }
    }
    ctx->pc = 0x215BC8u;
    // 0x215bc8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215BC8u;
    SET_GPR_U32(ctx, 31, 0x215BD0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215BC8u, 0x215BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BD0u;
label_215bd0:
    // 0x215bd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x215bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x215bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215bd8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x215bd8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x215bdc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215BDCu;
    {
        const bool branch_taken_0x215bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215bdc) {
            ctx->pc = 0x215BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215BDCu;
            // 0x215be0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x215BE4u;
            goto label_215be4;
        }
    }
    ctx->pc = 0x215BE4u;
label_215be4:
    // 0x215be4: 0x2010  mfhi        $a0
    ctx->pc = 0x215be4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x215be8: 0x10850018  beq         $a0, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x215BE8u;
    {
        const bool branch_taken_0x215be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x215BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BE8u;
        // 0x215bec: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215be8) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215BF0u;
    // 0x215bf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215BF0u;
    {
        const bool branch_taken_0x215bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BF0u;
        // 0x215bf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bf0) {
            ctx->pc = 0x215C00u;
            goto label_215c00;
        }
    }
    ctx->pc = 0x215BF8u;
    // 0x215bf8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215BF8u;
    {
        const bool branch_taken_0x215bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x215BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BF8u;
        // 0x215bfc: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bf8) {
            ctx->pc = 0x215C08u;
            goto label_215c08;
        }
    }
    ctx->pc = 0x215C00u;
label_215c00:
    // 0x215c00: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x215C00u;
    {
        const bool branch_taken_0x215c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C00u;
        // 0x215c04: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c00) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215C08u;
label_215c08:
    // 0x215c08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x215C08u;
    {
        const bool branch_taken_0x215c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C08u;
        // 0x215c0c: 0xa20502f7  sb          $a1, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c08) {
            ctx->pc = 0x215C50u;
            goto label_215c50;
        }
    }
    ctx->pc = 0x215C10u;
label_215c10:
    // 0x215c10: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215C10u;
    SET_GPR_U32(ctx, 31, 0x215C18u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215C10u, 0x215C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C18u;
label_215c18:
    // 0x215c18: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x215c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x215c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215c20: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x215C20u;
    {
        const bool branch_taken_0x215c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C20u;
        // 0x215c24: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c20) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215C28u;
    // 0x215c28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x215C28u;
    {
        const bool branch_taken_0x215c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C28u;
        // 0x215c2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c28) {
            ctx->pc = 0x215C40u;
            goto label_215c40;
        }
    }
    ctx->pc = 0x215C30u;
    // 0x215c30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215C30u;
    {
        const bool branch_taken_0x215c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C30u;
        // 0x215c34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c30) {
            ctx->pc = 0x215C48u;
            goto label_215c48;
        }
    }
    ctx->pc = 0x215C38u;
    // 0x215c38: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215C38u;
    {
        const bool branch_taken_0x215c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C38u;
        // 0x215c3c: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c38) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215C40u;
label_215c40:
    // 0x215c40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x215C40u;
    {
        const bool branch_taken_0x215c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C40u;
        // 0x215c44: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c40) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215C48u;
label_215c48:
    // 0x215c48: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x215c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_215c4c:
    // 0x215c4c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x215c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_215c50:
    // 0x215c50: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x215c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_215c54:
    // 0x215c54: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x215c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x215c58: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x215C58u;
    {
        const bool branch_taken_0x215c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C58u;
        // 0x215c5c: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c58) {
            ctx->pc = 0x215D1Cu;
            goto label_215d1c;
        }
    }
    ctx->pc = 0x215C60u;
label_215c60:
    // 0x215c60: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x215C60u;
    SET_GPR_U32(ctx, 31, 0x215C68u);
    ctx->pc = 0x215C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C60u;
    // 0x215c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x215C60u, 0x215C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C68u;
label_215c68:
    // 0x215c68: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x215C68u;
    {
        const bool branch_taken_0x215c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C68u;
        // 0x215c6c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c68) {
            ctx->pc = 0x215D20u;
            goto label_215d20;
        }
    }
    ctx->pc = 0x215C70u;
label_215c70:
    // 0x215c70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215c74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215c78: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x215C78u;
    SET_GPR_U32(ctx, 31, 0x215C80u);
    ctx->pc = 0x215C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C78u;
    // 0x215c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x215C78u, 0x215C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C80u;
label_215c80:
    // 0x215c80: 0xc60c0604  lwc1        $f12, 0x604($s0)
    ctx->pc = 0x215c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x215c84: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x215C84u;
    SET_GPR_U32(ctx, 31, 0x215C8Cu);
    ctx->pc = 0x215C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C84u;
    // 0x215c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x215C84u, 0x215C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C8Cu;
label_215c8c:
    // 0x215c8c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x215c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_215c90:
    // 0x215c90: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x215c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x215c94: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x215C94u;
    {
        const bool branch_taken_0x215c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C94u;
        // 0x215c98: 0x28620257  slti        $v0, $v1, 0x257 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)599) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c94) {
            ctx->pc = 0x215D14u;
            goto label_215d14;
        }
    }
    ctx->pc = 0x215C9Cu;
    // 0x215c9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215C9Cu;
    {
        const bool branch_taken_0x215c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C9Cu;
        // 0x215ca0: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c9c) {
            ctx->pc = 0x215CB4u;
            goto label_215cb4;
        }
    }
    ctx->pc = 0x215CA4u;
    // 0x215ca4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x215CA4u;
    {
        const bool branch_taken_0x215ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215ca4) {
            ctx->pc = 0x215CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215CA4u;
            // 0x215ca8: 0xc6011714  lwc1        $f1, 0x1714($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215CC8u;
            goto label_215cc8;
        }
    }
    ctx->pc = 0x215CACu;
    // 0x215cac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x215CACu;
    {
        const bool branch_taken_0x215cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CACu;
        // 0x215cb0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cac) {
            ctx->pc = 0x215D20u;
            goto label_215d20;
        }
    }
    ctx->pc = 0x215CB4u;
label_215cb4:
    // 0x215cb4: 0x2402027e  addiu       $v0, $zero, 0x27E
    ctx->pc = 0x215cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
    // 0x215cb8: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x215CB8u;
    {
        const bool branch_taken_0x215cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215cb8) {
            ctx->pc = 0x215D14u;
            goto label_215d14;
        }
    }
    ctx->pc = 0x215CC0u;
    // 0x215cc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x215CC0u;
    {
        const bool branch_taken_0x215cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CC0u;
        // 0x215cc4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cc0) {
            ctx->pc = 0x215D20u;
            goto label_215d20;
        }
    }
    ctx->pc = 0x215CC8u;
label_215cc8:
    // 0x215cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x215cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215ccc: 0x0  nop
    ctx->pc = 0x215cccu;
    // NOP
    // 0x215cd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x215cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215cd4: 0x0  nop
    ctx->pc = 0x215cd4u;
    // NOP
    // 0x215cd8: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x215CD8u;
    {
        const bool branch_taken_0x215cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215cd8) {
            ctx->pc = 0x215CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215CD8u;
            // 0x215cdc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D20u;
            goto label_215d20;
        }
    }
    ctx->pc = 0x215CE0u;
    // 0x215ce0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x215ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x215ce4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215ce8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x215CE8u;
    {
        const bool branch_taken_0x215ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ce8) {
            ctx->pc = 0x215CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215CE8u;
            // 0x215cec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D20u;
            goto label_215d20;
        }
    }
    ctx->pc = 0x215CF0u;
    // 0x215cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cf4: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x215CF4u;
    SET_GPR_U32(ctx, 31, 0x215CFCu);
    ctx->pc = 0x215CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CF4u;
    // 0x215cf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A638u, 0x215CF4u, 0x215CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215CFCu;
label_215cfc:
    // 0x215cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d04: 0xc09aa4e  jal         func_26A938
    ctx->pc = 0x215D04u;
    SET_GPR_U32(ctx, 31, 0x215D0Cu);
    ctx->pc = 0x215D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D04u;
    // 0x215d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x215D04u, 0x215D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D0Cu;
label_215d0c:
    // 0x215d0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215D0Cu;
    {
        const bool branch_taken_0x215d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D0Cu;
        // 0x215d10: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d0c) {
            ctx->pc = 0x215D20u;
            goto label_215d20;
        }
    }
    ctx->pc = 0x215D14u;
label_215d14:
    // 0x215d14: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x215D14u;
    SET_GPR_U32(ctx, 31, 0x215D1Cu);
    ctx->pc = 0x215D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D14u;
    // 0x215d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x215D14u, 0x215D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D1Cu;
label_215d1c:
    // 0x215d1c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x215d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_215d20:
    // 0x215d20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x215d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215d24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x215d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215d28: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x215d28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215d30: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x215d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215d34: 0x3e00008  jr          $ra
    ctx->pc = 0x215D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D34u;
        // 0x215d38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215D3Cu;
    // 0x215d3c: 0x0  nop
    ctx->pc = 0x215d3cu;
    // NOP
    ctx->pc = 0x215d40u;
}
