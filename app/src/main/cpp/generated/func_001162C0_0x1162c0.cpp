#include "godhand/frame_patches.h"
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

// Function: func_001162C0
// Address: 0x1162c0 - 0x1169d8
void func_001162C0_0x1162c0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001162C0_0x1162c0");
#endif

    if (__builtin_expect(ctx->pc != 0x1162c0u, 0)) {
        switch (ctx->pc) {
            case 0x116304u: goto label_116304;
            case 0x11630cu: goto label_11630c;
            case 0x11632cu: goto label_11632c;
            case 0x11635cu: goto label_11635c;
            case 0x116364u: goto label_116364;
            case 0x116390u: goto label_116390;
            case 0x116398u: goto label_116398;
            case 0x1163c0u: goto label_1163c0;
            case 0x1163f0u: goto label_1163f0;
            case 0x116404u: goto label_116404;
            case 0x116410u: goto label_116410;
            case 0x116418u: goto label_116418;
            case 0x116440u: goto label_116440;
            case 0x11645cu: goto label_11645c;
            case 0x116490u: goto label_116490;
            case 0x1164c4u: goto label_1164c4;
            case 0x1166b0u: goto label_1166b0;
            case 0x1166e0u: goto label_1166e0;
            case 0x116748u: goto label_116748;
            case 0x11675cu: goto label_11675c;
            case 0x116768u: goto label_116768;
            case 0x116770u: goto label_116770;
            case 0x11677cu: goto label_11677c;
            case 0x11678cu: goto label_11678c;
            case 0x1167b8u: goto label_1167b8;
            case 0x116858u: goto label_116858;
            case 0x11688cu: goto label_11688c;
            case 0x11689cu: goto label_11689c;
            case 0x1168a8u: goto label_1168a8;
            case 0x1168ccu: goto label_1168cc;
            case 0x1168ecu: goto label_1168ec;
            case 0x116918u: goto label_116918;
            case 0x116924u: goto label_116924;
            case 0x116958u: goto label_116958;
            case 0x11696cu: goto label_11696c;
            case 0x116980u: goto label_116980;
            case 0x1169a4u: goto label_1169a4;
            case 0x1169b0u: goto label_1169b0;
            default: break;
        }
    }


    // 0x1162c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1162c4: 0x3c0141f0  lui         $at, 0x41F0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1162c8: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1162cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1162ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1162d0: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1162d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1162d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1162d8: 0x3c100058  lui         $s0, 0x58
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1162dc: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1162e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1162e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1162e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1162e8: 0x261064f0  addiu       $s0, $s0, 0x64F0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1162ec: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1162ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1162f0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162f4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1162f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1162f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1162f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1162fc: 0xc0a480c  jal         func_292030
    SET_GPR_U32(ctx, 31, 0x116304u);
    ctx->pc = 0x116300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162FCu;
    // 0x116300: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmManage_SetSlotWait_0x292030, 0x292030u, 0x116304u)) {
        return;
    }
label_116304:
    // 0x116304: 0xc0a4c3c  jal         func_2930F0
    SET_GPR_U32(ctx, 31, 0x11630Cu);
    ctx->pc = 0x116308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116304u;
    // 0x116308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmManage_SetPlCatched_0x2930f0, 0x2930f0u, 0x11630cu)) {
        return;
    }
label_11630c:
    // 0x11630c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x11630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x116310: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x116314: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x116318: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11631c: 0x34420200  ori         $v0, $v0, 0x200
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x116320: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116324: 0xc04d476  jal         func_1351D8
    SET_GPR_U32(ctx, 31, 0x11632Cu);
    ctx->pc = 0x116328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116324u;
    // 0x116328: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x116324u, 0x11632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11632c:
    // 0x11632c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11632cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x116330: 0x2c620008  sltiu       $v0, $v1, 0x8
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x116334: 0x1040019e  beqz        $v0, . + 4 + (0x19E << 2)
    ctx->pc = 0x116334u;
    {
        const bool branch_taken_0x116334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116334u;
        // 0x116338: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116334) {
            ctx->pc = 0x1169B0u;
            goto label_1169b0;
        }
    }
    // 0x11633c: 0x31880  sll         $v1, $v1, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116340: 0x2442c230  addiu       $v0, $v0, -0x3DD0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951472));
    // 0x116344: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116348: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11634c: 0x800008  jr          $a0
    ctx->pc = 0x11634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116354u: goto label_116354;
            case 0x1163CCu: goto label_1163cc;
            case 0x116464u: goto label_116464;
            case 0x1164BCu: goto label_1164bc;
            case 0x116860u: goto label_116860;
            case 0x1168D8u: goto label_1168d8;
            case 0x11692Cu: goto label_11692c;
            case 0x116964u: goto label_116964;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11634Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_116354:
    // 0x116354: 0xc04ab0a  jal         func_12AC28
    SET_GPR_U32(ctx, 31, 0x11635Cu);
    ctx->pc = 0x116358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116354u;
    // 0x116358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CallWithAndClearField698_12AC28_0x12ac28, 0x12ac28u, 0x11635cu)) {
        return;
    }
label_11635c:
    // 0x11635c: 0xc04ae4a  jal         func_12B928
    SET_GPR_U32(ctx, 31, 0x116364u);
    ctx->pc = 0x116360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11635Cu;
    // 0x116360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0012B928_0x12b928, 0x12b928u, 0x116364u)) {
        return;
    }
label_116364:
    // 0x116364: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x116364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x116368: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11636c: 0x44806000  mtc1        $zero, $f12
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116370: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116374: 0x8c4508e0  lw          $a1, 0x8E0($v0)
    ctx->pc = 0x116374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2272)));
    // 0x116378: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11637c: 0x8c4608e4  lw          $a2, 0x8E4($v0)
    ctx->pc = 0x11637cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2276)));
    // 0x116380: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116384: 0xa22821  addu        $a1, $a1, $v0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x116388: 0xc0aa15e  jal         func_2A8578
    SET_GPR_U32(ctx, 31, 0x116390u);
    ctx->pc = 0x11638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116388u;
    // 0x11638c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A8578_0x2a8578, 0x2a8578u, 0x116390u)) {
        return;
    }
label_116390:
    // 0x116390: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x116398u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116390u;
    // 0x116394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x116390u, 0x116398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_116398:
    // 0x116398: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11639c: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1163a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1163a4: 0x240600f5  addiu       $a2, $zero, 0xF5
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x1163a8: 0x220382d  daddu       $a3, $s1, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163ac: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163b0: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163b4: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163b8: 0xc0b2e92  jal         func_2CBA48
    SET_GPR_U32(ctx, 31, 0x1163C0u);
    ctx->pc = 0x1163BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163B8u;
    // 0x1163bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CBA48_0x2cba48, 0x2cba48u, 0x1163c0u)) {
        return;
    }
label_1163c0:
    // 0x1163c0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1163c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1163c4: 0x24630001  addiu       $v1, $v1, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1163c8: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1163c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_1163cc:
    // 0x1163cc: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1163ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1163d0: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1163d0u;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_gene_rate_half");
        if (hook) hook(rdram, ctx, runtime);
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    } else {
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    }
    // 0x1163d4: 0x3c013ec9  lui         $at, 0x3EC9
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x1163d8: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1163dc: 0x44816800  mtc1        $at, $f13
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1163e0: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1163e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1163e4: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1163e8: 0xc0b680e  jal         func_2DA038
    SET_GPR_U32(ctx, 31, 0x1163F0u);
    ctx->pc = 0x1163ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163E8u;
    // 0x1163ec: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Turn_dest_0x2da038, 0x2da038u, 0x1163f0u)) {
        return;
    }
label_1163f0:
    // 0x1163f0: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x1163f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1163f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1163f8: 0x46000b06  mov.s       $f12, $f1
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1163fc: 0xc07df52  jal         func_1F7D48
    SET_GPR_U32(ctx, 31, 0x116404u);
    ctx->pc = 0x116400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163FCu;
    // 0x116400: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Adjust_theta_0x1f7d48, 0x1f7d48u, 0x116404u)) {
        return;
    }
label_116404:
    // 0x116404: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116408: 0xc0493b0  jal         func_124EC0
    SET_GPR_U32(ctx, 31, 0x116410u);
    ctx->pc = 0x11640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116408u;
    // 0x11640c: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00124EC0_0x124ec0, 0x124ec0u, 0x116410u)) {
        return;
    }
label_116410:
    // 0x116410: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x116418u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116410u;
    // 0x116414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x116410u, 0x116418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_116418:
    // 0x116418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116418u;
    {
        const bool branch_taken_0x116418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116418) {
            ctx->pc = 0x11642Cu;
            goto label_11642c;
        }
    }
    // 0x116420: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x116420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x116424: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116428: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x116428u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11642c:
    // 0x11642c: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116430: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116434: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116438: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x116440u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116438u;
    // 0x11643c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x116438u, 0x116440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_116440:
    // 0x116440: 0x3c01bdcc  lui         $at, 0xBDCC
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x116444: 0x3421cccd  ori         $at, $at, 0xCCCD
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x116448: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11644c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116450: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x116454: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x11645Cu);
    ctx->pc = 0x116458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116454u;
    // 0x116458: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x116454u, 0x11645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11645c:
    // 0x11645c: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x11645Cu;
    {
        const bool branch_taken_0x11645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11645Cu;
        // 0x116460: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11645c) {
            ctx->pc = 0x1169B4u;
            goto label_1169b4;
        }
    }
label_116464:
    // 0x116464: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x116464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x116468: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11646c: 0x44806000  mtc1        $zero, $f12
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116470: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116474: 0x8c4508e8  lw          $a1, 0x8E8($v0)
    ctx->pc = 0x116474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2280)));
    // 0x116478: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11647c: 0x8c4608ec  lw          $a2, 0x8EC($v0)
    ctx->pc = 0x11647cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2284)));
    // 0x116480: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116484: 0xa22821  addu        $a1, $a1, $v0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x116488: 0xc0aa15e  jal         func_2A8578
    SET_GPR_U32(ctx, 31, 0x116490u);
    ctx->pc = 0x11648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116488u;
    // 0x11648c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A8578_0x2a8578, 0x2a8578u, 0x116490u)) {
        return;
    }
label_116490:
    // 0x116490: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x116490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x116494: 0x2403000a  addiu       $v1, $zero, 0xA
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116498: 0x3c0141f0  lui         $at, 0x41F0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x11649c: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1164a0: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1164a4: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x1164a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x1164a8: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x1164a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
    // 0x1164ac: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1164acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1164b0: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x1164b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x1164b4: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x1164b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x1164b8: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x1164b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_1164bc:
    // 0x1164bc: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x1164BCu;
    SET_GPR_U32(ctx, 31, 0x1164C4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_002DB7A8_0x2db7a8, 0x2db7a8u, 0x1164c4u)) {
        return;
    }
label_1164c4:
    // 0x1164c4: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x1164c4u;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_countdown_pl15b8");
        if (hook) hook(rdram, ctx, runtime);
    } else {
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    }
    // 0x1164c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1164C8u;
    {
        const bool branch_taken_0x1164c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1164CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164C8u;
        // 0x1164cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164c8) {
            ctx->pc = 0x1164D4u;
            goto label_1164d4;
        }
    }
    // 0x1164d0: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x1164d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_1164d4:
    // 0x1164d4: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1164d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x1164d8: 0x3c040074  lui         $a0, 0x74
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1164dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1164dcu;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_countup_self");
        if (hook) hook(rdram, ctx, runtime);
    } else {
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    }
    // 0x1164e0: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x1164e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x1164e4: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x1164e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x1164e8: 0x306300f0  andi        $v1, $v1, 0xF0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1164ec: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1164ECu;
    {
        const bool branch_taken_0x1164ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1164ec) {
            ctx->pc = 0x1164F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1164ECu;
            // 0x1164f0: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165C0u;
            goto label_1165c0;
        }
    }
    // 0x1164f4: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x1164f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x1164f8: 0x2c620008  sltiu       $v0, $v1, 0x8
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1164fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1164FCu;
    {
        const bool branch_taken_0x1164fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164FCu;
        // 0x116500: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164fc) {
            ctx->pc = 0x11651Cu;
            goto label_11651c;
        }
    }
    // 0x116504: 0x31880  sll         $v1, $v1, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116508: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x11650c: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116510: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116514: 0x800008  jr          $a0
    ctx->pc = 0x116514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11651Cu: goto label_11651c;
            case 0x116524u: goto label_116524;
            case 0x11652Cu: goto label_11652c;
            case 0x116534u: goto label_116534;
            case 0x11653Cu: goto label_11653c;
            case 0x116544u: goto label_116544;
            case 0x11654Cu: goto label_11654c;
            case 0x116554u: goto label_116554;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116514u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_11651c:
    // 0x11651c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11651Cu;
    {
        const bool branch_taken_0x11651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11651Cu;
        // 0x116520: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11651c) {
            ctx->pc = 0x116558u;
            goto label_116558;
        }
    }
label_116524:
    // 0x116524: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116524u;
    {
        const bool branch_taken_0x116524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116524u;
        // 0x116528: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116524) {
            ctx->pc = 0x116558u;
            goto label_116558;
        }
    }
label_11652c:
    // 0x11652c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11652Cu;
    {
        const bool branch_taken_0x11652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11652Cu;
        // 0x116530: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11652c) {
            ctx->pc = 0x116558u;
            goto label_116558;
        }
    }
label_116534:
    // 0x116534: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116534u;
    {
        const bool branch_taken_0x116534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116534u;
        // 0x116538: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116534) {
            ctx->pc = 0x116558u;
            goto label_116558;
        }
    }
label_11653c:
    // 0x11653c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11653Cu;
    {
        const bool branch_taken_0x11653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11653Cu;
        // 0x116540: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11653c) {
            ctx->pc = 0x116558u;
            goto label_116558;
        }
    }
label_116544:
    // 0x116544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116544u;
    {
        const bool branch_taken_0x116544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116544u;
        // 0x116548: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116544) {
            ctx->pc = 0x116558u;
            goto label_116558;
        }
    }
label_11654c:
    // 0x11654c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11654Cu;
    {
        const bool branch_taken_0x11654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11654Cu;
        // 0x116550: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11654c) {
            ctx->pc = 0x116558u;
            goto label_116558;
        }
    }
label_116554:
    // 0x116554: 0x24030002  addiu       $v1, $zero, 0x2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_116558:
    // 0x116558: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x116558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11655c: 0x43102a  slt         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x116560: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x116560u;
    {
        const bool branch_taken_0x116560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116560) {
            ctx->pc = 0x116564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116560u;
            // 0x116564: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116578u;
            goto label_116578;
        }
    }
    // 0x116568: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x116568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11656c: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116570: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x116570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x116574: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x116574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_116578:
    // 0x116578: 0x62102a  slt         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11657c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11657Cu;
    {
        const bool branch_taken_0x11657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11657Cu;
        // 0x116580: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11657c) {
            ctx->pc = 0x116590u;
            goto label_116590;
        }
    }
    // 0x116584: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x116588: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x116588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x11658c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_116590:
    // 0x116590: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x116590u;
    {
        const bool branch_taken_0x116590 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x116590) {
            ctx->pc = 0x116594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116590u;
            // 0x116594: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116598u;
            goto label_116598;
        }
    }
label_116598:
    // 0x116598: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x116598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11659c: 0x28420008  slti        $v0, $v0, 0x8
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1165a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1165A0u;
    {
        const bool branch_taken_0x1165a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1165A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165A0u;
        // 0x1165a4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165a0) {
            ctx->pc = 0x1165B4u;
            goto label_1165b4;
        }
    }
    // 0x1165a8: 0x24020007  addiu       $v0, $zero, 0x7
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1165ac: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x1165acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x1165b0: 0x2402000a  addiu       $v0, $zero, 0xA
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1165b4:
    // 0x1165b4: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x1165b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x1165b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1165B8u;
    {
        const bool branch_taken_0x1165b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165B8u;
        // 0x1165bc: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165b8) {
            ctx->pc = 0x1165E4u;
            goto label_1165e4;
        }
    }
label_1165c0:
    // 0x1165c0: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1165C0u;
    {
        const bool branch_taken_0x1165c0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1165c0) {
            ctx->pc = 0x1165C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1165C0u;
            // 0x1165c4: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165E8u;
            goto label_1165e8;
        }
    }
    // 0x1165c8: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x1165c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x1165cc: 0x24030005  addiu       $v1, $zero, 0x5
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1165d0: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x1165d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
    // 0x1165d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1165d8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1165D8u;
    {
        const bool branch_taken_0x1165d8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1165DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165D8u;
        // 0x1165dc: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165d8) {
            ctx->pc = 0x1165E4u;
            goto label_1165e4;
        }
    }
    // 0x1165e0: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x1165e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_1165e4:
    // 0x1165e4: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x1165e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_1165e8:
    // 0x1165e8: 0x2c620008  sltiu       $v0, $v1, 0x8
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1165ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1165ECu;
    {
        const bool branch_taken_0x1165ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165ECu;
        // 0x1165f0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165ec) {
            ctx->pc = 0x11660Cu;
            goto label_11660c;
        }
    }
    // 0x1165f4: 0x31880  sll         $v1, $v1, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1165f8: 0x2442c270  addiu       $v0, $v0, -0x3D90
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951536));
    // 0x1165fc: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116600: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116604: 0x800008  jr          $a0
    ctx->pc = 0x116604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11660Cu: goto label_11660c;
            case 0x11661Cu: goto label_11661c;
            case 0x116630u: goto label_116630;
            case 0x116644u: goto label_116644;
            case 0x116658u: goto label_116658;
            case 0x11666Cu: goto label_11666c;
            case 0x11667Cu: goto label_11667c;
            case 0x116690u: goto label_116690;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116604u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_11660c:
    // 0x11660c: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116610: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116614: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x116614u;
    {
        const bool branch_taken_0x116614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116614u;
        // 0x116618: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116614) {
            ctx->pc = 0x1166A0u;
            goto label_1166a0;
        }
    }
label_11661c:
    // 0x11661c: 0x3c013f99  lui         $at, 0x3F99
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x116620: 0x3421999a  ori         $at, $at, 0x999A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x116624: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116628: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x116628u;
    {
        const bool branch_taken_0x116628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116628u;
        // 0x11662c: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116628) {
            ctx->pc = 0x1166A0u;
            goto label_1166a0;
        }
    }
label_116630:
    // 0x116630: 0x3c013fb3  lui         $at, 0x3FB3
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x116634: 0x34213333  ori         $at, $at, 0x3333
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x116638: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11663c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11663Cu;
    {
        const bool branch_taken_0x11663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11663Cu;
        // 0x116640: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11663c) {
            ctx->pc = 0x1166A0u;
            goto label_1166a0;
        }
    }
label_116644:
    // 0x116644: 0x3c013fcc  lui         $at, 0x3FCC
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x116648: 0x3421cccd  ori         $at, $at, 0xCCCD
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11664c: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116650: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x116650u;
    {
        const bool branch_taken_0x116650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116650u;
        // 0x116654: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116650) {
            ctx->pc = 0x1166A0u;
            goto label_1166a0;
        }
    }
label_116658:
    // 0x116658: 0x3c013fe6  lui         $at, 0x3FE6
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x11665c: 0x34216666  ori         $at, $at, 0x6666
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x116660: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116664: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x116664u;
    {
        const bool branch_taken_0x116664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116664u;
        // 0x116668: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116664) {
            ctx->pc = 0x1166A0u;
            goto label_1166a0;
        }
    }
label_11666c:
    // 0x11666c: 0x3c014000  lui         $at, 0x4000
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x116670: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116674: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116674u;
    {
        const bool branch_taken_0x116674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116674u;
        // 0x116678: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116674) {
            ctx->pc = 0x1166A0u;
            goto label_1166a0;
        }
    }
label_11667c:
    // 0x11667c: 0x3c01400c  lui         $at, 0x400C
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x116680: 0x3421cccd  ori         $at, $at, 0xCCCD
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x116684: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116688: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116688u;
    {
        const bool branch_taken_0x116688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116688u;
        // 0x11668c: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116688) {
            ctx->pc = 0x1166A0u;
            goto label_1166a0;
        }
    }
label_116690:
    // 0x116690: 0x3c014020  lui         $at, 0x4020
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x116694: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116698: 0x0  nop
    // NOP
    // 0x11669c: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x11669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_1166a0:
    // 0x1166a0: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x1166a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1166a4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166a8: 0xc0560a2  jal         func_158288
    SET_GPR_U32(ctx, 31, 0x1166B0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166A8u;
    // 0x1166ac: 0x26300580  addiu       $s0, $s1, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1166A8u, 0x1166B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1166b0:
    // 0x1166b0: 0x200902d  daddu       $s2, $s0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166b4: 0x3c013fc0  lui         $at, 0x3FC0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1166b8: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1166bc: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166c0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1166c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1166c4: 0x3c013dcc  lui         $at, 0x3DCC
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1166c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1166cc: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1166d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1166d4: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1166d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1166d8: 0xc07dfac  jal         func_1F7EB0
    SET_GPR_U32(ctx, 31, 0x1166E0u);
    ctx->pc = 0x1166DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166D8u;
    // 0x1166dc: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0MagnitudeSqXZ_0x1f7eb0, 0x1f7eb0u, 0x1166e0u)) {
        return;
    }
label_1166e0:
    // 0x1166e0: 0x3c013db8  lui         $at, 0x3DB8
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1166e4: 0x342151ec  ori         $at, $at, 0x51EC
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1166e8: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1166ec: 0x0  nop
    // NOP
    // 0x1166f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1166f4: 0x0  nop
    // NOP
    // 0x1166f8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1166F8u;
    {
        const bool branch_taken_0x1166f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1166f8) {
            ctx->pc = 0x1166FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1166F8u;
            // 0x1166fc: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11671Cu;
            goto label_11671c;
        }
    }
    // 0x116700: 0x44800000  mtc1        $zero, $f0
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116704: 0x0  nop
    // NOP
    // 0x116708: 0x4600a834  c.lt.s      $f21, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11670c: 0x0  nop
    // NOP
    // 0x116710: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116710u;
    {
        const bool branch_taken_0x116710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116710) {
            ctx->pc = 0x116714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116710u;
            // 0x116714: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116718u;
            goto label_116718;
        }
    }
label_116718:
    // 0x116718: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x116718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11671c:
    // 0x11671c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11671cu;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_gene_rate_half");
        if (hook) hook(rdram, ctx, runtime);
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    } else {
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    }
    // 0x116720: 0x3c013ec9  lui         $at, 0x3EC9
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x116724: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x116728: 0x44816800  mtc1        $at, $f13
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11672c: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x11672cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x116730: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x116734: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116738: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11673c: 0x4480b000  mtc1        $zero, $f22
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x116740: 0xc0b680e  jal         func_2DA038
    SET_GPR_U32(ctx, 31, 0x116748u);
    ctx->pc = 0x116744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116740u;
    // 0x116744: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Turn_dest_0x2da038, 0x2da038u, 0x116748u)) {
        return;
    }
label_116748:
    // 0x116748: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x116748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11674c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x116750: 0x46000b06  mov.s       $f12, $f1
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x116754: 0xc07df52  jal         func_1F7D48
    SET_GPR_U32(ctx, 31, 0x11675Cu);
    ctx->pc = 0x116758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116754u;
    // 0x116758: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Adjust_theta_0x1f7d48, 0x1f7d48u, 0x11675cu)) {
        return;
    }
label_11675c:
    // 0x11675c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x11675cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x116760: 0xc0493b0  jal         func_124EC0
    SET_GPR_U32(ctx, 31, 0x116768u);
    ctx->pc = 0x116764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116760u;
    // 0x116764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00124EC0_0x124ec0, 0x124ec0u, 0x116768u)) {
        return;
    }
label_116768:
    // 0x116768: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x116770u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116768u;
    // 0x11676c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x116768u, 0x116770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_116770:
    // 0x116770: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116774: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x11677Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116774u;
    // 0x116778: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x116774u, 0x11677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11677c:
    // 0x11677c: 0xe6350338  swc1        $f21, 0x338($s1)
    ctx->pc = 0x11677cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    // 0x116780: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x116784: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x11678Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116784u;
    // 0x116788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x116784u, 0x11678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11678c:
    // 0x11678c: 0xc62115c0  lwc1        $f1, 0x15C0($s1)
    ctx->pc = 0x11678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116790: 0x4601b034  c.lt.s      $f22, $f1
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116794: 0x0  nop
    // NOP
    // 0x116798: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x116798u;
    {
        const bool branch_taken_0x116798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116798) {
            ctx->pc = 0x11679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116798u;
            // 0x11679c: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1167B0u;
            goto label_1167b0;
        }
    }
    // 0x1167a0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1167a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1167a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1167a4u;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_gene_rate_half");
        if (hook) hook(rdram, ctx, runtime);
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    } else {
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    }
    // 0x1167a8: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x1167a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
    // 0x1167ac: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1167acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1167b0:
    // 0x1167b0: 0xc07dfac  jal         func_1F7EB0
    SET_GPR_U32(ctx, 31, 0x1167B8u);
    ctx->pc = 0x1167B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167B0u;
    // 0x1167b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0MagnitudeSqXZ_0x1f7eb0, 0x1f7eb0u, 0x1167b8u)) {
        return;
    }
label_1167b8:
    // 0x1167b8: 0x46000046  mov.s       $f1, $f0
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1167bc: 0x3c013e80  lui         $at, 0x3E80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1167c0: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1167c4: 0x0  nop
    // NOP
    // 0x1167c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1167cc: 0x0  nop
    // NOP
    // 0x1167d0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1167D0u;
    {
        const bool branch_taken_0x1167d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1167d0) {
            ctx->pc = 0x1167D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1167D0u;
            // 0x1167d4: 0xc6200598  lwc1        $f0, 0x598($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1167F8u;
            goto label_1167f8;
        }
    }
    // 0x1167d8: 0xc62015c0  lwc1        $f0, 0x15C0($s1)
    ctx->pc = 0x1167d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1167dc: 0x46160036  c.le.s      $f0, $f22
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1167e0: 0x0  nop
    // NOP
    // 0x1167e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1167E4u;
    {
        const bool branch_taken_0x1167e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1167E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167E4u;
        // 0x1167e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167e4) {
            ctx->pc = 0x1167F4u;
            goto label_1167f4;
        }
    }
    // 0x1167ec: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1167ECu;
    {
        const bool branch_taken_0x1167ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167ECu;
        // 0x1167f0: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167ec) {
            ctx->pc = 0x1169B0u;
            goto label_1169b0;
        }
    }
label_1167f4:
    // 0x1167f4: 0xc6200598  lwc1        $f0, 0x598($s1)
    ctx->pc = 0x1167f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1167f8:
    // 0x1167f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1167fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116800: 0x0  nop
    // NOP
    // 0x116804: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x116804u;
    {
        const bool branch_taken_0x116804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116804u;
        // 0x116808: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116804) {
            ctx->pc = 0x116814u;
            goto label_116814;
        }
    }
    // 0x11680c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x11680Cu;
    {
        const bool branch_taken_0x11680c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11680Cu;
        // 0x116810: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11680c) {
            ctx->pc = 0x1169B0u;
            goto label_1169b0;
        }
    }
label_116814:
    // 0x116814: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x116814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x116818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x116818u;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_countdown_self");
        if (hook) hook(rdram, ctx, runtime);
    } else {
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    }
    // 0x11681c: 0x21c00  sll         $v1, $v0, 16
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x116820: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x116820u;
    {
        const bool branch_taken_0x116820 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x116824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116820u;
        // 0x116824: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116820) {
            ctx->pc = 0x1169B0u;
            goto label_1169b0;
        }
    }
    // 0x116828: 0x2402000a  addiu       $v0, $zero, 0xA
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11682c: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x116830: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x116830u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x116834: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x116838: 0x220382d  daddu       $a3, $s1, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11683c: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116840: 0x240600f6  addiu       $a2, $zero, 0xF6
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x116844: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116848: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11684c: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116850: 0xc0b2e92  jal         func_2CBA48
    SET_GPR_U32(ctx, 31, 0x116858u);
    ctx->pc = 0x116854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116850u;
    // 0x116854: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CBA48_0x2cba48, 0x2cba48u, 0x116858u)) {
        return;
    }
label_116858:
    // 0x116858: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x116858u;
    {
        const bool branch_taken_0x116858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116858u;
        // 0x11685c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116858) {
            ctx->pc = 0x1169B4u;
            goto label_1169b4;
        }
    }
label_116860:
    // 0x116860: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x116860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x116864: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116868: 0x44806000  mtc1        $zero, $f12
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11686c: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116870: 0x8c4508f8  lw          $a1, 0x8F8($v0)
    ctx->pc = 0x116870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2296)));
    // 0x116874: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116878: 0x8c4608fc  lw          $a2, 0x8FC($v0)
    ctx->pc = 0x116878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2300)));
    // 0x11687c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116880: 0xa22821  addu        $a1, $a1, $v0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x116884: 0xc0aa15e  jal         func_2A8578
    SET_GPR_U32(ctx, 31, 0x11688Cu);
    ctx->pc = 0x116888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116884u;
    // 0x116888: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A8578_0x2a8578, 0x2a8578u, 0x11688cu)) {
        return;
    }
label_11688c:
    // 0x11688c: 0x3c100060  lui         $s0, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x116890: 0x2610ee00  addiu       $s0, $s0, -0x1200
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x116894: 0xc0b29c6  jal         func_2CA718
    SET_GPR_U32(ctx, 31, 0x11689Cu);
    ctx->pc = 0x116898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116894u;
    // 0x116898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_DieDemoStart_0x2ca718, 0x2ca718u, 0x11689cu)) {
        return;
    }
label_11689c:
    // 0x11689c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168a0: 0xc04b0d2  jal         func_12C348
    SET_GPR_U32(ctx, 31, 0x1168A8u);
    ctx->pc = 0x1168A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168A0u;
    // 0x1168a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0012C348_0x12c348, 0x12c348u, 0x1168a8u)) {
        return;
    }
label_1168a8:
    // 0x1168a8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168ac: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1168b0: 0x240600f7  addiu       $a2, $zero, 0xF7
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x1168b4: 0x220382d  daddu       $a3, $s1, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168b8: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168bc: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168c0: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168c4: 0xc0b2e92  jal         func_2CBA48
    SET_GPR_U32(ctx, 31, 0x1168CCu);
    ctx->pc = 0x1168C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168C4u;
    // 0x1168c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CBA48_0x2cba48, 0x2cba48u, 0x1168ccu)) {
        return;
    }
label_1168cc:
    // 0x1168cc: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1168ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1168d0: 0x24630001  addiu       $v1, $v1, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1168d4: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1168d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_1168d8:
    // 0x1168d8: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x1168d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x1168dc: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168e0: 0x34420008  ori         $v0, $v0, 0x8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1168e4: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x1168ECu);
    ctx->pc = 0x1168E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168E4u;
    // 0x1168e8: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1168E4u, 0x1168ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1168ec:
    // 0x1168ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1168ECu;
    {
        const bool branch_taken_0x1168ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1168F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168ECu;
        // 0x1168f0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168ec) {
            ctx->pc = 0x116904u;
            goto label_116904;
        }
    }
    // 0x1168f4: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x1168f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x1168f8: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x1168f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x1168fc: 0x34420008  ori         $v0, $v0, 0x8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x116900: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x116900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
label_116904:
    // 0x116904: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116908: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11690c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116910: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x116918u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116910u;
    // 0x116914: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x116910u, 0x116918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_116918:
    // 0x116918: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11691c: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x116924u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11691Cu;
    // 0x116920: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11691Cu, 0x116924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_116924:
    // 0x116924: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x116924u;
    {
        const bool branch_taken_0x116924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116924u;
        // 0x116928: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116924) {
            ctx->pc = 0x1169B4u;
            goto label_1169b4;
        }
    }
label_11692c:
    // 0x11692c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x116930: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116934: 0x44806000  mtc1        $zero, $f12
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116938: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11693c: 0x8c4508f0  lw          $a1, 0x8F0($v0)
    ctx->pc = 0x11693cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2288)));
    // 0x116940: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116944: 0x8c4608f4  lw          $a2, 0x8F4($v0)
    ctx->pc = 0x116944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2292)));
    // 0x116948: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11694c: 0xa22821  addu        $a1, $a1, $v0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x116950: 0xc0aa15e  jal         func_2A8578
    SET_GPR_U32(ctx, 31, 0x116958u);
    ctx->pc = 0x116954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116950u;
    // 0x116954: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A8578_0x2a8578, 0x2a8578u, 0x116958u)) {
        return;
    }
label_116958:
    // 0x116958: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x116958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11695c: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116960: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x116960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_116964:
    // 0x116964: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x11696Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116964u;
    // 0x116968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x116964u, 0x11696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11696c:
    // 0x11696c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11696Cu;
    {
        const bool branch_taken_0x11696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11696Cu;
        // 0x116970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11696c) {
            ctx->pc = 0x116990u;
            goto label_116990;
        }
    }
    // 0x116974: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116978: 0xc0493d8  jal         func_124F60
    SET_GPR_U32(ctx, 31, 0x116980u);
    ctx->pc = 0x11697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116978u;
    // 0x11697c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &pl00_clearMotionCam_0x124f60, 0x124f60u, 0x116980u)) {
        return;
    }
label_116980:
    // 0x116980: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x116980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x116984: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x116984u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x116988: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x116988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11698c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11698cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_116990:
    // 0x116990: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116994: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116998: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11699c: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x1169A4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11699Cu;
    // 0x1169a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11699Cu, 0x1169A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1169a4:
    // 0x1169a4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169a8: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x1169B0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169A8u;
    // 0x1169ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1169A8u, 0x1169B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1169b0:
    // 0x1169b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1169b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1169b4:
    // 0x1169b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1169b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1169b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1169b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1169bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1169bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1169c0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1169c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1169c4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1169c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1169c8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1169c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1169cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1169CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1169D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169CCu;
        // 0x1169d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1169CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1169d4: 0x0  nop
    // NOP
    ctx->pc = 0x1169d8u;
}