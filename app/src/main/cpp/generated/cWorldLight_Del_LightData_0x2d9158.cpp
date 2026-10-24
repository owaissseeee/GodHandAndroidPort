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

// Function: cWorldLight_Del_LightData
// Address: 0x2d9158 - 0x2d9360
void cWorldLight_Del_LightData_0x2d9158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_Del_LightData_0x2d9158");
#endif

    switch (ctx->pc) {
        case 0x2d9188u: goto label_2d9188;
        case 0x2d91e8u: goto label_2d91e8;
        case 0x2d92b0u: goto label_2d92b0;
        default: break;
    }

    ctx->pc = 0x2d9158u;

    // 0x2d9158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d915c: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x2d915cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2d9160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d9160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d9164: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x2d9164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x2d9168: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d9168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d916c: 0x11c00078  beqz        $t6, . + 4 + (0x78 << 2)
    ctx->pc = 0x2D916Cu;
    {
        const bool branch_taken_0x2d916c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D916Cu;
        // 0x2d9170: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d916c) {
            ctx->pc = 0x2D9350u;
            goto label_2d9350;
        }
    }
    ctx->pc = 0x2D9174u;
    // 0x2d9174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d9174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9178: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x2d9178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d917c: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x2d917cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d9180: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x2d9180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d9184: 0x0  nop
    ctx->pc = 0x2d9184u;
    // NOP
label_2d9188:
    // 0x2d9188: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2d9188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d918c: 0x94620080  lhu         $v0, 0x80($v1)
    ctx->pc = 0x2d918cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2d9190: 0x104f006b  beq         $v0, $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x2D9190u;
    {
        const bool branch_taken_0x2d9190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2D9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9190u;
        // 0x2d9194: 0x248d0001  addiu       $t5, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9190) {
            ctx->pc = 0x2D9340u;
            goto label_2d9340;
        }
    }
    ctx->pc = 0x2D9198u;
    // 0x2d9198: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x2d9198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x2d919c: 0x544e0069  bnel        $v0, $t6, . + 4 + (0x69 << 2)
    ctx->pc = 0x2D919Cu;
    {
        const bool branch_taken_0x2d919c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x2d919c) {
            ctx->pc = 0x2D91A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D919Cu;
            // 0x2d91a0: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9344u;
            goto label_2d9344;
        }
    }
    ctx->pc = 0x2D91A4u;
    // 0x2d91a4: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x2d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2d91a8: 0x54500066  bnel        $v0, $s0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2D91A8u;
    {
        const bool branch_taken_0x2d91a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d91a8) {
            ctx->pc = 0x2D91ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D91A8u;
            // 0x2d91ac: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9344u;
            goto label_2d9344;
        }
    }
    ctx->pc = 0x2D91B0u;
    // 0x2d91b0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2d91b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91b4: 0x294200ff  slti        $v0, $t2, 0xFF
    ctx->pc = 0x2d91b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2d91b8: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2D91B8u;
    {
        const bool branch_taken_0x2d91b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91B8u;
        // 0x2d91bc: 0xa46f0080  sh          $t7, 0x80($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91b8) {
            ctx->pc = 0x2D9334u;
            goto label_2d9334;
        }
    }
    ctx->pc = 0x2D91C0u;
    // 0x2d91c0: 0x1a61818  mult        $v1, $t5, $a2
    ctx->pc = 0x2d91c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d91c4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2d91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d91c8: 0x94430080  lhu         $v1, 0x80($v0)
    ctx->pc = 0x2d91c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2d91cc: 0x506f005a  beql        $v1, $t7, . + 4 + (0x5A << 2)
    ctx->pc = 0x2D91CCu;
    {
        const bool branch_taken_0x2d91cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 15));
        if (branch_taken_0x2d91cc) {
            ctx->pc = 0x2D91D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D91CCu;
            // 0x2d91d0: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9338u;
            goto label_2d9338;
        }
    }
    ctx->pc = 0x2D91D4u;
    // 0x2d91d4: 0x240c0070  addiu       $t4, $zero, 0x70
    ctx->pc = 0x2d91d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d91d8: 0x241900ff  addiu       $t9, $zero, 0xFF
    ctx->pc = 0x2d91d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d91dc: 0x241800ff  addiu       $t8, $zero, 0xFF
    ctx->pc = 0x2d91dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d91e0: 0x14c1018  mult        $v0, $t2, $t4
    ctx->pc = 0x2d91e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d91e4: 0x0  nop
    ctx->pc = 0x2d91e4u;
    // NOP
label_2d91e8:
    // 0x2d91e8: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x2d91e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d91ec: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2d91ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91f0: 0x250800f0  addiu       $t0, $t0, 0xF0
    ctx->pc = 0x2d91f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 240));
    // 0x2d91f4: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x2d91f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x2d91f8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2d91f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d91fc: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x2d91fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2d9200: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x2d9200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2d9204: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x2d9204u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9208: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x2d9208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2d920c: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x2d920cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d9210: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d9214: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9214u;
    {
        const bool branch_taken_0x2d9214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9214u;
        // 0x2d9218: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9214) {
            ctx->pc = 0x2D9234u;
            goto label_2d9234;
        }
    }
    ctx->pc = 0x2D921Cu;
    // 0x2d921c: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x2d921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9220: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2d9220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2d9224: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2d9224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9228: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d9228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d922c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9230: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d9230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2d9234:
    // 0x2d9234: 0x24e30020  addiu       $v1, $a3, 0x20
    ctx->pc = 0x2d9234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2d9238: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x2d9238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2d923c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D923Cu;
    {
        const bool branch_taken_0x2d923c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d923c) {
            ctx->pc = 0x2D9240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D923Cu;
            // 0x2d9240: 0x24e30030  addiu       $v1, $a3, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9260u;
            goto label_2d9260;
        }
    }
    ctx->pc = 0x2D9244u;
    // 0x2d9244: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x2d9244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9248: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x2d9248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x2d924c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9250: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d9250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d9254: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d9254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9258: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d9258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d925c: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x2d925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_2d9260:
    // 0x2d9260: 0x25020030  addiu       $v0, $t0, 0x30
    ctx->pc = 0x2d9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x2d9264: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9264u;
    {
        const bool branch_taken_0x2d9264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9264) {
            ctx->pc = 0x2D9268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9264u;
            // 0x2d9268: 0xc5000040  lwc1        $f0, 0x40($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9288u;
            goto label_2d9288;
        }
    }
    ctx->pc = 0x2D926Cu;
    // 0x2d926c: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x2d926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9270: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x2d9270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x2d9274: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d9274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9278: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d9278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d927c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9280: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d9280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d9284: 0xc5000040  lwc1        $f0, 0x40($t0)
    ctx->pc = 0x2d9284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d9288:
    // 0x2d9288: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x2d9288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2d928c: 0x24e4004c  addiu       $a0, $a3, 0x4C
    ctx->pc = 0x2d928cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 76));
    // 0x2d9290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d9290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9294: 0xe4e00040  swc1        $f0, 0x40($a3)
    ctx->pc = 0x2d9294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
    // 0x2d9298: 0x2503004c  addiu       $v1, $t0, 0x4C
    ctx->pc = 0x2d9298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 76));
    // 0x2d929c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2d929cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d92a0: 0xc5000044  lwc1        $f0, 0x44($t0)
    ctx->pc = 0x2d92a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d92a4: 0xe4e00044  swc1        $f0, 0x44($a3)
    ctx->pc = 0x2d92a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 68), bits); }
    // 0x2d92a8: 0xc5010048  lwc1        $f1, 0x48($t0)
    ctx->pc = 0x2d92a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d92ac: 0xe4e10048  swc1        $f1, 0x48($a3)
    ctx->pc = 0x2d92acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 72), bits); }
label_2d92b0:
    // 0x2d92b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d92b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d92b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d92b8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d92b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d92bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2d92c0: 0x14aafffb  bne         $a1, $t2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D92C0u;
    {
        const bool branch_taken_0x2d92c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x2D92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92C0u;
        // 0x2d92c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d92c0) {
            ctx->pc = 0x2D92B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d92b0;
        }
    }
    ctx->pc = 0x2D92C8u;
    // 0x2d92c8: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x2d92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x2d92cc: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2d92ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d92d0: 0x12b1818  mult        $v1, $t1, $t3
    ctx->pc = 0x2d92d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d92d4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2d92d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92d8: 0xace20054  sw          $v0, 0x54($a3)
    ctx->pc = 0x2d92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 2));
    // 0x2d92dc: 0x292400ff  slti        $a0, $t1, 0xFF
    ctx->pc = 0x2d92dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2d92e0: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x2d92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x2d92e4: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x2d92e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d92e8: 0xace20058  sw          $v0, 0x58($a3)
    ctx->pc = 0x2d92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 2));
    // 0x2d92ec: 0x9503005c  lhu         $v1, 0x5C($t0)
    ctx->pc = 0x2d92ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x2d92f0: 0xa4e3005c  sh          $v1, 0x5C($a3)
    ctx->pc = 0x2d92f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d92f4: 0x9502005e  lhu         $v0, 0x5E($t0)
    ctx->pc = 0x2d92f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 94)));
    // 0x2d92f8: 0xa4e2005e  sh          $v0, 0x5E($a3)
    ctx->pc = 0x2d92f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d92fc: 0x91030060  lbu         $v1, 0x60($t0)
    ctx->pc = 0x2d92fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x2d9300: 0xa0e30060  sb          $v1, 0x60($a3)
    ctx->pc = 0x2d9300u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9304: 0x91020061  lbu         $v0, 0x61($t0)
    ctx->pc = 0x2d9304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 97)));
    // 0x2d9308: 0xa0e20061  sb          $v0, 0x61($a3)
    ctx->pc = 0x2d9308u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d930c: 0x95030062  lhu         $v1, 0x62($t0)
    ctx->pc = 0x2d930cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 98)));
    // 0x2d9310: 0xa4e30062  sh          $v1, 0x62($a3)
    ctx->pc = 0x2d9310u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d9314: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9314u;
    {
        const bool branch_taken_0x2d9314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9314u;
        // 0x2d9318: 0xa4b90080  sh          $t9, 0x80($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9314) {
            ctx->pc = 0x2D9334u;
            goto label_2d9334;
        }
    }
    ctx->pc = 0x2D931Cu;
    // 0x2d931c: 0x12b1818  mult        $v1, $t1, $t3
    ctx->pc = 0x2d931cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d9320: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x2d9320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2d9324: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d9324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d9328: 0x94430080  lhu         $v1, 0x80($v0)
    ctx->pc = 0x2d9328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2d932c: 0x1478ffae  bne         $v1, $t8, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2D932Cu;
    {
        const bool branch_taken_0x2d932c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x2D9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D932Cu;
        // 0x2d9330: 0x14c1018  mult        $v0, $t2, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d932c) {
            ctx->pc = 0x2D91E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d91e8;
        }
    }
    ctx->pc = 0x2D9334u;
label_2d9334:
    // 0x2d9334: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2d9338:
    // 0x2d9338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d933c: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x2d933cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_2d9340:
    // 0x2d9340: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x2d9340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2d9344:
    // 0x2d9344: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x2d9344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d9348: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x2D9348u;
    {
        const bool branch_taken_0x2d9348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9348u;
        // 0x2d934c: 0x861018  mult        $v0, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9348) {
            ctx->pc = 0x2D9188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9188;
        }
    }
    ctx->pc = 0x2D9350u;
label_2d9350:
    // 0x2d9350: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d9350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9354: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x2d9354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9358: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9358u;
        // 0x2d935c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9360u;
}
