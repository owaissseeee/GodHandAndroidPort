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

// Function: func_00231300
// Address: 0x231300 - 0x231ac0
void func_00231300_0x231300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00231300_0x231300");
#endif

    switch (ctx->pc) {
        case 0x231350u: goto label_231350;
        case 0x2313c4u: goto label_2313c4;
        case 0x2313ecu: goto label_2313ec;
        case 0x23140cu: goto label_23140c;
        case 0x231414u: goto label_231414;
        case 0x231434u: goto label_231434;
        case 0x2314a8u: goto label_2314a8;
        case 0x2314e4u: goto label_2314e4;
        case 0x2314f0u: goto label_2314f0;
        case 0x2314fcu: goto label_2314fc;
        case 0x231530u: goto label_231530;
        case 0x231550u: goto label_231550;
        case 0x23157cu: goto label_23157c;
        case 0x231598u: goto label_231598;
        case 0x231660u: goto label_231660;
        case 0x2316ccu: goto label_2316cc;
        case 0x2316f4u: goto label_2316f4;
        case 0x231738u: goto label_231738;
        case 0x23179cu: goto label_23179c;
        case 0x2317fcu: goto label_2317fc;
        case 0x23181cu: goto label_23181c;
        case 0x231824u: goto label_231824;
        case 0x231874u: goto label_231874;
        case 0x231884u: goto label_231884;
        case 0x231898u: goto label_231898;
        case 0x2318a4u: goto label_2318a4;
        case 0x2318dcu: goto label_2318dc;
        case 0x231908u: goto label_231908;
        case 0x23191cu: goto label_23191c;
        case 0x231934u: goto label_231934;
        case 0x23193cu: goto label_23193c;
        case 0x231984u: goto label_231984;
        case 0x2319a0u: goto label_2319a0;
        case 0x2319b0u: goto label_2319b0;
        case 0x2319c4u: goto label_2319c4;
        case 0x2319d0u: goto label_2319d0;
        case 0x2319e0u: goto label_2319e0;
        case 0x231a54u: goto label_231a54;
        case 0x231a68u: goto label_231a68;
        case 0x231a78u: goto label_231a78;
        case 0x231a8cu: goto label_231a8c;
        case 0x231a98u: goto label_231a98;
        case 0x231aa0u: goto label_231aa0;
        default: break;
    }

    ctx->pc = 0x231300u;

    // 0x231300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x231300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x231304: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x231304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x231308: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x231308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23130c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23130cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x231310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x231314: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x231314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x231318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23131c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x23131cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x231320: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x231320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x231324: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x231324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x231328: 0x104001db  beqz        $v0, . + 4 + (0x1DB << 2)
    ctx->pc = 0x231328u;
    {
        const bool branch_taken_0x231328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231328u;
        // 0x23132c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231328) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x231330u;
    // 0x231330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231334: 0x24429250  addiu       $v0, $v0, -0x6DB0
    ctx->pc = 0x231334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
    // 0x231338: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23133c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231340: 0x800008  jr          $a0
    ctx->pc = 0x231340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231348u: goto label_231348;
            case 0x2313D4u: goto label_2313d4;
            case 0x23142Cu: goto label_23142c;
            case 0x2314C0u: goto label_2314c0;
            case 0x231658u: goto label_231658;
            case 0x2317D4u: goto label_2317d4;
            case 0x2318D4u: goto label_2318d4;
            case 0x231914u: goto label_231914;
            case 0x23192Cu: goto label_23192c;
            case 0x231998u: goto label_231998;
            case 0x2319D8u: goto label_2319d8;
            case 0x231A60u: goto label_231a60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231340u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231348u;
label_231348:
    // 0x231348: 0xc09d91a  jal         func_276468
    ctx->pc = 0x231348u;
    SET_GPR_U32(ctx, 31, 0x231350u);
    ctx->pc = 0x23134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231348u;
    // 0x23134c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x231348u, 0x231350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231350u;
label_231350:
    // 0x231350: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x231350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x231354: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x231354u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x231358: 0x2463fde6  addiu       $v1, $v1, -0x21A
    ctx->pc = 0x231358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966758));
    // 0x23135c: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x23135cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x231360: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231360u;
    {
        const bool branch_taken_0x231360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231360u;
        // 0x231364: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231360) {
            ctx->pc = 0x231380u;
            goto label_231380;
        }
    }
    ctx->pc = 0x231368u;
    // 0x231368: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23136c: 0x24429280  addiu       $v0, $v0, -0x6D80
    ctx->pc = 0x23136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x231370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231374: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231378: 0x800008  jr          $a0
    ctx->pc = 0x231378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231380u: goto label_231380;
            case 0x231390u: goto label_231390;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231378u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231380u;
label_231380:
    // 0x231380: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231384: 0x8c43073c  lw          $v1, 0x73C($v0)
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1852)));
    // 0x231388: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231388u;
    {
        const bool branch_taken_0x231388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231388u;
        // 0x23138c: 0x8c440740  lw          $a0, 0x740($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231388) {
            ctx->pc = 0x23139Cu;
            goto label_23139c;
        }
    }
    ctx->pc = 0x231390u;
label_231390:
    // 0x231390: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231394: 0x8c431218  lw          $v1, 0x1218($v0)
    ctx->pc = 0x231394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4632)));
    // 0x231398: 0x8c44121c  lw          $a0, 0x121C($v0)
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
label_23139c:
    // 0x23139c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23139cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2313a0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2313a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2313a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2313a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2313a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2313a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2313ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2313acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2313b0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2313b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2313b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2313b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2313b8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2313b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2313bc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2313BCu;
    SET_GPR_U32(ctx, 31, 0x2313C4u);
    ctx->pc = 0x2313C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313BCu;
    // 0x2313c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2313BCu, 0x2313C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313C4u;
label_2313c4:
    // 0x2313c4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2313c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2313c8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2313c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2313cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2313d0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2313d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2313d4:
    // 0x2313d4: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x2313d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2313d8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2313d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2313dc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2313dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2313e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2313e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2313e4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2313E4u;
    SET_GPR_U32(ctx, 31, 0x2313ECu);
    ctx->pc = 0x2313E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313E4u;
    // 0x2313e8: 0xae2316d0  sw          $v1, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2313E4u, 0x2313ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313ECu;
label_2313ec:
    // 0x2313ec: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2313ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2313f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2313f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2313f4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2313f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2313f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2313f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2313fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2313fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231400: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x231400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x231404: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x231404u;
    SET_GPR_U32(ctx, 31, 0x23140Cu);
    ctx->pc = 0x231408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231404u;
    // 0x231408: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x231404u, 0x23140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23140Cu;
label_23140c:
    // 0x23140c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23140Cu;
    SET_GPR_U32(ctx, 31, 0x231414u);
    ctx->pc = 0x231410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23140Cu;
    // 0x231410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23140Cu, 0x231414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231414u;
label_231414:
    // 0x231414: 0x10400166  beqz        $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x231414u;
    {
        const bool branch_taken_0x231414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231414) {
            ctx->pc = 0x2319B0u;
            goto label_2319b0;
        }
    }
    ctx->pc = 0x23141Cu;
    // 0x23141c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x23141cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x231420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x231424: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x231424u;
    {
        const bool branch_taken_0x231424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231424u;
        // 0x231428: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231424) {
            ctx->pc = 0x2319B0u;
            goto label_2319b0;
        }
    }
    ctx->pc = 0x23142Cu;
label_23142c:
    // 0x23142c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23142Cu;
    SET_GPR_U32(ctx, 31, 0x231434u);
    ctx->pc = 0x231430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23142Cu;
    // 0x231430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23142Cu, 0x231434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231434u;
label_231434:
    // 0x231434: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x231434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x231438: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x231438u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23143c: 0x2463fde6  addiu       $v1, $v1, -0x21A
    ctx->pc = 0x23143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966758));
    // 0x231440: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x231440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x231444: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231444u;
    {
        const bool branch_taken_0x231444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231444u;
        // 0x231448: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231444) {
            ctx->pc = 0x231464u;
            goto label_231464;
        }
    }
    ctx->pc = 0x23144Cu;
    // 0x23144c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23144cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231450: 0x24429390  addiu       $v0, $v0, -0x6C70
    ctx->pc = 0x231450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x231454: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231458: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23145c: 0x800008  jr          $a0
    ctx->pc = 0x23145Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231464u: goto label_231464;
            case 0x231474u: goto label_231474;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23145Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231464u;
label_231464:
    // 0x231464: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231468: 0x8c430744  lw          $v1, 0x744($v0)
    ctx->pc = 0x231468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1860)));
    // 0x23146c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23146Cu;
    {
        const bool branch_taken_0x23146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23146Cu;
        // 0x231470: 0x8c440748  lw          $a0, 0x748($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23146c) {
            ctx->pc = 0x231480u;
            goto label_231480;
        }
    }
    ctx->pc = 0x231474u;
label_231474:
    // 0x231474: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231478: 0x8c431220  lw          $v1, 0x1220($v0)
    ctx->pc = 0x231478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4640)));
    // 0x23147c: 0x8c441224  lw          $a0, 0x1224($v0)
    ctx->pc = 0x23147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4644)));
label_231480:
    // 0x231480: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x231480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231484: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x231484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x231488: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x231488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23148c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23148cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231490: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x231490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231494: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x231494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23149c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23149cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2314a0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2314A0u;
    SET_GPR_U32(ctx, 31, 0x2314A8u);
    ctx->pc = 0x2314A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314A0u;
    // 0x2314a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2314A0u, 0x2314A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314A8u;
label_2314a8:
    // 0x2314a8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2314a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2314ac: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2314acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2314b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2314b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2314b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2314b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2314b8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2314b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2314bc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2314bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2314c0:
    // 0x2314c0: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x2314c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2314c4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2314c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2314c8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2314c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2314cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2314ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2314d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2314d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2314d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2314d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2314d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2314dc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2314DCu;
    SET_GPR_U32(ctx, 31, 0x2314E4u);
    ctx->pc = 0x2314E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314DCu;
    // 0x2314e0: 0xae2316d0  sw          $v1, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2314DCu, 0x2314E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314E4u;
label_2314e4:
    // 0x2314e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2314e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314e8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2314E8u;
    SET_GPR_U32(ctx, 31, 0x2314F0u);
    ctx->pc = 0x2314ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314E8u;
    // 0x2314ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2314E8u, 0x2314F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314F0u;
label_2314f0:
    // 0x2314f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2314f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314f4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2314F4u;
    SET_GPR_U32(ctx, 31, 0x2314FCu);
    ctx->pc = 0x2314F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314F4u;
    // 0x2314f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2314F4u, 0x2314FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314FCu;
label_2314fc:
    // 0x2314fc: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2314fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x231500: 0x2444fde6  addiu       $a0, $v0, -0x21A
    ctx->pc = 0x231500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966758));
    // 0x231504: 0x2c830041  sltiu       $v1, $a0, 0x41
    ctx->pc = 0x231504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x231508: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x231508u;
    {
        const bool branch_taken_0x231508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231508u;
        // 0x23150c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231508) {
            ctx->pc = 0x231528u;
            goto label_231528;
        }
    }
    ctx->pc = 0x231510u;
    // 0x231510: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x231514: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x231514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x231518: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23151c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231520: 0x800008  jr          $a0
    ctx->pc = 0x231520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231528u: goto label_231528;
            case 0x2315D4u: goto label_2315d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231520u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231528u;
label_231528:
    // 0x231528: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x231528u;
    SET_GPR_U32(ctx, 31, 0x231530u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x231528u, 0x231530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231530u;
label_231530:
    // 0x231530: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x231530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231538: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x231538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x23153c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23153cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231540: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231544: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x231548: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x231548u;
    SET_GPR_U32(ctx, 31, 0x231550u);
    ctx->pc = 0x23154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231548u;
    // 0x23154c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x231548u, 0x231550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231550u;
label_231550:
    // 0x231550: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x231550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231554: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x231554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x231558: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x231558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x23155c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23155cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231560: 0x0  nop
    ctx->pc = 0x231560u;
    // NOP
    // 0x231564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231568: 0x0  nop
    ctx->pc = 0x231568u;
    // NOP
    // 0x23156c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x23156Cu;
    {
        const bool branch_taken_0x23156c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23156c) {
            ctx->pc = 0x2315FCu;
            goto label_2315fc;
        }
    }
    ctx->pc = 0x231574u;
    // 0x231574: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x231574u;
    SET_GPR_U32(ctx, 31, 0x23157Cu);
    ctx->pc = 0x231578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231574u;
    // 0x231578: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x231574u, 0x23157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23157Cu;
label_23157c:
    // 0x23157c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23157cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x231580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231584: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x231584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x231588: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23158c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x23158cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x231590: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x231590u;
    SET_GPR_U32(ctx, 31, 0x231598u);
    ctx->pc = 0x231594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231590u;
    // 0x231594: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x231590u, 0x231598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231598u;
label_231598:
    // 0x231598: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x231598u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x23159c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23159cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2315a0: 0x0  nop
    ctx->pc = 0x2315a0u;
    // NOP
    // 0x2315a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2315a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2315a8: 0x0  nop
    ctx->pc = 0x2315a8u;
    // NOP
    // 0x2315ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2315ACu;
    {
        const bool branch_taken_0x2315ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315ACu;
        // 0x2315b0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315ac) {
            ctx->pc = 0x2315B8u;
            goto label_2315b8;
        }
    }
    ctx->pc = 0x2315B4u;
    // 0x2315b4: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2315b4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_2315b8:
    // 0x2315b8: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2315b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2315bc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2315bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2315c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2315c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2315c4: 0x0  nop
    ctx->pc = 0x2315c4u;
    // NOP
    // 0x2315c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2315c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2315cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2315CCu;
    {
        const bool branch_taken_0x2315cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2315cc) {
            ctx->pc = 0x2315E8u;
            goto label_2315e8;
        }
    }
    ctx->pc = 0x2315D4u;
label_2315d4:
    // 0x2315d4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2315d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2315d8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2315d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x2315dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2315dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2315e0: 0x0  nop
    ctx->pc = 0x2315e0u;
    // NOP
    // 0x2315e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2315e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2315e8:
    // 0x2315e8: 0x0  nop
    ctx->pc = 0x2315e8u;
    // NOP
    // 0x2315ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2315ECu;
    {
        const bool branch_taken_0x2315ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2315F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315ECu;
        // 0x2315f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315ec) {
            ctx->pc = 0x2315F8u;
            goto label_2315f8;
        }
    }
    ctx->pc = 0x2315F4u;
    // 0x2315f4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2315f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2315f8:
    // 0x2315f8: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2315f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2315fc:
    // 0x2315fc: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2315fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x231600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231604: 0x0  nop
    ctx->pc = 0x231604u;
    // NOP
    // 0x231608: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x231608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23160c: 0x0  nop
    ctx->pc = 0x23160cu;
    // NOP
    // 0x231610: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231610u;
    {
        const bool branch_taken_0x231610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231610u;
        // 0x231614: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231610) {
            ctx->pc = 0x23161Cu;
            goto label_23161c;
        }
    }
    ctx->pc = 0x231618u;
    // 0x231618: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x231618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_23161c:
    // 0x23161c: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x23161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231620: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x231620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231624: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x231624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231628: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x231628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23162c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x23162cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231630: 0x0  nop
    ctx->pc = 0x231630u;
    // NOP
    // 0x231634: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x231634u;
    {
        const bool branch_taken_0x231634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231634u;
        // 0x231638: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231634) {
            ctx->pc = 0x231644u;
            goto label_231644;
        }
    }
    ctx->pc = 0x23163Cu;
    // 0x23163c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x231640: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x231640u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_231644:
    // 0x231644: 0x8e2216ec  lw          $v0, 0x16EC($s1)
    ctx->pc = 0x231644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5868)));
    // 0x231648: 0x18400113  blez        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x231648u;
    {
        const bool branch_taken_0x231648 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231648u;
        // 0x23164c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231648) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x231650u;
    // 0x231650: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x231650u;
    {
        const bool branch_taken_0x231650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231650u;
        // 0x231654: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231650) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x231658u;
label_231658:
    // 0x231658: 0xc09d91a  jal         func_276468
    ctx->pc = 0x231658u;
    SET_GPR_U32(ctx, 31, 0x231660u);
    ctx->pc = 0x23165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231658u;
    // 0x23165c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x231658u, 0x231660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231660u;
label_231660:
    // 0x231660: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x231660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x231664: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x231664u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x231668: 0x2463fde6  addiu       $v1, $v1, -0x21A
    ctx->pc = 0x231668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966758));
    // 0x23166c: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x23166cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x231670: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231670u;
    {
        const bool branch_taken_0x231670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231670u;
        // 0x231674: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231670) {
            ctx->pc = 0x231690u;
            goto label_231690;
        }
    }
    ctx->pc = 0x231678u;
    // 0x231678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23167c: 0x244295b0  addiu       $v0, $v0, -0x6A50
    ctx->pc = 0x23167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940080));
    // 0x231680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231684: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231688: 0x800008  jr          $a0
    ctx->pc = 0x231688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231690u: goto label_231690;
            case 0x2316D8u: goto label_2316d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231688u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231690u;
label_231690:
    // 0x231690: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231694: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x231694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x231698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23169c: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x23169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2316a0: 0x8c48074c  lw          $t0, 0x74C($v0)
    ctx->pc = 0x2316a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1868)));
    // 0x2316a4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2316a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2316a8: 0x8c430750  lw          $v1, 0x750($v0)
    ctx->pc = 0x2316a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1872)));
    // 0x2316ac: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x2316acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2316b0: 0x1029021  addu        $s2, $t0, $v0
    ctx->pc = 0x2316b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2316b4: 0xae2905f0  sw          $t1, 0x5F0($s1)
    ctx->pc = 0x2316b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 9));
    // 0x2316b8: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x2316b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
    // 0x2316bc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2316bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2316c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2316c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2316c4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2316C4u;
    SET_GPR_U32(ctx, 31, 0x2316CCu);
    ctx->pc = 0x2316C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316C4u;
    // 0x2316c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2316C4u, 0x2316CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316CCu;
label_2316cc:
    // 0x2316cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2316ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2316d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2316D0u;
    {
        const bool branch_taken_0x2316d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316D0u;
        // 0x2316d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316d0) {
            ctx->pc = 0x231720u;
            goto label_231720;
        }
    }
    ctx->pc = 0x2316D8u;
label_2316d8:
    // 0x2316d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2316d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316dc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2316dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2316e0: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2316e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2316e4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2316e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2316e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2316ec: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2316ECu;
    SET_GPR_U32(ctx, 31, 0x2316F4u);
    ctx->pc = 0x2316F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316ECu;
    // 0x2316f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2316ECu, 0x2316F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316F4u;
label_2316f4:
    // 0x2316f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2316f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2316f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2316f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2316fc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2316fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x231700: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231704: 0x8c431230  lw          $v1, 0x1230($v0)
    ctx->pc = 0x231704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4656)));
    // 0x231708: 0x8c451234  lw          $a1, 0x1234($v0)
    ctx->pc = 0x231708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4660)));
    // 0x23170c: 0xae2405f4  sw          $a0, 0x5F4($s1)
    ctx->pc = 0x23170cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 4));
    // 0x231710: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x231710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231714: 0xae2005f0  sw          $zero, 0x5F0($s1)
    ctx->pc = 0x231714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
    // 0x231718: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x231718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23171c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231720:
    // 0x231720: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x231720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231724: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x231724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23172c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23172cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x231730: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x231730u;
    SET_GPR_U32(ctx, 31, 0x231738u);
    ctx->pc = 0x231734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231730u;
    // 0x231734: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x231730u, 0x231738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231738u;
label_231738:
    // 0x231738: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x231738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x23173c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231740: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x231740u;
    {
        const bool branch_taken_0x231740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231740u;
        // 0x231744: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231740) {
            ctx->pc = 0x231780u;
            goto label_231780;
        }
    }
    ctx->pc = 0x231748u;
    // 0x231748: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231748u;
    {
        const bool branch_taken_0x231748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231748u;
        // 0x23174c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231748) {
            ctx->pc = 0x231760u;
            goto label_231760;
        }
    }
    ctx->pc = 0x231750u;
    // 0x231750: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x231750u;
    {
        const bool branch_taken_0x231750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231750u;
        // 0x231754: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231750) {
            ctx->pc = 0x231778u;
            goto label_231778;
        }
    }
    ctx->pc = 0x231758u;
    // 0x231758: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x231758u;
    {
        const bool branch_taken_0x231758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231758) {
            ctx->pc = 0x231794u;
            goto label_231794;
        }
    }
    ctx->pc = 0x231760u;
label_231760:
    // 0x231760: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x231760u;
    {
        const bool branch_taken_0x231760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231760u;
        // 0x231764: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231760) {
            ctx->pc = 0x231788u;
            goto label_231788;
        }
    }
    ctx->pc = 0x231768u;
    // 0x231768: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x231768u;
    {
        const bool branch_taken_0x231768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231768u;
        // 0x23176c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231768) {
            ctx->pc = 0x231790u;
            goto label_231790;
        }
    }
    ctx->pc = 0x231770u;
    // 0x231770: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x231770u;
    {
        const bool branch_taken_0x231770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231770) {
            ctx->pc = 0x231794u;
            goto label_231794;
        }
    }
    ctx->pc = 0x231778u;
label_231778:
    // 0x231778: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x231778u;
    {
        const bool branch_taken_0x231778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231778u;
        // 0x23177c: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231778) {
            ctx->pc = 0x231794u;
            goto label_231794;
        }
    }
    ctx->pc = 0x231780u;
label_231780:
    // 0x231780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231780u;
    {
        const bool branch_taken_0x231780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231780u;
        // 0x231784: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231780) {
            ctx->pc = 0x231794u;
            goto label_231794;
        }
    }
    ctx->pc = 0x231788u;
label_231788:
    // 0x231788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231788u;
    {
        const bool branch_taken_0x231788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231788u;
        // 0x23178c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231788) {
            ctx->pc = 0x231794u;
            goto label_231794;
        }
    }
    ctx->pc = 0x231790u;
label_231790:
    // 0x231790: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231794:
    // 0x231794: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x231794u;
    SET_GPR_U32(ctx, 31, 0x23179Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x231794u, 0x23179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23179Cu;
label_23179c:
    // 0x23179c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2317a0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2317a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2317a4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2317A4u;
    {
        const bool branch_taken_0x2317a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2317a4) {
            ctx->pc = 0x2317A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2317A4u;
            // 0x2317a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2317ACu;
            goto label_2317ac;
        }
    }
    ctx->pc = 0x2317ACu;
label_2317ac:
    // 0x2317ac: 0x2010  mfhi        $a0
    ctx->pc = 0x2317acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2317b0: 0x90202b  sltu        $a0, $a0, $s0
    ctx->pc = 0x2317b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2317b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2317B4u;
    {
        const bool branch_taken_0x2317b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317B4u;
        // 0x2317b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317b4) {
            ctx->pc = 0x2317C4u;
            goto label_2317c4;
        }
    }
    ctx->pc = 0x2317BCu;
    // 0x2317bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2317BCu;
    {
        const bool branch_taken_0x2317bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317BCu;
        // 0x2317c0: 0xae2205f8  sw          $v0, 0x5F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317bc) {
            ctx->pc = 0x2317C8u;
            goto label_2317c8;
        }
    }
    ctx->pc = 0x2317C4u;
label_2317c4:
    // 0x2317c4: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x2317c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
label_2317c8:
    // 0x2317c8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2317c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2317cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2317ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2317d0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2317d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2317d4:
    // 0x2317d4: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x2317d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x2317d8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2317d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2317dc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2317DCu;
    {
        const bool branch_taken_0x2317dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317DCu;
        // 0x2317e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317dc) {
            ctx->pc = 0x2317E8u;
            goto label_2317e8;
        }
    }
    ctx->pc = 0x2317E4u;
    // 0x2317e4: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x2317e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
label_2317e8:
    // 0x2317e8: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x2317e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x2317ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2317ECu;
    {
        const bool branch_taken_0x2317ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317ECu;
        // 0x2317f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317ec) {
            ctx->pc = 0x23181Cu;
            goto label_23181c;
        }
    }
    ctx->pc = 0x2317F4u;
    // 0x2317f4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2317F4u;
    SET_GPR_U32(ctx, 31, 0x2317FCu);
    ctx->pc = 0x2317F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317F4u;
    // 0x2317f8: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2317F4u, 0x2317FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317FCu;
label_2317fc:
    // 0x2317fc: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2317fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231804: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x231804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x231808: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23180c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23180cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231810: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x231810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x231814: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x231814u;
    SET_GPR_U32(ctx, 31, 0x23181Cu);
    ctx->pc = 0x231818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231814u;
    // 0x231818: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x231814u, 0x23181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23181Cu;
label_23181c:
    // 0x23181c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23181Cu;
    SET_GPR_U32(ctx, 31, 0x231824u);
    ctx->pc = 0x231820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23181Cu;
    // 0x231820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23181Cu, 0x231824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231824u;
label_231824:
    // 0x231824: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x231824u;
    {
        const bool branch_taken_0x231824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231824) {
            ctx->pc = 0x231884u;
            goto label_231884;
        }
    }
    ctx->pc = 0x23182Cu;
    // 0x23182c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x23182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x231830: 0x2444fde6  addiu       $a0, $v0, -0x21A
    ctx->pc = 0x231830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966758));
    // 0x231834: 0x2c830041  sltiu       $v1, $a0, 0x41
    ctx->pc = 0x231834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x231838: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x231838u;
    {
        const bool branch_taken_0x231838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231838u;
        // 0x23183c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231838) {
            ctx->pc = 0x231858u;
            goto label_231858;
        }
    }
    ctx->pc = 0x231840u;
    // 0x231840: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x231840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x231844: 0x244296c0  addiu       $v0, $v0, -0x6940
    ctx->pc = 0x231844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940352));
    // 0x231848: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23184c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231850: 0x800008  jr          $a0
    ctx->pc = 0x231850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231858u: goto label_231858;
            case 0x23187Cu: goto label_23187c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231850u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231858u;
label_231858:
    // 0x231858: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x231858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x23185c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23185Cu;
    {
        const bool branch_taken_0x23185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23185Cu;
        // 0x231860: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23185c) {
            ctx->pc = 0x23186Cu;
            goto label_23186c;
        }
    }
    ctx->pc = 0x231864u;
    // 0x231864: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x231864u;
    {
        const bool branch_taken_0x231864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231864u;
        // 0x231868: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231864) {
            ctx->pc = 0x231884u;
            goto label_231884;
        }
    }
    ctx->pc = 0x23186Cu;
label_23186c:
    // 0x23186c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23186Cu;
    SET_GPR_U32(ctx, 31, 0x231874u);
    ctx->pc = 0x231870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23186Cu;
    // 0x231870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23186Cu, 0x231874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231874u;
label_231874:
    // 0x231874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231874u;
    {
        const bool branch_taken_0x231874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231874) {
            ctx->pc = 0x231884u;
            goto label_231884;
        }
    }
    ctx->pc = 0x23187Cu;
label_23187c:
    // 0x23187c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23187Cu;
    SET_GPR_U32(ctx, 31, 0x231884u);
    ctx->pc = 0x231880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23187Cu;
    // 0x231880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23187Cu, 0x231884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231884u;
label_231884:
    // 0x231884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231888: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x231888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23188c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231890: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x231890u;
    SET_GPR_U32(ctx, 31, 0x231898u);
    ctx->pc = 0x231894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231890u;
    // 0x231894: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x231890u, 0x231898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231898u;
label_231898:
    // 0x231898: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x231898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23189c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23189Cu;
    SET_GPR_U32(ctx, 31, 0x2318A4u);
    ctx->pc = 0x2318A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23189Cu;
    // 0x2318a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23189Cu, 0x2318A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318A4u;
label_2318a4:
    // 0x2318a4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2318a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2318a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2318a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2318ac: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2318ACu;
    {
        const bool branch_taken_0x2318ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2318ac) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x2318B4u;
    // 0x2318b4: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x2318b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x2318b8: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2318B8u;
    {
        const bool branch_taken_0x2318b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2318b8) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x2318C0u;
    // 0x2318c0: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x2318c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x2318c4: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2318C4u;
    {
        const bool branch_taken_0x2318c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318C4u;
        // 0x2318c8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318c4) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x2318CCu;
    // 0x2318cc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2318CCu;
    {
        const bool branch_taken_0x2318cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318CCu;
        // 0x2318d0: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318cc) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x2318D4u;
label_2318d4:
    // 0x2318d4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2318D4u;
    SET_GPR_U32(ctx, 31, 0x2318DCu);
    ctx->pc = 0x2318D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318D4u;
    // 0x2318d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2318D4u, 0x2318DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318DCu;
label_2318dc:
    // 0x2318dc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2318dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2318e0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2318e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2318e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2318e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2318e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2318e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318ec: 0x8c650754  lw          $a1, 0x754($v1)
    ctx->pc = 0x2318ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1876)));
    // 0x2318f0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2318f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2318f4: 0x8c660758  lw          $a2, 0x758($v1)
    ctx->pc = 0x2318f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1880)));
    // 0x2318f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2318f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2318fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x231900: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x231900u;
    SET_GPR_U32(ctx, 31, 0x231908u);
    ctx->pc = 0x231904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231900u;
    // 0x231904: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x231900u, 0x231908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231908u;
label_231908:
    // 0x231908: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x231908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x23190c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x231910: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x231910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_231914:
    // 0x231914: 0xc055f06  jal         func_157C18
    ctx->pc = 0x231914u;
    SET_GPR_U32(ctx, 31, 0x23191Cu);
    ctx->pc = 0x231918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231914u;
    // 0x231918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x231914u, 0x23191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23191Cu;
label_23191c:
    // 0x23191c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23191Cu;
    {
        const bool branch_taken_0x23191c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23191Cu;
        // 0x231920: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23191c) {
            ctx->pc = 0x2319B0u;
            goto label_2319b0;
        }
    }
    ctx->pc = 0x231924u;
    // 0x231924: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x231924u;
    {
        const bool branch_taken_0x231924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231924u;
        // 0x231928: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231924) {
            ctx->pc = 0x2319B0u;
            goto label_2319b0;
        }
    }
    ctx->pc = 0x23192Cu;
label_23192c:
    // 0x23192c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23192Cu;
    SET_GPR_U32(ctx, 31, 0x231934u);
    ctx->pc = 0x231930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23192Cu;
    // 0x231930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23192Cu, 0x231934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231934u;
label_231934:
    // 0x231934: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x231934u;
    SET_GPR_U32(ctx, 31, 0x23193Cu);
    ctx->pc = 0x231938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231934u;
    // 0x231938: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x231934u, 0x23193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23193Cu;
label_23193c:
    // 0x23193c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x231940: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231940u;
    {
        const bool branch_taken_0x231940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231940u;
        // 0x231944: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231940) {
            ctx->pc = 0x231954u;
            goto label_231954;
        }
    }
    ctx->pc = 0x231948u;
    // 0x231948: 0x8c43075c  lw          $v1, 0x75C($v0)
    ctx->pc = 0x231948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1884)));
    // 0x23194c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23194Cu;
    {
        const bool branch_taken_0x23194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23194Cu;
        // 0x231950: 0x8c440760  lw          $a0, 0x760($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23194c) {
            ctx->pc = 0x23195Cu;
            goto label_23195c;
        }
    }
    ctx->pc = 0x231954u;
label_231954:
    // 0x231954: 0x8c430764  lw          $v1, 0x764($v0)
    ctx->pc = 0x231954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1892)));
    // 0x231958: 0x8c440768  lw          $a0, 0x768($v0)
    ctx->pc = 0x231958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1896)));
label_23195c:
    // 0x23195c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23195cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231960: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x231960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x231964: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x231964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231968: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23196c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23196cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231970: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x231970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231978: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x231978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23197c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23197Cu;
    SET_GPR_U32(ctx, 31, 0x231984u);
    ctx->pc = 0x231980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23197Cu;
    // 0x231980: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23197Cu, 0x231984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231984u;
label_231984:
    // 0x231984: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x231984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x231988: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x231988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23198c: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x23198cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x231990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x231994: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x231994u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_231998:
    // 0x231998: 0xc055f06  jal         func_157C18
    ctx->pc = 0x231998u;
    SET_GPR_U32(ctx, 31, 0x2319A0u);
    ctx->pc = 0x23199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231998u;
    // 0x23199c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x231998u, 0x2319A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319A0u;
label_2319a0:
    // 0x2319a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2319A0u;
    {
        const bool branch_taken_0x2319a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319a0) {
            ctx->pc = 0x2319B0u;
            goto label_2319b0;
        }
    }
    ctx->pc = 0x2319A8u;
    // 0x2319a8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2319A8u;
    SET_GPR_U32(ctx, 31, 0x2319B0u);
    ctx->pc = 0x2319ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319A8u;
    // 0x2319ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2319A8u, 0x2319B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319B0u;
label_2319b0:
    // 0x2319b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2319b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2319b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2319b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2319b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2319b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2319BCu;
    SET_GPR_U32(ctx, 31, 0x2319C4u);
    ctx->pc = 0x2319C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319BCu;
    // 0x2319c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2319BCu, 0x2319C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319C4u;
label_2319c4:
    // 0x2319c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2319c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2319c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2319C8u;
    SET_GPR_U32(ctx, 31, 0x2319D0u);
    ctx->pc = 0x2319CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319C8u;
    // 0x2319cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2319C8u, 0x2319D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319D0u;
label_2319d0:
    // 0x2319d0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2319D0u;
    {
        const bool branch_taken_0x2319d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319d0) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x2319D8u;
label_2319d8:
    // 0x2319d8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2319D8u;
    SET_GPR_U32(ctx, 31, 0x2319E0u);
    ctx->pc = 0x2319DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319D8u;
    // 0x2319dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2319D8u, 0x2319E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319E0u;
label_2319e0:
    // 0x2319e0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2319e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2319e4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2319e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2319e8: 0x2463fde6  addiu       $v1, $v1, -0x21A
    ctx->pc = 0x2319e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966758));
    // 0x2319ec: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x2319ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x2319f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2319F0u;
    {
        const bool branch_taken_0x2319f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319F0u;
        // 0x2319f4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319f0) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x2319F8u;
    // 0x2319f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2319f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2319fc: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x2319fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x231a00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231a04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231a08: 0x800008  jr          $a0
    ctx->pc = 0x231A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A10u: goto label_231a10;
            case 0x231A20u: goto label_231a20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231A10u;
label_231a10:
    // 0x231a10: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231a14: 0x8c43076c  lw          $v1, 0x76C($v0)
    ctx->pc = 0x231a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1900)));
    // 0x231a18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231A18u;
    {
        const bool branch_taken_0x231a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A18u;
        // 0x231a1c: 0x8c440770  lw          $a0, 0x770($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a18) {
            ctx->pc = 0x231A2Cu;
            goto label_231a2c;
        }
    }
    ctx->pc = 0x231A20u;
label_231a20:
    // 0x231a20: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231a24: 0x8c431228  lw          $v1, 0x1228($v0)
    ctx->pc = 0x231a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4648)));
    // 0x231a28: 0x8c44122c  lw          $a0, 0x122C($v0)
    ctx->pc = 0x231a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4652)));
label_231a2c:
    // 0x231a2c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x231a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231a30: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x231a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x231a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x231a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231a38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x231a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a40: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x231a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x231a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x231a4c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x231A4Cu;
    SET_GPR_U32(ctx, 31, 0x231A54u);
    ctx->pc = 0x231A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A4Cu;
    // 0x231a50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x231A4Cu, 0x231A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A54u;
label_231a54:
    // 0x231a54: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x231a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x231a58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x231a5c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x231a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_231a60:
    // 0x231a60: 0xc055f06  jal         func_157C18
    ctx->pc = 0x231A60u;
    SET_GPR_U32(ctx, 31, 0x231A68u);
    ctx->pc = 0x231A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A60u;
    // 0x231a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x231A60u, 0x231A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A68u;
label_231a68:
    // 0x231a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231A68u;
    {
        const bool branch_taken_0x231a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231a68) {
            ctx->pc = 0x231A78u;
            goto label_231a78;
        }
    }
    ctx->pc = 0x231A70u;
    // 0x231a70: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x231A70u;
    SET_GPR_U32(ctx, 31, 0x231A78u);
    ctx->pc = 0x231A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A70u;
    // 0x231a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x231A70u, 0x231A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A78u;
label_231a78:
    // 0x231a78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231a7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x231a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x231a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a84: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x231A84u;
    SET_GPR_U32(ctx, 31, 0x231A8Cu);
    ctx->pc = 0x231A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A84u;
    // 0x231a88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x231A84u, 0x231A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A8Cu;
label_231a8c:
    // 0x231a8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x231a8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x231a90: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x231A90u;
    SET_GPR_U32(ctx, 31, 0x231A98u);
    ctx->pc = 0x231A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A90u;
    // 0x231a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x231A90u, 0x231A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A98u;
label_231a98:
    // 0x231a98: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x231A98u;
    SET_GPR_U32(ctx, 31, 0x231AA0u);
    ctx->pc = 0x231A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A98u;
    // 0x231a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x231A98u, 0x231AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AA0u;
label_231aa0:
    // 0x231aa0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x231aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231aa4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x231aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x231aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231aac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x231aacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231ab4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x231ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x231ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x231AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AB8u;
        // 0x231abc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231AC0u;
}
