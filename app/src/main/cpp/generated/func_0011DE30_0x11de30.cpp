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

// Function: func_0011DE30
// Address: 0x11de30 - 0x11e1e0
void func_0011DE30_0x11de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011DE30_0x11de30");
#endif

    switch (ctx->pc) {
        case 0x11de84u: goto label_11de84;
        case 0x11de90u: goto label_11de90;
        case 0x11ded4u: goto label_11ded4;
        case 0x11dedcu: goto label_11dedc;
        case 0x11df28u: goto label_11df28;
        case 0x11df3cu: goto label_11df3c;
        case 0x11df5cu: goto label_11df5c;
        case 0x11dfa0u: goto label_11dfa0;
        case 0x11dfa8u: goto label_11dfa8;
        case 0x11dfc8u: goto label_11dfc8;
        case 0x11e008u: goto label_11e008;
        case 0x11e014u: goto label_11e014;
        case 0x11e06cu: goto label_11e06c;
        case 0x11e08cu: goto label_11e08c;
        case 0x11e0bcu: goto label_11e0bc;
        case 0x11e0e4u: goto label_11e0e4;
        case 0x11e100u: goto label_11e100;
        case 0x11e10cu: goto label_11e10c;
        case 0x11e124u: goto label_11e124;
        case 0x11e140u: goto label_11e140;
        case 0x11e150u: goto label_11e150;
        case 0x11e164u: goto label_11e164;
        case 0x11e16cu: goto label_11e16c;
        case 0x11e194u: goto label_11e194;
        case 0x11e1b8u: goto label_11e1b8;
        case 0x11e1c4u: goto label_11e1c4;
        default: break;
    }

    ctx->pc = 0x11de30u;

    // 0x11de30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11de30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11de34: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11de34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11de38: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11de3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11de3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11de40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11de44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11de44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11de4c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11de50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11de50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11de54: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11de58: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11de58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11de5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11de5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de60: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11de60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11de64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11de64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11de68: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11de68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11de6c: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x11de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x11de70: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x11de70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x11de74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11de74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11de78: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x11de78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x11de7c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11DE7Cu;
    SET_GPR_U32(ctx, 31, 0x11DE84u);
    ctx->pc = 0x11DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE7Cu;
    // 0x11de80: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11DE7Cu, 0x11DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE84u;
label_11de84:
    // 0x11de84: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11de84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11de88: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11DE88u;
    SET_GPR_U32(ctx, 31, 0x11DE90u);
    ctx->pc = 0x11DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE88u;
    // 0x11de8c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11DE88u, 0x11DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE90u;
label_11de90:
    // 0x11de90: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11de90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11de94: 0x10720034  beq         $v1, $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x11DE94u;
    {
        const bool branch_taken_0x11de94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x11DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE94u;
        // 0x11de98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de94) {
            ctx->pc = 0x11DF68u;
            goto label_11df68;
        }
    }
    ctx->pc = 0x11DE9Cu;
    // 0x11de9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DE9Cu;
    {
        const bool branch_taken_0x11de9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de9c) {
            ctx->pc = 0x11DEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE9Cu;
            // 0x11dea0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DEB4u;
            goto label_11deb4;
        }
    }
    ctx->pc = 0x11DEA4u;
    // 0x11dea4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DEA4u;
    {
        const bool branch_taken_0x11dea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dea4) {
            ctx->pc = 0x11DECCu;
            goto label_11decc;
        }
    }
    ctx->pc = 0x11DEACu;
    // 0x11deac: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x11DEACu;
    {
        const bool branch_taken_0x11deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEACu;
        // 0x11deb0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deac) {
            ctx->pc = 0x11E1C8u;
            goto label_11e1c8;
        }
    }
    ctx->pc = 0x11DEB4u;
label_11deb4:
    // 0x11deb4: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x11DEB4u;
    {
        const bool branch_taken_0x11deb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEB4u;
        // 0x11deb8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deb4) {
            ctx->pc = 0x11E12Cu;
            goto label_11e12c;
        }
    }
    ctx->pc = 0x11DEBCu;
    // 0x11debc: 0x106200a7  beq         $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x11DEBCu;
    {
        const bool branch_taken_0x11debc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11debc) {
            ctx->pc = 0x11E15Cu;
            goto label_11e15c;
        }
    }
    ctx->pc = 0x11DEC4u;
    // 0x11dec4: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x11DEC4u;
    {
        const bool branch_taken_0x11dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEC4u;
        // 0x11dec8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dec4) {
            ctx->pc = 0x11E1C8u;
            goto label_11e1c8;
        }
    }
    ctx->pc = 0x11DECCu;
label_11decc:
    // 0x11decc: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11DECCu;
    SET_GPR_U32(ctx, 31, 0x11DED4u);
    ctx->pc = 0x11DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DECCu;
    // 0x11ded0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11DECCu, 0x11DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DED4u;
label_11ded4:
    // 0x11ded4: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11DED4u;
    SET_GPR_U32(ctx, 31, 0x11DEDCu);
    ctx->pc = 0x11DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DED4u;
    // 0x11ded8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11DED4u, 0x11DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DEDCu;
label_11dedc:
    // 0x11dedc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11dee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11dee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dee4: 0x3c013e16  lui         $at, 0x3E16
    ctx->pc = 0x11dee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15894 << 16));
    // 0x11dee8: 0x3421d5d0  ori         $at, $at, 0xD5D0
    ctx->pc = 0x11dee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54736);
    // 0x11deec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11deecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11def0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11def0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11def4: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11def8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11def8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11defc: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x11defcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x11df00: 0x3421f7cf  ori         $at, $at, 0xF7CF
    ctx->pc = 0x11df00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63439);
    // 0x11df04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11df04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11df08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11df08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11df0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11df10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11df10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11df14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11df14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11df18: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11df18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11df1c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11df1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11df20: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11DF20u;
    SET_GPR_U32(ctx, 31, 0x11DF28u);
    ctx->pc = 0x11DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF20u;
    // 0x11df24: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11DF20u, 0x11DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF28u;
label_11df28:
    // 0x11df28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11df28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11df2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11df2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df30: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x11df30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x11df34: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11DF34u;
    SET_GPR_U32(ctx, 31, 0x11DF3Cu);
    ctx->pc = 0x11DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF34u;
    // 0x11df38: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11DF34u, 0x11DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF3Cu;
label_11df3c:
    // 0x11df3c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x11df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11df40: 0xae1215b0  sw          $s2, 0x15B0($s0)
    ctx->pc = 0x11df40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 18));
    // 0x11df44: 0xae0015b4  sw          $zero, 0x15B4($s0)
    ctx->pc = 0x11df44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 0));
    // 0x11df48: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11df48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11df4c: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x11df4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11df50: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11df50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11df54: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11DF54u;
    SET_GPR_U32(ctx, 31, 0x11DF5Cu);
    ctx->pc = 0x11DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF54u;
    // 0x11df58: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11DF54u, 0x11DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF5Cu;
label_11df5c:
    // 0x11df5c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11df5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11df60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11df64: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11df64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11df68:
    // 0x11df68: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x11df68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x11df6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11DF6Cu;
    {
        const bool branch_taken_0x11df6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF6Cu;
        // 0x11df70: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df6c) {
            ctx->pc = 0x11DF98u;
            goto label_11df98;
        }
    }
    ctx->pc = 0x11DF74u;
    // 0x11df74: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DF74u;
    {
        const bool branch_taken_0x11df74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF74u;
        // 0x11df78: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df74) {
            ctx->pc = 0x11DF98u;
            goto label_11df98;
        }
    }
    ctx->pc = 0x11DF7Cu;
    // 0x11df7c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x11df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x11df80: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x11df80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11df84: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x11df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x11df88: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11df88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11df8c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11df8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11df90: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11df90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11df94: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11df94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11df98:
    // 0x11df98: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11DF98u;
    SET_GPR_U32(ctx, 31, 0x11DFA0u);
    ctx->pc = 0x11DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF98u;
    // 0x11df9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11DF98u, 0x11DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFA0u;
label_11dfa0:
    // 0x11dfa0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11DFA0u;
    SET_GPR_U32(ctx, 31, 0x11DFA8u);
    ctx->pc = 0x11DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFA0u;
    // 0x11dfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11DFA0u, 0x11DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFA8u;
label_11dfa8:
    // 0x11dfa8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11DFA8u;
    {
        const bool branch_taken_0x11dfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dfa8) {
            ctx->pc = 0x11DFF4u;
            goto label_11dff4;
        }
    }
    ctx->pc = 0x11DFB0u;
    // 0x11dfb0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x11dfb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x11dfb4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DFB4u;
    {
        const bool branch_taken_0x11dfb4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFB4u;
        // 0x11dfb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfb4) {
            ctx->pc = 0x11DFE4u;
            goto label_11dfe4;
        }
    }
    ctx->pc = 0x11DFBCu;
    // 0x11dfbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfc0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11DFC0u;
    SET_GPR_U32(ctx, 31, 0x11DFC8u);
    ctx->pc = 0x11DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFC0u;
    // 0x11dfc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11DFC0u, 0x11DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFC8u;
label_11dfc8:
    // 0x11dfc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dfcc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11dfd0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x11dfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11dfd4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x11dfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11dfd8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11dfd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11dfdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11DFDCu;
    {
        const bool branch_taken_0x11dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFDCu;
        // 0x11dfe0: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfdc) {
            ctx->pc = 0x11DFF4u;
            goto label_11dff4;
        }
    }
    ctx->pc = 0x11DFE4u;
label_11dfe4:
    // 0x11dfe4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11dfe8: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11dfec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11dff0: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11dff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11dff4:
    // 0x11dff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11dff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11dff8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11dff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11dffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e000: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11E000u;
    SET_GPR_U32(ctx, 31, 0x11E008u);
    ctx->pc = 0x11E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E000u;
    // 0x11e004: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11E000u, 0x11E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E008u;
label_11e008:
    // 0x11e008: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11e008u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11e00c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11E00Cu;
    SET_GPR_U32(ctx, 31, 0x11E014u);
    ctx->pc = 0x11E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E00Cu;
    // 0x11e010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11E00Cu, 0x11E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E014u;
label_11e014:
    // 0x11e014: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x11e014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x11e018: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E018u;
    {
        const bool branch_taken_0x11e018 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E018u;
        // 0x11e01c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e018) {
            ctx->pc = 0x11E024u;
            goto label_11e024;
        }
    }
    ctx->pc = 0x11E020u;
    // 0x11e020: 0xae0215b4  sw          $v0, 0x15B4($s0)
    ctx->pc = 0x11e020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
label_11e024:
    // 0x11e024: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11e024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x11e028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11e028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11e02c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x11E02Cu;
    {
        const bool branch_taken_0x11e02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e02c) {
            ctx->pc = 0x11E030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E02Cu;
            // 0x11e030: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E034u;
    // 0x11e034: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x11e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x11e038: 0x5c400015  bgtzl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E038u;
    {
        const bool branch_taken_0x11e038 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x11e038) {
            ctx->pc = 0x11E03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E038u;
            // 0x11e03c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E040u;
    // 0x11e040: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x11e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11e044: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x11E044u;
    {
        const bool branch_taken_0x11e044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E044u;
        // 0x11e048: 0xae0215b4  sw          $v0, 0x15B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e044) {
            ctx->pc = 0x11E080u;
            goto label_11e080;
        }
    }
    ctx->pc = 0x11E04Cu;
    // 0x11e04c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x11e04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x11e050: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e054: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x11e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e058: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e05c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e05cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11e060: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11e060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e064: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11E064u;
    SET_GPR_U32(ctx, 31, 0x11E06Cu);
    ctx->pc = 0x11E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E064u;
    // 0x11e068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11E064u, 0x11E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E06Cu;
label_11e06c:
    // 0x11e06c: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x11e06cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x11e070: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x11e070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11e074: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E074u;
    {
        const bool branch_taken_0x11e074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E074u;
        // 0x11e078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e074) {
            ctx->pc = 0x11E080u;
            goto label_11e080;
        }
    }
    ctx->pc = 0x11E07Cu;
    // 0x11e07c: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x11e07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_11e080:
    // 0x11e080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e084: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11E084u;
    SET_GPR_U32(ctx, 31, 0x11E08Cu);
    ctx->pc = 0x11E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E084u;
    // 0x11e088: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11E084u, 0x11E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E08Cu;
label_11e08c:
    // 0x11e08c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11e08cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_11e090:
    // 0x11e090: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11e090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11e094: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x11E094u;
    {
        const bool branch_taken_0x11e094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e094) {
            ctx->pc = 0x11E098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E094u;
            // 0x11e098: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E1C8u;
            goto label_11e1c8;
        }
    }
    ctx->pc = 0x11E09Cu;
    // 0x11e09c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x11e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x11e0a0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x11E0A0u;
    {
        const bool branch_taken_0x11e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0A0u;
        // 0x11e0a4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0a0) {
            ctx->pc = 0x11E1C4u;
            goto label_11e1c4;
        }
    }
    ctx->pc = 0x11E0A8u;
    // 0x11e0a8: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x11e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
    // 0x11e0ac: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x11e0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x11e0b0: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11e0b4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11E0B4u;
    SET_GPR_U32(ctx, 31, 0x11E0BCu);
    ctx->pc = 0x11E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E0B4u;
    // 0x11e0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11E0B4u, 0x11E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0BCu;
label_11e0bc:
    // 0x11e0bc: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11E0BCu;
    {
        const bool branch_taken_0x11e0bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e0bc) {
            ctx->pc = 0x11E0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E0BCu;
            // 0x11e0c0: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0E8u;
            goto label_11e0e8;
        }
    }
    ctx->pc = 0x11E0C4u;
    // 0x11e0c4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x11e0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x11e0c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e0cc: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x11e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e0d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e0d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e0d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11e0d8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11e0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e0dc: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11E0DCu;
    SET_GPR_U32(ctx, 31, 0x11E0E4u);
    ctx->pc = 0x11E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E0DCu;
    // 0x11e0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11E0DCu, 0x11E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0E4u;
label_11e0e4:
    // 0x11e0e4: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x11e0e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_11e0e8:
    // 0x11e0e8: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11E0E8u;
    {
        const bool branch_taken_0x11e0e8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0E8u;
        // 0x11e0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0e8) {
            ctx->pc = 0x11E11Cu;
            goto label_11e11c;
        }
    }
    ctx->pc = 0x11E0F0u;
    // 0x11e0f0: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x11e0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e0f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11e0f8: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11E0F8u;
    SET_GPR_U32(ctx, 31, 0x11E100u);
    ctx->pc = 0x11E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E0F8u;
    // 0x11e0fc: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11E0F8u, 0x11E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E100u;
label_11e100:
    // 0x11e100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e104: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11E104u;
    SET_GPR_U32(ctx, 31, 0x11E10Cu);
    ctx->pc = 0x11E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E104u;
    // 0x11e108: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11E104u, 0x11E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E10Cu;
label_11e10c:
    // 0x11e10c: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x11e10cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x11e110: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11e110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11e114: 0xa6020434  sh          $v0, 0x434($s0)
    ctx->pc = 0x11e114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    // 0x11e118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e11c:
    // 0x11e11c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11E11Cu;
    SET_GPR_U32(ctx, 31, 0x11E124u);
    ctx->pc = 0x11E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E11Cu;
    // 0x11e120: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11E11Cu, 0x11E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E124u;
label_11e124:
    // 0x11e124: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x11E124u;
    {
        const bool branch_taken_0x11e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E124u;
        // 0x11e128: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e124) {
            ctx->pc = 0x11E1C8u;
            goto label_11e1c8;
        }
    }
    ctx->pc = 0x11E12Cu;
label_11e12c:
    // 0x11e12c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11e12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e134: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x11e134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x11e138: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11E138u;
    SET_GPR_U32(ctx, 31, 0x11E140u);
    ctx->pc = 0x11E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E138u;
    // 0x11e13c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11E138u, 0x11E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E140u;
label_11e140:
    // 0x11e140: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11e140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11e144: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x11e148: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11E148u;
    SET_GPR_U32(ctx, 31, 0x11E150u);
    ctx->pc = 0x11E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E148u;
    // 0x11e14c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11E148u, 0x11E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E150u;
label_11e150:
    // 0x11e150: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11e150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11e154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11e158: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11e158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11e15c:
    // 0x11e15c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11E15Cu;
    SET_GPR_U32(ctx, 31, 0x11E164u);
    ctx->pc = 0x11E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E15Cu;
    // 0x11e160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11E15Cu, 0x11E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E164u;
label_11e164:
    // 0x11e164: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11E164u;
    SET_GPR_U32(ctx, 31, 0x11E16Cu);
    ctx->pc = 0x11E168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E164u;
    // 0x11e168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11E164u, 0x11E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E16Cu;
label_11e16c:
    // 0x11e16c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11E16Cu;
    {
        const bool branch_taken_0x11e16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e16c) {
            ctx->pc = 0x11E1A4u;
            goto label_11e1a4;
        }
    }
    ctx->pc = 0x11E174u;
    // 0x11e174: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x11e174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x11e178: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E178u;
    {
        const bool branch_taken_0x11e178 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E178u;
        // 0x11e17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e178) {
            ctx->pc = 0x11E188u;
            goto label_11e188;
        }
    }
    ctx->pc = 0x11E180u;
    // 0x11e180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e184: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x11e184u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_11e188:
    // 0x11e188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e18c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11E18Cu;
    SET_GPR_U32(ctx, 31, 0x11E194u);
    ctx->pc = 0x11E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E18Cu;
    // 0x11e190: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11E18Cu, 0x11E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E194u;
label_11e194:
    // 0x11e194: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11e194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e198: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11e198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e19c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11e19cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e1a0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11e1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11e1a4:
    // 0x11e1a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e1a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11e1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1b0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11E1B0u;
    SET_GPR_U32(ctx, 31, 0x11E1B8u);
    ctx->pc = 0x11E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1B0u;
    // 0x11e1b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11E1B0u, 0x11E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1B8u;
label_11e1b8:
    // 0x11e1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1bc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11E1BCu;
    SET_GPR_U32(ctx, 31, 0x11E1C4u);
    ctx->pc = 0x11E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1BCu;
    // 0x11e1c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11E1BCu, 0x11E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1C4u;
label_11e1c4:
    // 0x11e1c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11e1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11e1c8:
    // 0x11e1c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11e1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e1cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11e1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e1d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e1d4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1D8u;
        // 0x11e1dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1E0u;
}
