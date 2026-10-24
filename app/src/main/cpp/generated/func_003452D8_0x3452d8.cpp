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

// Function: func_003452D8
// Address: 0x3452d8 - 0x345490
void func_003452D8_0x3452d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003452D8_0x3452d8");
#endif

    switch (ctx->pc) {
        case 0x345300u: goto label_345300;
        case 0x345314u: goto label_345314;
        case 0x345370u: goto label_345370;
        case 0x345378u: goto label_345378;
        case 0x34539cu: goto label_34539c;
        case 0x3453a4u: goto label_3453a4;
        case 0x3453acu: goto label_3453ac;
        case 0x3453b4u: goto label_3453b4;
        case 0x3453bcu: goto label_3453bc;
        case 0x3453ccu: goto label_3453cc;
        case 0x3453d8u: goto label_3453d8;
        case 0x3453e0u: goto label_3453e0;
        case 0x345418u: goto label_345418;
        case 0x34542cu: goto label_34542c;
        case 0x345440u: goto label_345440;
        case 0x345448u: goto label_345448;
        case 0x345458u: goto label_345458;
        case 0x345460u: goto label_345460;
        case 0x345468u: goto label_345468;
        default: break;
    }

    ctx->pc = 0x3452d8u;

    // 0x3452d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3452d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3452dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3452dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3452e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3452e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3452e4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3452e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3452e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3452e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3452ec: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3452ECu;
    {
        const bool branch_taken_0x3452ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3452F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452ECu;
        // 0x3452f0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452ec) {
            ctx->pc = 0x345308u;
            goto label_345308;
        }
    }
    ctx->pc = 0x3452F4u;
    // 0x3452f4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3452f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3452f8: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3452F8u;
    SET_GPR_U32(ctx, 31, 0x345300u);
    ctx->pc = 0x3452FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3452F8u;
    // 0x3452fc: 0x24847b20  addiu       $a0, $a0, 0x7B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3452F8u, 0x345300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345300u;
label_345300:
    // 0x345300: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x345300u;
    {
        const bool branch_taken_0x345300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345300u;
        // 0x345304: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345300) {
            ctx->pc = 0x34547Cu;
            goto label_34547c;
        }
    }
    ctx->pc = 0x345308u;
label_345308:
    // 0x345308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x345308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34530c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x34530Cu;
    SET_GPR_U32(ctx, 31, 0x345314u);
    ctx->pc = 0x345310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34530Cu;
    // 0x345310: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x34530Cu, 0x345314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345314u;
label_345314:
    // 0x345314: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x345314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345318: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x345318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x34531c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x34531cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x345320: 0x24638b00  addiu       $v1, $v1, -0x7500
    ctx->pc = 0x345320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937344));
    // 0x345324: 0x24427a80  addiu       $v0, $v0, 0x7A80
    ctx->pc = 0x345324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
    // 0x345328: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x345328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x34532c: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x34532cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x345330: 0x8e0a001c  lw          $t2, 0x1C($s0)
    ctx->pc = 0x345330u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x345334: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x345334u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x345338: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x345338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34533c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x34533cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x345340: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x345340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x345344: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x345344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x345348: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x345348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x758B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x758B00u, _value); } while (0);
    // 0x34534c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x34534cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x345350: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x345350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x345354: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x345354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x345358: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x345358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x34535c: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x34535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x345360: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x345360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x345364: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x345364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x345368: 0xc0d226c  jal         func_3489B0
    ctx->pc = 0x345368u;
    SET_GPR_U32(ctx, 31, 0x345370u);
    ctx->pc = 0x34536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345368u;
    // 0x34536c: 0xafaa001c  sw          $t2, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3489B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3489B0u, 0x345368u, 0x345370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345370u;
label_345370:
    // 0x345370: 0xc0d18aa  jal         func_3462A8
    ctx->pc = 0x345370u;
    SET_GPR_U32(ctx, 31, 0x345378u);
    ctx->pc = 0x3462A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3462A8u, 0x345370u, 0x345378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345378u;
label_345378:
    // 0x345378: 0x8e24c7d8  lw          $a0, -0x3828($s1)
    ctx->pc = 0x345378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952920)));
    // 0x34537c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x34537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345380: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x345380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x345384: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x345384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x345388: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x345388u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x34538c: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x34538Cu;
    {
        const bool branch_taken_0x34538c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x345390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34538Cu;
        // 0x345390: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34538c) {
            ctx->pc = 0x345468u;
            goto label_345468;
        }
    }
    ctx->pc = 0x345394u;
    // 0x345394: 0xc0c9254  jal         func_324950
    ctx->pc = 0x345394u;
    SET_GPR_U32(ctx, 31, 0x34539Cu);
    ctx->pc = 0x324950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324950u, 0x345394u, 0x34539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34539Cu;
label_34539c:
    // 0x34539c: 0xc0ce528  jal         func_3394A0
    ctx->pc = 0x34539Cu;
    SET_GPR_U32(ctx, 31, 0x3453A4u);
    ctx->pc = 0x3394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394A0u, 0x34539Cu, 0x3453A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453A4u;
label_3453a4:
    // 0x3453a4: 0xc0ce2a4  jal         func_338A90
    ctx->pc = 0x3453A4u;
    SET_GPR_U32(ctx, 31, 0x3453ACu);
    ctx->pc = 0x338A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A90u, 0x3453A4u, 0x3453ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453ACu;
label_3453ac:
    // 0x3453ac: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x3453ACu;
    SET_GPR_U32(ctx, 31, 0x3453B4u);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x3453ACu, 0x3453B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453B4u;
label_3453b4:
    // 0x3453b4: 0xc0d268c  jal         func_349A30
    ctx->pc = 0x3453B4u;
    SET_GPR_U32(ctx, 31, 0x3453BCu);
    ctx->pc = 0x349A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A30u, 0x3453B4u, 0x3453BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453BCu;
label_3453bc:
    // 0x3453bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3453BCu;
    {
        const bool branch_taken_0x3453bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3453bc) {
            ctx->pc = 0x3453D8u;
            goto label_3453d8;
        }
    }
    ctx->pc = 0x3453C4u;
    // 0x3453c4: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x3453C4u;
    SET_GPR_U32(ctx, 31, 0x3453CCu);
    ctx->pc = 0x3453C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3453C4u;
    // 0x3453c8: 0x2404ff9b  addiu       $a0, $zero, -0x65 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x3453C4u, 0x3453CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453CCu;
label_3453cc:
    // 0x3453cc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3453ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3453d0: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3453D0u;
    SET_GPR_U32(ctx, 31, 0x3453D8u);
    ctx->pc = 0x3453D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3453D0u;
    // 0x3453d4: 0x24847b48  addiu       $a0, $a0, 0x7B48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3453D0u, 0x3453D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453D8u;
label_3453d8:
    // 0x3453d8: 0xc0d153c  jal         func_3454F0
    ctx->pc = 0x3453D8u;
    SET_GPR_U32(ctx, 31, 0x3453E0u);
    ctx->pc = 0x3453DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3453D8u;
    // 0x3453dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3454F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3454F0u, 0x3453D8u, 0x3453E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453E0u;
label_3453e0:
    // 0x3453e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3453e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3453e4: 0x2442e09c  addiu       $v0, $v0, -0x1F64
    ctx->pc = 0x3453e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959260));
    // 0x3453e8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3453e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x3453ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3453ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3453f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3453f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE09Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE09Cu, _value); } while (0);
    // 0x3453f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3453f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3453f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3453f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3453fc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3453fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345400: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x345400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x345404: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x345404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345408: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34540c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x34540cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x345410: 0xc0d15e0  jal         func_345780
    ctx->pc = 0x345410u;
    SET_GPR_U32(ctx, 31, 0x345418u);
    ctx->pc = 0x345780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345780u, 0x345410u, 0x345418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345418u;
label_345418:
    // 0x345418: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x345418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x34541c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34541Cu;
    {
        const bool branch_taken_0x34541c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34541Cu;
        // 0x345420: 0x24847b70  addiu       $a0, $a0, 0x7B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34541c) {
            ctx->pc = 0x34542Cu;
            goto label_34542c;
        }
    }
    ctx->pc = 0x345424u;
    // 0x345424: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x345424u;
    SET_GPR_U32(ctx, 31, 0x34542Cu);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345424u, 0x34542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34542Cu;
label_34542c:
    // 0x34542c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34542cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345430: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345438: 0xc0d1576  jal         func_3455D8
    ctx->pc = 0x345438u;
    SET_GPR_U32(ctx, 31, 0x345440u);
    ctx->pc = 0x34543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345438u;
    // 0x34543c: 0xac43c7dc  sw          $v1, -0x3824($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952924), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3455D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3455D8u, 0x345438u, 0x345440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345440u;
label_345440:
    // 0x345440: 0xc0cd778  jal         func_335DE0
    ctx->pc = 0x345440u;
    SET_GPR_U32(ctx, 31, 0x345448u);
    ctx->pc = 0x335DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335DE0u, 0x345440u, 0x345448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345448u;
label_345448:
    // 0x345448: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34544c: 0x248452c0  addiu       $a0, $a0, 0x52C0
    ctx->pc = 0x34544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21184));
    // 0x345450: 0xc0cd746  jal         func_335D18
    ctx->pc = 0x345450u;
    SET_GPR_U32(ctx, 31, 0x345458u);
    ctx->pc = 0x345454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345450u;
    // 0x345454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D18u, 0x345450u, 0x345458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345458u;
label_345458:
    // 0x345458: 0xc0d1aee  jal         func_346BB8
    ctx->pc = 0x345458u;
    SET_GPR_U32(ctx, 31, 0x345460u);
    ctx->pc = 0x346BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346BB8u, 0x345458u, 0x345460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345460u;
label_345460:
    // 0x345460: 0xc0d1524  jal         func_345490
    ctx->pc = 0x345460u;
    SET_GPR_U32(ctx, 31, 0x345468u);
    ctx->pc = 0x345464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345460u;
    // 0x345464: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345490u, 0x345460u, 0x345468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345468u;
label_345468:
    // 0x345468: 0x2623c7d8  addiu       $v1, $s1, -0x3828
    ctx->pc = 0x345468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952920));
    // 0x34546c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x345470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x345474: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x345474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x345478: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x345478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34547c:
    // 0x34547c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34547cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345480: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x345480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345484: 0x3e00008  jr          $ra
    ctx->pc = 0x345484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345484u;
        // 0x345488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34548Cu;
    // 0x34548c: 0x0  nop
    ctx->pc = 0x34548cu;
    // NOP
    ctx->pc = 0x345490u;
}
