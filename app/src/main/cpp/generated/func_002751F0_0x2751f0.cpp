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

// Function: func_002751F0
// Address: 0x2751f0 - 0x275308
void func_002751F0_0x2751f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002751F0_0x2751f0");
#endif

    switch (ctx->pc) {
        case 0x275298u: goto label_275298;
        case 0x2752ccu: goto label_2752cc;
        case 0x2752ecu: goto label_2752ec;
        default: break;
    }

    ctx->pc = 0x2751f0u;

    // 0x2751f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2751f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2751f4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2751f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2751f8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2751f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2751fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2751fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275200: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x275200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x275204: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x275204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x275208: 0x920217c2  lbu         $v0, 0x17C2($s0)
    ctx->pc = 0x275208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6082)));
    // 0x27520c: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x27520Cu;
    {
        const bool branch_taken_0x27520c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27520c) {
            ctx->pc = 0x275210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27520Cu;
            // 0x275210: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2752F4u;
            goto label_2752f4;
        }
    }
    ctx->pc = 0x275214u;
    // 0x275214: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x275214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x275218: 0xc6010494  lwc1        $f1, 0x494($s0)
    ctx->pc = 0x275218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27521c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x27521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275220: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x275220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275224: 0x0  nop
    ctx->pc = 0x275224u;
    // NOP
    // 0x275228: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x275228u;
    {
        const bool branch_taken_0x275228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275228) {
            ctx->pc = 0x27522Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275228u;
            // 0x27522c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2752F4u;
            goto label_2752f4;
        }
    }
    ctx->pc = 0x275230u;
    // 0x275230: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x275230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x275234: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x275234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x275238: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x275238u;
    {
        const bool branch_taken_0x275238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275238u;
        // 0x27523c: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275238) {
            ctx->pc = 0x27525Cu;
            goto label_27525c;
        }
    }
    ctx->pc = 0x275240u;
    // 0x275240: 0xc6011710  lwc1        $f1, 0x1710($s0)
    ctx->pc = 0x275240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275248: 0x0  nop
    ctx->pc = 0x275248u;
    // NOP
    // 0x27524c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27524cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275250: 0x0  nop
    ctx->pc = 0x275250u;
    // NOP
    // 0x275254: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x275254u;
    {
        const bool branch_taken_0x275254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275254) {
            ctx->pc = 0x275258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275254u;
            // 0x275258: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2752F4u;
            goto label_2752f4;
        }
    }
    ctx->pc = 0x27525Cu;
label_27525c:
    // 0x27525c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x27525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x275260: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x275260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275264: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275268: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x275268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x27526c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x275270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x275270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275274: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x275274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x275278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x275278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27527c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x27527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x275280: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x275280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x275284: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x275284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x275288: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x275288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27528c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x27528cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x275290: 0xc04c784  jal         func_131E10
    ctx->pc = 0x275290u;
    SET_GPR_U32(ctx, 31, 0x275298u);
    ctx->pc = 0x275294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275290u;
    // 0x275294: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x275290u, 0x275298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275298u;
label_275298:
    // 0x275298: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x275298u;
    {
        const bool branch_taken_0x275298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275298u;
        // 0x27529c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275298) {
            ctx->pc = 0x2752F0u;
            goto label_2752f0;
        }
    }
    ctx->pc = 0x2752A0u;
    // 0x2752a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2752a4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2752a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2752a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2752A8u;
    {
        const bool branch_taken_0x2752a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752A8u;
        // 0x2752ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752a8) {
            ctx->pc = 0x2752F0u;
            goto label_2752f0;
        }
    }
    ctx->pc = 0x2752B0u;
    // 0x2752b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2752b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2752b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2752b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2752b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2752b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752bc: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x2752bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x2752c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2752c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752c4: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x2752C4u;
    SET_GPR_U32(ctx, 31, 0x2752CCu);
    ctx->pc = 0x2752C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2752C4u;
    // 0x2752c8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x2752C4u, 0x2752CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752CCu;
label_2752cc:
    // 0x2752cc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2752ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2752d0: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x2752d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2752d4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2752d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2752d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2752d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2752dc: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2752dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2752e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2752e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752e4: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x2752E4u;
    SET_GPR_U32(ctx, 31, 0x2752ECu);
    ctx->pc = 0x2752E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2752E4u;
    // 0x2752e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x2752E4u, 0x2752ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752ECu;
label_2752ec:
    // 0x2752ec: 0xa21217c2  sb          $s2, 0x17C2($s0)
    ctx->pc = 0x2752ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6082), (uint8_t)GPR_U32(ctx, 18));
label_2752f0:
    // 0x2752f0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2752f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2752f4:
    // 0x2752f4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2752f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2752f8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2752f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2752fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2752fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275300: 0x3e00008  jr          $ra
    ctx->pc = 0x275300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275300u;
        // 0x275304: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275308u;
}
