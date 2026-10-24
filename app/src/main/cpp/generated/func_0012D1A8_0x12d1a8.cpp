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

// Function: func_0012D1A8
// Address: 0x12d1a8 - 0x12d3c8
void func_0012D1A8_0x12d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012D1A8_0x12d1a8");
#endif

    switch (ctx->pc) {
        case 0x12d1f4u: goto label_12d1f4;
        case 0x12d204u: goto label_12d204;
        case 0x12d214u: goto label_12d214;
        case 0x12d228u: goto label_12d228;
        case 0x12d238u: goto label_12d238;
        case 0x12d258u: goto label_12d258;
        case 0x12d294u: goto label_12d294;
        case 0x12d2e0u: goto label_12d2e0;
        default: break;
    }

    ctx->pc = 0x12d1a8u;

    // 0x12d1a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12d1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12d1ac: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x12d1b0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12d1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x12d1b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12d1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x12d1bc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x12d1c0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x12d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x12d1c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12d1c8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x12d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x12d1cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12d1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12d1d0: 0x9e220008  lwu         $v0, 0x8($s1)
    ctx->pc = 0x12d1d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12d1d4: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x12d1d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x12d1d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12d1dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D1DCu;
    {
        const bool branch_taken_0x12d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1DCu;
        // 0x12d1e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1dc) {
            ctx->pc = 0x12D20Cu;
            goto label_12d20c;
        }
    }
    ctx->pc = 0x12D1E4u;
    // 0x12d1e4: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x12d1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x12d1e8: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x12d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x12d1ec: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x12D1ECu;
    SET_GPR_U32(ctx, 31, 0x12D1F4u);
    ctx->pc = 0x12D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D1ECu;
    // 0x12d1f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x12D1ECu, 0x12D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1F4u;
label_12d1f4:
    // 0x12d1f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12d1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1fc: 0xc051ec6  jal         func_147B18
    ctx->pc = 0x12D1FCu;
    SET_GPR_U32(ctx, 31, 0x12D204u);
    ctx->pc = 0x12D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D1FCu;
    // 0x12d200: 0x26260070  addiu       $a2, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B18u, 0x12D1FCu, 0x12D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D204u;
label_12d204:
    // 0x12d204: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12D204u;
    {
        const bool branch_taken_0x12d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D204u;
        // 0x12d208: 0x263500c0  addiu       $s5, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d204) {
            ctx->pc = 0x12D23Cu;
            goto label_12d23c;
        }
    }
    ctx->pc = 0x12D20Cu;
label_12d20c:
    // 0x12d20c: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x12D20Cu;
    SET_GPR_U32(ctx, 31, 0x12D214u);
    ctx->pc = 0x12D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D20Cu;
    // 0x12d210: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x12D20Cu, 0x12D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D214u;
label_12d214:
    // 0x12d214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d218: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12d218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d21c: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x12d21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x12d220: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x12D220u;
    SET_GPR_U32(ctx, 31, 0x12D228u);
    ctx->pc = 0x12D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D220u;
    // 0x12d224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x12D220u, 0x12D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D228u;
label_12d228:
    // 0x12d228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d22c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12d22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d230: 0xc051ec6  jal         func_147B18
    ctx->pc = 0x12D230u;
    SET_GPR_U32(ctx, 31, 0x12D238u);
    ctx->pc = 0x12D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D230u;
    // 0x12d234: 0x26260070  addiu       $a2, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B18u, 0x12D230u, 0x12D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D238u;
label_12d238:
    // 0x12d238: 0x263500c0  addiu       $s5, $s1, 0xC0
    ctx->pc = 0x12d238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_12d23c:
    // 0x12d23c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x12d240: 0x24522f00  addiu       $s2, $v0, 0x2F00
    ctx->pc = 0x12d240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12032));
    // 0x12d244: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x12d244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12d248: 0x26360020  addiu       $s6, $s1, 0x20
    ctx->pc = 0x12d248u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x12d24c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x12d24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d250: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x12d250u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d254: 0x0  nop
    ctx->pc = 0x12d254u;
    // NOP
label_12d258:
    // 0x12d258: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x12d258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d260: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x12d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d264: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12d264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d268: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12d268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d26c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x12d26cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x12d270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12d270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12d274: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x12d274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x12d278: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x12d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d27c: 0xc62100a4  lwc1        $f1, 0xA4($s1)
    ctx->pc = 0x12d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d280: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12d280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x12d284: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12d284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12d288: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12d288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12d28c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x12D28Cu;
    SET_GPR_U32(ctx, 31, 0x12D294u);
    ctx->pc = 0x12D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D28Cu;
    // 0x12d290: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12D28Cu, 0x12D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D294u;
label_12d294:
    // 0x12d294: 0x681fff0  bgez        $s4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12D294u;
    {
        const bool branch_taken_0x12d294 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x12D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D294u;
        // 0x12d298: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d294) {
            ctx->pc = 0x12D258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d258;
        }
    }
    ctx->pc = 0x12D29Cu;
    // 0x12d29c: 0x12750007  beq         $s3, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D29Cu;
    {
        const bool branch_taken_0x12d29c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x12d29c) {
            ctx->pc = 0x12D2BCu;
            goto label_12d2bc;
        }
    }
    ctx->pc = 0x12D2A4u;
    // 0x12d2a4: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x12d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d2a8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x12d2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x12d2ac: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x12d2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d2b0: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x12d2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x12d2b4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x12d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d2b8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x12d2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_12d2bc:
    // 0x12d2bc: 0x12d30007  beq         $s6, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D2BCu;
    {
        const bool branch_taken_0x12d2bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 19));
        ctx->pc = 0x12D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2BCu;
        // 0x12d2c0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2bc) {
            ctx->pc = 0x12D2DCu;
            goto label_12d2dc;
        }
    }
    ctx->pc = 0x12D2C4u;
    // 0x12d2c4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x12d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d2c8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x12d2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x12d2cc: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x12d2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d2d0: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x12d2d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x12d2d4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12d2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d2d8: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x12d2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_12d2dc:
    // 0x12d2dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12d2e0:
    // 0x12d2e0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x12d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d2e4: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x12d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d2e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12d2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d2ec: 0x0  nop
    ctx->pc = 0x12d2ecu;
    // NOP
    // 0x12d2f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12D2F0u;
    {
        const bool branch_taken_0x12d2f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d2f0) {
            ctx->pc = 0x12D2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D2F0u;
            // 0x12d2f4: 0xe6210010  swc1        $f1, 0x10($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D2F8u;
            goto label_12d2f8;
        }
    }
    ctx->pc = 0x12D2F8u;
label_12d2f8:
    // 0x12d2f8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x12d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d2fc: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x12d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12d300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d304: 0x0  nop
    ctx->pc = 0x12d304u;
    // NOP
    // 0x12d308: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12D308u;
    {
        const bool branch_taken_0x12d308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d308) {
            ctx->pc = 0x12D30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D308u;
            // 0x12d30c: 0xe6210014  swc1        $f1, 0x14($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D310u;
            goto label_12d310;
        }
    }
    ctx->pc = 0x12D310u;
label_12d310:
    // 0x12d310: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x12d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d314: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x12d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12d318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d31c: 0x0  nop
    ctx->pc = 0x12d31cu;
    // NOP
    // 0x12d320: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12D320u;
    {
        const bool branch_taken_0x12d320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d320) {
            ctx->pc = 0x12D324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D320u;
            // 0x12d324: 0xe6210018  swc1        $f1, 0x18($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D328u;
            goto label_12d328;
        }
    }
    ctx->pc = 0x12D328u;
label_12d328:
    // 0x12d328: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x12d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d32c: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x12d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d330: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12d330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d334: 0x0  nop
    ctx->pc = 0x12d334u;
    // NOP
    // 0x12d338: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12D338u;
    {
        const bool branch_taken_0x12d338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d338) {
            ctx->pc = 0x12D33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D338u;
            // 0x12d33c: 0xe6210020  swc1        $f1, 0x20($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D340u;
            goto label_12d340;
        }
    }
    ctx->pc = 0x12D340u;
label_12d340:
    // 0x12d340: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x12d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d344: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x12d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d348: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12d348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d34c: 0x0  nop
    ctx->pc = 0x12d34cu;
    // NOP
    // 0x12d350: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12D350u;
    {
        const bool branch_taken_0x12d350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d350) {
            ctx->pc = 0x12D354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D350u;
            // 0x12d354: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D358u;
            goto label_12d358;
        }
    }
    ctx->pc = 0x12D358u;
label_12d358:
    // 0x12d358: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x12d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d35c: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x12d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d360: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12d360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d364: 0x0  nop
    ctx->pc = 0x12d364u;
    // NOP
    // 0x12d368: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12D368u;
    {
        const bool branch_taken_0x12d368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d368) {
            ctx->pc = 0x12D36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D368u;
            // 0x12d36c: 0xe6210028  swc1        $f1, 0x28($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D370u;
            goto label_12d370;
        }
    }
    ctx->pc = 0x12D370u;
label_12d370:
    // 0x12d370: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d374: 0x461ffda  bgez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x12D374u;
    {
        const bool branch_taken_0x12d374 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x12D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D374u;
        // 0x12d378: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d374) {
            ctx->pc = 0x12D2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d2e0;
        }
    }
    ctx->pc = 0x12D37Cu;
    // 0x12d37c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12d37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12d380: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12d380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12d384: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12d384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d388: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x12d388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d38c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x12d38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d390: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12d390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d394: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x12d394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d398: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12d398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d39c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D39Cu;
        // 0x12d3a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D3A4u;
    // 0x12d3a4: 0x0  nop
    ctx->pc = 0x12d3a4u;
    // NOP
    // 0x12d3a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d3ac: 0x0  nop
    ctx->pc = 0x12d3acu;
    // NOP
    // 0x12d3b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12d3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d3b4: 0x0  nop
    ctx->pc = 0x12d3b4u;
    // NOP
    // 0x12d3b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12d3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d3bc: 0x0  nop
    ctx->pc = 0x12d3bcu;
    // NOP
    // 0x12d3c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12d3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d3c4: 0x0  nop
    ctx->pc = 0x12d3c4u;
    // NOP
    ctx->pc = 0x12d3c8u;
}
