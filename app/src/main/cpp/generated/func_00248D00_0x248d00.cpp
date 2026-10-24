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

// Function: func_00248D00
// Address: 0x248d00 - 0x248fe0
void func_00248D00_0x248d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00248D00_0x248d00");
#endif

    switch (ctx->pc) {
        case 0x248d4cu: goto label_248d4c;
        case 0x248d58u: goto label_248d58;
        case 0x248d94u: goto label_248d94;
        case 0x248da4u: goto label_248da4;
        case 0x248ddcu: goto label_248ddc;
        case 0x248decu: goto label_248dec;
        case 0x248e1cu: goto label_248e1c;
        case 0x248e5cu: goto label_248e5c;
        case 0x248e7cu: goto label_248e7c;
        case 0x248e9cu: goto label_248e9c;
        case 0x248ea4u: goto label_248ea4;
        case 0x248ef0u: goto label_248ef0;
        case 0x248f24u: goto label_248f24;
        case 0x248f30u: goto label_248f30;
        case 0x248f40u: goto label_248f40;
        case 0x248f50u: goto label_248f50;
        case 0x248f64u: goto label_248f64;
        case 0x248f70u: goto label_248f70;
        case 0x248facu: goto label_248fac;
        case 0x248fc0u: goto label_248fc0;
        default: break;
    }

    ctx->pc = 0x248d00u;

    // 0x248d00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x248d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x248d04: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x248d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x248d08: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x248d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x248d0c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x248d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x248d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x248d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d14: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x248d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x248d18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x248d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x248d1c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x248d1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x248d20: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x248d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x248d24: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x248d24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x248d28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x248d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x248d2c: 0x14800032  bnez        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x248D2Cu;
    {
        const bool branch_taken_0x248d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x248D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D2Cu;
        // 0x248d30: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d2c) {
            ctx->pc = 0x248DF8u;
            goto label_248df8;
        }
    }
    ctx->pc = 0x248D34u;
    // 0x248d34: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x248d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x248d38: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x248d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x248d3c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x248d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x248d40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x248d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x248d44: 0xc051e62  jal         func_147988
    ctx->pc = 0x248D44u;
    SET_GPR_U32(ctx, 31, 0x248D4Cu);
    ctx->pc = 0x248D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D44u;
    // 0x248d48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x248D44u, 0x248D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D4Cu;
label_248d4c:
    // 0x248d4c: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x248d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x248d50: 0xc051f10  jal         func_147C40
    ctx->pc = 0x248D50u;
    SET_GPR_U32(ctx, 31, 0x248D58u);
    ctx->pc = 0x248D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D50u;
    // 0x248d54: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x248D50u, 0x248D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D58u;
label_248d58:
    // 0x248d58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x248d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x248d5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d60: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x248d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x248d64: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x248d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x248d68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248d6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x248d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x248d70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x248d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d74: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x248d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x248d78: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x248d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x248d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d80: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x248d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x248d84: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x248d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x248d88: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x248d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x248d8c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x248D8Cu;
    SET_GPR_U32(ctx, 31, 0x248D94u);
    ctx->pc = 0x248D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D8Cu;
    // 0x248d90: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x248D8Cu, 0x248D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D94u;
label_248d94:
    // 0x248d94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x248d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x248d98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d9c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x248D9Cu;
    SET_GPR_U32(ctx, 31, 0x248DA4u);
    ctx->pc = 0x248DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D9Cu;
    // 0x248da0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x248D9Cu, 0x248DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DA4u;
label_248da4:
    // 0x248da4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x248da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x248da8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x248da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x248dac: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x248dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x248db0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x248db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x248db4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x248db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x248db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dbc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x248dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x248dc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x248dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dc4: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x248dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x248dc8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x248dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x248dcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x248dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x248dd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dd4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x248DD4u;
    SET_GPR_U32(ctx, 31, 0x248DDCu);
    ctx->pc = 0x248DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248DD4u;
    // 0x248dd8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x248DD4u, 0x248DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DDCu;
label_248ddc:
    // 0x248ddc: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x248DDCu;
    {
        const bool branch_taken_0x248ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x248ddc) {
            ctx->pc = 0x248DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248DDCu;
            // 0x248de0: 0xa23202f7  sb          $s2, 0x2F7($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248DE4u;
            goto label_248de4;
        }
    }
    ctx->pc = 0x248DE4u;
label_248de4:
    // 0x248de4: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x248DE4u;
    SET_GPR_U32(ctx, 31, 0x248DECu);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x248DE4u, 0x248DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DECu;
label_248dec:
    // 0x248dec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x248decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x248df0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x248DF0u;
    {
        const bool branch_taken_0x248df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248df0) {
            ctx->pc = 0x248DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248DF0u;
            // 0x248df4: 0xa23202f7  sb          $s2, 0x2F7($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248DF8u;
            goto label_248df8;
        }
    }
    ctx->pc = 0x248DF8u;
label_248df8:
    // 0x248df8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x248df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x248dfc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x248DFCu;
    {
        const bool branch_taken_0x248dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DFCu;
        // 0x248e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dfc) {
            ctx->pc = 0x248E14u;
            goto label_248e14;
        }
    }
    ctx->pc = 0x248E04u;
    // 0x248e04: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x248E04u;
    {
        const bool branch_taken_0x248e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E04u;
        // 0x248e08: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e04) {
            ctx->pc = 0x248E68u;
            goto label_248e68;
        }
    }
    ctx->pc = 0x248E0Cu;
    // 0x248e0c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x248E0Cu;
    {
        const bool branch_taken_0x248e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E0Cu;
        // 0x248e10: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e0c) {
            ctx->pc = 0x248FC8u;
            goto label_248fc8;
        }
    }
    ctx->pc = 0x248E14u;
label_248e14:
    // 0x248e14: 0xc09d91a  jal         func_276468
    ctx->pc = 0x248E14u;
    SET_GPR_U32(ctx, 31, 0x248E1Cu);
    ctx->pc = 0x248E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E14u;
    // 0x248e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x248E14u, 0x248E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E1Cu;
label_248e1c:
    // 0x248e1c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x248e1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x248e20: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x248e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x248e24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248E24u;
    {
        const bool branch_taken_0x248e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E24u;
        // 0x248e28: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e24) {
            ctx->pc = 0x248E38u;
            goto label_248e38;
        }
    }
    ctx->pc = 0x248E2Cu;
    // 0x248e2c: 0x8c4338e0  lw          $v1, 0x38E0($v0)
    ctx->pc = 0x248e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14560)));
    // 0x248e30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248E30u;
    {
        const bool branch_taken_0x248e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E30u;
        // 0x248e34: 0x8c4438e4  lw          $a0, 0x38E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e30) {
            ctx->pc = 0x248E40u;
            goto label_248e40;
        }
    }
    ctx->pc = 0x248E38u;
label_248e38:
    // 0x248e38: 0x8c4338c8  lw          $v1, 0x38C8($v0)
    ctx->pc = 0x248e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14536)));
    // 0x248e3c: 0x8c4438cc  lw          $a0, 0x38CC($v0)
    ctx->pc = 0x248e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14540)));
label_248e40:
    // 0x248e40: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x248e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248e44: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x248e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x248e48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x248e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e50: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x248e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x248e54: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x248E54u;
    SET_GPR_U32(ctx, 31, 0x248E5Cu);
    ctx->pc = 0x248E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E54u;
    // 0x248e58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x248E54u, 0x248E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E5Cu;
label_248e5c:
    // 0x248e5c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x248e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x248e60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x248e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x248e64: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x248e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_248e68:
    // 0x248e68: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x248e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x248e6c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x248e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x248e70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x248e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x248e74: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x248E74u;
    SET_GPR_U32(ctx, 31, 0x248E7Cu);
    ctx->pc = 0x248E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E74u;
    // 0x248e78: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x248E74u, 0x248E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E7Cu;
label_248e7c:
    // 0x248e7c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x248e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e84: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x248e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x248e88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248e8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248e90: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x248e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x248e94: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x248E94u;
    SET_GPR_U32(ctx, 31, 0x248E9Cu);
    ctx->pc = 0x248E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E94u;
    // 0x248e98: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x248E94u, 0x248E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E9Cu;
label_248e9c:
    // 0x248e9c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x248E9Cu;
    SET_GPR_U32(ctx, 31, 0x248EA4u);
    ctx->pc = 0x248EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E9Cu;
    // 0x248ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x248E9Cu, 0x248EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EA4u;
label_248ea4:
    // 0x248ea4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x248EA4u;
    {
        const bool branch_taken_0x248ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ea4) {
            ctx->pc = 0x248F50u;
            goto label_248f50;
        }
    }
    ctx->pc = 0x248EACu;
    // 0x248eac: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x248eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248eb0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x248eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x248eb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248eb8: 0x0  nop
    ctx->pc = 0x248eb8u;
    // NOP
    // 0x248ebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x248ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248ec0: 0x0  nop
    ctx->pc = 0x248ec0u;
    // NOP
    // 0x248ec4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x248EC4u;
    {
        const bool branch_taken_0x248ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248ec4) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248ECCu;
    // 0x248ecc: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x248eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
    // 0x248ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248ed4: 0x0  nop
    ctx->pc = 0x248ed4u;
    // NOP
    // 0x248ed8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248edc: 0x0  nop
    ctx->pc = 0x248edcu;
    // NOP
    // 0x248ee0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x248EE0u;
    {
        const bool branch_taken_0x248ee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248ee0) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248EE8u;
    // 0x248ee8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x248EE8u;
    SET_GPR_U32(ctx, 31, 0x248EF0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x248EE8u, 0x248EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EF0u;
label_248ef0:
    // 0x248ef0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248ef4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x248EF4u;
    {
        const bool branch_taken_0x248ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EF4u;
        // 0x248ef8: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ef4) {
            ctx->pc = 0x248F00u;
            goto label_248f00;
        }
    }
    ctx->pc = 0x248EFCu;
    // 0x248efc: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x248efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_248f00:
    // 0x248f00: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x248f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x248f04: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x248f04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x248f08: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x248f08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x248f0c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x248f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x248f10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248f14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f1c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x248F1Cu;
    SET_GPR_U32(ctx, 31, 0x248F24u);
    ctx->pc = 0x248F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F1Cu;
    // 0x248f20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x248F1Cu, 0x248F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F24u;
label_248f24:
    // 0x248f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f28: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x248F28u;
    SET_GPR_U32(ctx, 31, 0x248F30u);
    ctx->pc = 0x248F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F28u;
    // 0x248f2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x248F28u, 0x248F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F30u;
label_248f30:
    // 0x248f30: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x248F30u;
    {
        const bool branch_taken_0x248f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F30u;
        // 0x248f34: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f30) {
            ctx->pc = 0x248FC4u;
            goto label_248fc4;
        }
    }
    ctx->pc = 0x248F38u;
label_248f38:
    // 0x248f38: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x248F38u;
    SET_GPR_U32(ctx, 31, 0x248F40u);
    ctx->pc = 0x248F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F38u;
    // 0x248f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x248F38u, 0x248F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F40u;
label_248f40:
    // 0x248f40: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x248F40u;
    {
        const bool branch_taken_0x248f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F40u;
        // 0x248f44: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f40) {
            ctx->pc = 0x248FC4u;
            goto label_248fc4;
        }
    }
    ctx->pc = 0x248F48u;
    // 0x248f48: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x248F48u;
    SET_GPR_U32(ctx, 31, 0x248F50u);
    ctx->pc = 0x248F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F48u;
    // 0x248f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x248F48u, 0x248F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F50u;
label_248f50:
    // 0x248f50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248f54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f5c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x248F5Cu;
    SET_GPR_U32(ctx, 31, 0x248F64u);
    ctx->pc = 0x248F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F5Cu;
    // 0x248f60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x248F5Cu, 0x248F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F64u;
label_248f64:
    // 0x248f64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x248f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x248f68: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x248F68u;
    SET_GPR_U32(ctx, 31, 0x248F70u);
    ctx->pc = 0x248F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F68u;
    // 0x248f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x248F68u, 0x248F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F70u;
label_248f70:
    // 0x248f70: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x248f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x248f74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248f78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248F78u;
    {
        const bool branch_taken_0x248f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F78u;
        // 0x248f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f78) {
            ctx->pc = 0x248F90u;
            goto label_248f90;
        }
    }
    ctx->pc = 0x248F80u;
    // 0x248f80: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x248f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x248f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248f88: 0xa2220617  sb          $v0, 0x617($s1)
    ctx->pc = 0x248f88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x248f8c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x248f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_248f90:
    // 0x248f90: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x248f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x248f94: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x248f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x248f98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x248F98u;
    {
        const bool branch_taken_0x248f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F98u;
        // 0x248f9c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f98) {
            ctx->pc = 0x248FC4u;
            goto label_248fc4;
        }
    }
    ctx->pc = 0x248FA0u;
    // 0x248fa0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x248fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x248fa4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x248FA4u;
    SET_GPR_U32(ctx, 31, 0x248FACu);
    ctx->pc = 0x248FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FA4u;
    // 0x248fa8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x248FA4u, 0x248FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FACu;
label_248fac:
    // 0x248fac: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x248facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x248fb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248FB0u;
    {
        const bool branch_taken_0x248fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FB0u;
        // 0x248fb4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fb0) {
            ctx->pc = 0x248FC4u;
            goto label_248fc4;
        }
    }
    ctx->pc = 0x248FB8u;
    // 0x248fb8: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x248FB8u;
    SET_GPR_U32(ctx, 31, 0x248FC0u);
    ctx->pc = 0x248FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FB8u;
    // 0x248fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x248FB8u, 0x248FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FC0u;
label_248fc0:
    // 0x248fc0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x248fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_248fc4:
    // 0x248fc4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x248fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_248fc8:
    // 0x248fc8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x248fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x248fcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x248fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x248fd0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x248fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x248fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x248FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FD4u;
        // 0x248fd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248FDCu;
    // 0x248fdc: 0x0  nop
    ctx->pc = 0x248fdcu;
    // NOP
    ctx->pc = 0x248fe0u;
}
