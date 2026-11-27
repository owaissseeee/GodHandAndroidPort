#include "godhand/frame_patches.h"
#include "godhand/cheats_engine.h"
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

// Function: func_00145238
// Address: 0x145238 - 0x145410
void func_00145238_0x145238(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00145238_0x145238");
#endif

    if (__builtin_expect(ctx->pc != 0x145238u, 0)) {
        switch (ctx->pc) {
            case 0x14528cu: goto label_14528c;
            case 0x14529cu: goto label_14529c;
            case 0x1452acu: goto label_1452ac;
            case 0x1452bcu: goto label_1452bc;
            case 0x1452ccu: goto label_1452cc;
            case 0x1452d8u: goto label_1452d8;
            case 0x1452e4u: goto label_1452e4;
            case 0x145334u: goto label_145334;
            case 0x145350u: goto label_145350;
            case 0x145364u: goto label_145364;
            case 0x1453b0u: goto label_1453b0;
            case 0x1453c4u: goto label_1453c4;
            case 0x1453d4u: goto label_1453d4;
            case 0x1453e0u: goto label_1453e0;
            case 0x1453e8u: goto label_1453e8;
            default: break;
        }
    }


    // 0x145238: 0x27bdffa0  addiu       $sp, $sp, -0x60
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14523c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x145240: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x145240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x145244: 0x80982d  daddu       $s3, $a0, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145248: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x145248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14524c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145254: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x145254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x145258: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x145258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14525c: 0x8663041e  lh          $v1, 0x41E($s3)
    ctx->pc = 0x14525cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1054)));
    // 0x145260: 0x2c620005  sltiu       $v0, $v1, 0x5
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x145264: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x145264u;
    {
        const bool branch_taken_0x145264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145264u;
        // 0x145268: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145264) {
            ctx->pc = 0x1452CCu;
            goto label_1452cc;
        }
    }
    // 0x14526c: 0x31880  sll         $v1, $v1, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145270: 0x2442e7e0  addiu       $v0, $v0, -0x1820
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961120));
    // 0x145274: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145278: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x145278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14527c: 0x800008  jr          $a0
    ctx->pc = 0x14527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145284u: goto label_145284;
            case 0x145294u: goto label_145294;
            case 0x1452A4u: goto label_1452a4;
            case 0x1452B4u: goto label_1452b4;
            case 0x1452C4u: goto label_1452c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14527Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_145284:
    // 0x145284: 0xc051504  jal         func_145410
    SET_GPR_U32(ctx, 31, 0x14528Cu);
    ctx->pc = 0x145288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145284u;
    // 0x145288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00145410_0x145410, 0x145410u, 0x14528cu)) {
        return;
    }
label_14528c:
    // 0x14528c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14528Cu;
    {
        const bool branch_taken_0x14528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14528Cu;
        // 0x145290: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14528c) {
            ctx->pc = 0x1452D0u;
            goto label_1452d0;
        }
    }
label_145294:
    // 0x145294: 0xc051518  jal         func_145460
    SET_GPR_U32(ctx, 31, 0x14529Cu);
    ctx->pc = 0x145298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145294u;
    // 0x145298: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00145460_0x145460, 0x145460u, 0x14529cu)) {
        return;
    }
label_14529c:
    // 0x14529c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14529Cu;
    {
        const bool branch_taken_0x14529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14529Cu;
        // 0x1452a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14529c) {
            ctx->pc = 0x1452D0u;
            goto label_1452d0;
        }
    }
label_1452a4:
    // 0x1452a4: 0xc051604  jal         func_145810
    SET_GPR_U32(ctx, 31, 0x1452ACu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452A4u;
    // 0x1452a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145810u, 0x1452A4u, 0x1452ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1452ac:
    // 0x1452ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1452ACu;
    {
        const bool branch_taken_0x1452ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452ACu;
        // 0x1452b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452ac) {
            ctx->pc = 0x1452D0u;
            goto label_1452d0;
        }
    }
label_1452b4:
    // 0x1452b4: 0xc0517f2  jal         func_145FC8
    SET_GPR_U32(ctx, 31, 0x1452BCu);
    ctx->pc = 0x1452B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452B4u;
    // 0x1452b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00145FC8_0x145fc8, 0x145fc8u, 0x1452bcu)) {
        return;
    }
label_1452bc:
    // 0x1452bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1452BCu;
    {
        const bool branch_taken_0x1452bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452BCu;
        // 0x1452c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452bc) {
            ctx->pc = 0x1452D0u;
            goto label_1452d0;
        }
    }
label_1452c4:
    // 0x1452c4: 0xc051864  jal         func_146190
    SET_GPR_U32(ctx, 31, 0x1452CCu);
    ctx->pc = 0x1452C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452C4u;
    // 0x1452c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00146190_0x146190, 0x146190u, 0x1452ccu)) {
        return;
    }
label_1452cc:
    // 0x1452cc: 0x802d  daddu       $s0, $zero, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1452d0:
    // 0x1452d0: 0x24110050  addiu       $s1, $zero, 0x50
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1452d4: 0x2112018  mult        $a0, $s0, $s1
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1452d8:
    // 0x1452d8: 0x24840100  addiu       $a0, $a0, 0x100
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1452dc: 0xc0aaa90  jal         func_2AAA40
    SET_GPR_U32(ctx, 31, 0x1452E4u);
    ctx->pc = 0x1452E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452DCu;
    // 0x1452e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_move_0x2aaa40, 0x2aaa40u, 0x1452e4u)) {
        return;
    }
label_1452e4:
    // 0x1452e4: 0x26020001  addiu       $v0, $s0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1452e8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1452ec: 0x2e030005  sltiu       $v1, $s0, 0x5
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1452f0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1452F0u;
    {
        const bool branch_taken_0x1452f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1452f0) {
            ctx->pc = 0x1452F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1452F0u;
            // 0x1452f4: 0x2112018  mult        $a0, $s0, $s1 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1452D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1452d8;
        }
    }
    // 0x1452f8: 0x8663041e  lh          $v1, 0x41E($s3)
    ctx->pc = 0x1452f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1054)));
    // 0x1452fc: 0x24020002  addiu       $v0, $zero, 0x2
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145300: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x145300u;
    {
        const bool branch_taken_0x145300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x145304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145300u;
        // 0x145304: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145300) {
            ctx->pc = 0x1453ECu;
            goto label_1453ec;
        }
    }
    kamite::rouletteSeenHook(rdram, ctx, runtime);
    // 0x145308: 0x966204d0  lhu         $v0, 0x4D0($s3)
    ctx->pc = 0x145308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1232)));
    // 0x14530c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14530cu;
    if (godhand::CheatsEngine::instance().isFreezeRoulette()) {
        SET_GPR_S32(ctx, 2, 102);
    } else if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_roulette_dial");
        if (hook) hook(rdram, ctx, runtime);
    } else {
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    }
    // 0x145310: 0x21c00  sll         $v1, $v0, 16
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x145314: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x145314u;
    {
        const bool branch_taken_0x145314 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x145318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145314u;
        // 0x145318: 0xa66204d0  sh          $v0, 0x4D0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1232), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145314) {
            ctx->pc = 0x145320u;
            goto label_145320;
        }
    }
    // 0x14531c: 0xa66004d0  sh          $zero, 0x4D0($s3)
    ctx->pc = 0x14531cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1232), (uint16_t)GPR_U32(ctx, 0));
label_145320:
    // 0x145320: 0x26710430  addiu       $s1, $s3, 0x430
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1072));
    // 0x145324: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145328: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14532c: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x145334u);
    ctx->pc = 0x145330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14532Cu;
    // 0x145330: 0x26720480  addiu       $s2, $s3, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1152));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2aa410u, 0x145334u)) {
        return;
    }
label_145334:
    // 0x145334: 0x3c100042  lui         $s0, 0x42
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
    // 0x145338: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14533c: 0xc615e898  lwc1        $f21, -0x1768($s0)
    ctx->pc = 0x14533cu;
    { uint32_t bits = FAST_READ32(0x41E898u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x145340: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145344: 0x2610e898  addiu       $s0, $s0, -0x1768
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961304));
    // 0x145348: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x145350u);
    ctx->pc = 0x14534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145348u;
    // 0x14534c: 0xe4550038  swc1        $f21, 0x38($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2aa410u, 0x145350u)) {
        return;
    }
label_145350:
    // 0x145350: 0xc6140004  lwc1        $f20, 0x4($s0)
    ctx->pc = 0x145350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x145354: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145358: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14535c: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x145364u);
    ctx->pc = 0x145360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14535Cu;
    // 0x145360: 0xe454003c  swc1        $f20, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2aa410u, 0x145364u)) {
        return;
    }
label_145364:
    // 0x145364: 0x866504d0  lh          $a1, 0x4D0($s3)
    ctx->pc = 0x145364u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1232)));
    // 0x145368: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x14536c: 0x8466d70c  lh          $a2, -0x28F4($v1)
    ctx->pc = 0x14536cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x3BD70Cu));
    // 0x145370: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145374: 0x44850000  mtc1        $a1, $f0
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145378: 0x0  nop
    // NOP
    // 0x14537c: 0x46800020  cvt.s.w     $f0, $f0
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x145380: 0x3c0140c8  lui         $at, 0x40C8
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x145384: 0x3421f5c3  ori         $at, $at, 0xF5C3
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x145388: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14538c: 0x44861000  mtc1        $a2, $f2
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145390: 0x0  nop
    // NOP
    // 0x145394: 0x468010a0  cvt.s.w     $f2, $f2
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x145398: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14539c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1453a0: 0x0  nop
    // NOP
    // 0x1453a4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x1453a8: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x1453B0u);
    ctx->pc = 0x1453ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1453A8u;
    // 0x1453ac: 0xe4400048  swc1        $f0, 0x48($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2aa410u, 0x1453b0u)) {
        return;
    }
label_1453b0:
    // 0x1453b0: 0x240330f2  addiu       $v1, $zero, 0x30F2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12530));
    // 0x1453b4: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453b8: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x1453b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x1453bc: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x1453C4u);
    ctx->pc = 0x1453C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1453BCu;
    // 0x1453c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2aa410u, 0x1453c4u)) {
        return;
    }
label_1453c4:
    // 0x1453c4: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453c8: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453cc: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x1453D4u);
    ctx->pc = 0x1453D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1453CCu;
    // 0x1453d0: 0xe4550038  swc1        $f21, 0x38($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2aa410u, 0x1453d4u)) {
        return;
    }
label_1453d4:
    // 0x1453d4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453d8: 0xc0aaa90  jal         func_2AAA40
    SET_GPR_U32(ctx, 31, 0x1453E0u);
    ctx->pc = 0x1453DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1453D8u;
    // 0x1453dc: 0xe454003c  swc1        $f20, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_move_0x2aaa40, 0x2aaa40u, 0x1453e0u)) {
        return;
    }
label_1453e0:
    // 0x1453e0: 0xc0aaa90  jal         func_2AAA40
    SET_GPR_U32(ctx, 31, 0x1453E8u);
    ctx->pc = 0x1453E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1453E0u;
    // 0x1453e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_move_0x2aaa40, 0x2aaa40u, 0x1453e8u)) {
        return;
    }
label_1453e8:
    // 0x1453e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1453e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1453ec:
    // 0x1453ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1453ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1453f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1453f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1453f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1453f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1453f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1453f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1453fc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1453fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x145400: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x145400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x145404: 0x3e00008  jr          $ra
    ctx->pc = 0x145404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145404u;
        // 0x145408: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x14540c: 0x0  nop
    // NOP
    ctx->pc = 0x145410u;
}