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

// Function: func_00324950
// Address: 0x324950 - 0x324ac8
void func_00324950_0x324950(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324950_0x324950");
#endif

    if (__builtin_expect(ctx->pc != 0x324950u, 0)) {
        switch (ctx->pc) {
            case 0x32498cu: goto label_32498c;
            case 0x324994u: goto label_324994;
            case 0x32499cu: goto label_32499c;
            case 0x3249a4u: goto label_3249a4;
            case 0x3249acu: goto label_3249ac;
            case 0x3249b4u: goto label_3249b4;
            case 0x3249bcu: goto label_3249bc;
            case 0x3249c4u: goto label_3249c4;
            case 0x3249ccu: goto label_3249cc;
            case 0x3249d4u: goto label_3249d4;
            case 0x3249dcu: goto label_3249dc;
            case 0x3249e4u: goto label_3249e4;
            case 0x3249f4u: goto label_3249f4;
            case 0x324a04u: goto label_324a04;
            case 0x324a18u: goto label_324a18;
            case 0x324a38u: goto label_324a38;
            case 0x324a54u: goto label_324a54;
            case 0x324a78u: goto label_324a78;
            case 0x324a9cu: goto label_324a9c;
            case 0x324aa4u: goto label_324aa4;
            default: break;
        }
    }


    // 0x324950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324954: 0x3c04003c  lui         $a0, 0x3C
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x324958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32495c: 0x24907400  addiu       $s0, $a0, 0x7400
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 29696));
    // 0x324960: 0x3c030075  lui         $v1, 0x75
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x324964: 0x3c020045  lui         $v0, 0x45
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x324968: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x324968u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C7400u));
    // 0x32496c: 0x24635c1c  addiu       $v1, $v1, 0x5C1C
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23580));
    // 0x324970: 0x24421ac0  addiu       $v0, $v0, 0x1AC0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x324974: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x324974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x324978: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x324978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x755C1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755C1Cu, _value); } while (0);
    // 0x32497c: 0x5480004b  bnel        $a0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x32497Cu;
    {
        const bool branch_taken_0x32497c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32497c) {
            ctx->pc = 0x324980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32497Cu;
            // 0x324980: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324AACu;
            goto label_324aac;
        }
    }
    // 0x324984: 0xc0cf986  jal         func_33E618
    ctx->pc = 0x324984u;
    SET_GPR_U32(ctx, 31, 0x32498Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033E618_0x33e618, 0x33e618u, 0x32498cu)) {
        return;
    }
label_32498c:
    // 0x32498c: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x32498Cu;
    SET_GPR_U32(ctx, 31, 0x324994u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33B658_33E678_0x33e678, 0x33e678u, 0x324994u)) {
        return;
    }
label_324994:
    // 0x324994: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x324994u;
    SET_GPR_U32(ctx, 31, 0x32499Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033A090_0x33a090, 0x33a090u, 0x32499cu)) {
        return;
    }
label_32499c:
    // 0x32499c: 0xc0ce528  jal         func_3394A0
    ctx->pc = 0x32499Cu;
    SET_GPR_U32(ctx, 31, 0x3249A4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003394A0_0x3394a0, 0x3394a0u, 0x3249a4u)) {
        return;
    }
label_3249a4:
    // 0x3249a4: 0xc0ce2a4  jal         func_338A90
    ctx->pc = 0x3249A4u;
    SET_GPR_U32(ctx, 31, 0x3249ACu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00338A90_0x338a90, 0x338a90u, 0x3249acu)) {
        return;
    }
label_3249ac:
    // 0x3249ac: 0xc0cfc2e  jal         func_33F0B8
    ctx->pc = 0x3249ACu;
    SET_GPR_U32(ctx, 31, 0x3249B4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033F0B8_0x33f0b8, 0x33f0b8u, 0x3249b4u)) {
        return;
    }
label_3249b4:
    // 0x3249b4: 0xc0c9e6e  jal         func_3279B8
    ctx->pc = 0x3249B4u;
    SET_GPR_U32(ctx, 31, 0x3249BCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003279B8_0x3279b8, 0x3279b8u, 0x3249bcu)) {
        return;
    }
label_3249bc:
    // 0x3249bc: 0xc0c9932  jal         func_3264C8
    ctx->pc = 0x3249BCu;
    SET_GPR_U32(ctx, 31, 0x3249C4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003264C8_0x3264c8, 0x3264c8u, 0x3249c4u)) {
        return;
    }
label_3249c4:
    // 0x3249c4: 0xc0cfcfc  jal         func_33F3F0
    ctx->pc = 0x3249C4u;
    SET_GPR_U32(ctx, 31, 0x3249CCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033F3F0_0x33f3f0, 0x33f3f0u, 0x3249ccu)) {
        return;
    }
label_3249cc:
    // 0x3249cc: 0xc0c98a2  jal         func_326288
    ctx->pc = 0x3249CCu;
    SET_GPR_U32(ctx, 31, 0x3249D4u);
    if (!runtime->callDirectStatic(rdram, ctx, &Obj3260_Tramp_00337728_D288_0x326288, 0x326288u, 0x3249d4u)) {
        return;
    }
label_3249d4:
    // 0x3249d4: 0xc0cd778  jal         func_335DE0
    ctx->pc = 0x3249D4u;
    SET_GPR_U32(ctx, 31, 0x3249DCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00335DE0_0x335de0, 0x335de0u, 0x3249dcu)) {
        return;
    }
label_3249dc:
    // 0x3249dc: 0xc0cefa0  jal         func_33BE80
    ctx->pc = 0x3249DCu;
    SET_GPR_U32(ctx, 31, 0x3249E4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033BE80_0x33be80, 0x33be80u, 0x3249e4u)) {
        return;
    }
label_3249e4:
    // 0x3249e4: 0x3c040032  lui         $a0, 0x32
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x3249e8: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249ec: 0xc0c98ae  jal         func_3262B8
    SET_GPR_U32(ctx, 31, 0x3249F4u);
    ctx->pc = 0x3249F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249ECu;
    // 0x3249f0: 0x248448c0  addiu       $a0, $a0, 0x48C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18624));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj3260_NoOp_D2B8_0x3262b8, 0x3262b8u, 0x3249f4u)) {
        return;
    }
label_3249f4:
    // 0x3249f4: 0x3c040032  lui         $a0, 0x32
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x3249f8: 0x248448d8  addiu       $a0, $a0, 0x48D8
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18648));
    // 0x3249fc: 0xc0cd746  jal         func_335D18
    SET_GPR_U32(ctx, 31, 0x324A04u);
    ctx->pc = 0x324A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249FCu;
    // 0x324a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00335D18_0x335d18, 0x335d18u, 0x324a04u)) {
        return;
    }
label_324a04:
    // 0x324a04: 0x3c04003c  lui         $a0, 0x3C
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x324a08: 0x24847420  addiu       $a0, $a0, 0x7420
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29728));
    // 0x324a0c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a10: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x324A18u);
    ctx->pc = 0x324A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A10u;
    // 0x324a14: 0x24060c80  addiu       $a2, $zero, 0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x324a18u)) {
        return;
    }
label_324a18:
    // 0x324a18: 0x3c060032  lui         $a2, 0x32
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x324a1c: 0x3c080045  lui         $t0, 0x45
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
    // 0x324a20: 0x24c64910  addiu       $a2, $a2, 0x4910
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18704));
    // 0x324a24: 0x25081b10  addiu       $t0, $t0, 0x1B10
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6928));
    // 0x324a28: 0x24040002  addiu       $a0, $zero, 0x2
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324a2c: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324a30: 0xc0cee84  jal         func_33BA10
    SET_GPR_U32(ctx, 31, 0x324A38u);
    ctx->pc = 0x324A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A30u;
    // 0x324a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033BA10_0x33ba10, 0x33ba10u, 0x324a38u)) {
        return;
    }
label_324a38:
    // 0x324a38: 0x3c050032  lui         $a1, 0x32
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x324a3c: 0x3c070045  lui         $a3, 0x45
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x324a40: 0x24a54930  addiu       $a1, $a1, 0x4930
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18736));
    // 0x324a44: 0x24e71b20  addiu       $a3, $a3, 0x1B20
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6944));
    // 0x324a48: 0x24040004  addiu       $a0, $zero, 0x4
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324a4c: 0xc0cee04  jal         func_33B810
    SET_GPR_U32(ctx, 31, 0x324A54u);
    ctx->pc = 0x324A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A4Cu;
    // 0x324a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033B810_0x33b810, 0x33b810u, 0x324a54u)) {
        return;
    }
label_324a54:
    // 0x324a54: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x324a58: 0x3c050032  lui         $a1, 0x32
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x324a5c: 0x3c070045  lui         $a3, 0x45
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x324a60: 0x24e71b30  addiu       $a3, $a3, 0x1B30
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6960));
    // 0x324a64: 0x24a548f0  addiu       $a1, $a1, 0x48F0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18672));
    // 0x324a68: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a6c: 0x24040005  addiu       $a0, $zero, 0x5
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x324a70: 0xc0cee04  jal         func_33B810
    SET_GPR_U32(ctx, 31, 0x324A78u);
    ctx->pc = 0x324A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A70u;
    // 0x324a74: 0xac627414  sw          $v0, 0x7414($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 29716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033B810_0x33b810, 0x33b810u, 0x324a78u)) {
        return;
    }
label_324a78:
    // 0x324a78: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x324a7c: 0x3c05003c  lui         $a1, 0x3C
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x324a80: 0x24637418  addiu       $v1, $v1, 0x7418
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29720));
    // 0x324a84: 0xaca27408  sw          $v0, 0x7408($a1)
    ctx->pc = 0x324a84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C7408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C7408u, _value); } while (0);
    // 0x324a88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x324a88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3C7418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C7418u, _value); } while (0);
    // 0x324a8c: 0x2404003c  addiu       $a0, $zero, 0x3C
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x324a90: 0x3c06003c  lui         $a2, 0x3C
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x324a94: 0xc0caaca  jal         func_32AB28
    SET_GPR_U32(ctx, 31, 0x324A9Cu);
    ctx->pc = 0x324A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A94u;
    // 0x324a98: 0xacc07410  sw          $zero, 0x7410($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 29712), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032AB28_0x32ab28, 0x32ab28u, 0x324a9cu)) {
        return;
    }
label_324a9c:
    // 0x324a9c: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x324A9Cu;
    SET_GPR_U32(ctx, 31, 0x324AA4u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33B670_33E690_0x33e690, 0x33e690u, 0x324aa4u)) {
        return;
    }
label_324aa4:
    // 0x324aa4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x324aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324aa8: 0x24820001  addiu       $v0, $a0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_324aac:
    // 0x324aac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x324aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324ab0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x324ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x324ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x324AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AB8u;
        // 0x324abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x324ac0: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324ac4: 0x0  nop
    // NOP
    ctx->pc = 0x324ac8u;
}