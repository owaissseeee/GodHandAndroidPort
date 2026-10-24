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

// Function: func_002F4EB8
// Address: 0x2f4eb8 - 0x2f5020
void func_002F4EB8_0x2f4eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4EB8_0x2f4eb8");
#endif

    switch (ctx->pc) {
        case 0x2f4f00u: goto label_2f4f00;
        default: break;
    }

    ctx->pc = 0x2f4eb8u;

    // 0x2f4eb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f4eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f4ebc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f4ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2f4ec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f4ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f4ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f4ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ec8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2f4ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2f4ecc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2f4eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2f4ed0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f4ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f4ed8: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2f4edc: 0x9062018c  lbu         $v0, 0x18C($v1)
    ctx->pc = 0x2f4edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x2f4ee0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2f4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2f4ee4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f4ee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f4ee8: 0xa62202bc  sh          $v0, 0x2BC($s1)
    ctx->pc = 0x2f4ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 700), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f4eec: 0x8070018d  lb          $s0, 0x18D($v1)
    ctx->pc = 0x2f4eecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 397)));
    // 0x2f4ef0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4EF0u;
    {
        const bool branch_taken_0x2f4ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EF0u;
        // 0x2f4ef4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ef0) {
            ctx->pc = 0x2F4F28u;
            goto label_2f4f28;
        }
    }
    ctx->pc = 0x2F4EF8u;
    // 0x2f4ef8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2F4EF8u;
    SET_GPR_U32(ctx, 31, 0x2F4F00u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2F4EF8u, 0x2F4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F00u;
label_2f4f00:
    // 0x2f4f00: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2f4f00u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2f4f04: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F4F04u;
    {
        const bool branch_taken_0x2f4f04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f04) {
            ctx->pc = 0x2F4F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4F04u;
            // 0x2f4f08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4F0Cu;
            goto label_2f4f0c;
        }
    }
    ctx->pc = 0x2F4F0Cu;
label_2f4f0c:
    // 0x2f4f0c: 0x962202bc  lhu         $v0, 0x2BC($s1)
    ctx->pc = 0x2f4f0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f4f10: 0x2010  mfhi        $a0
    ctx->pc = 0x2f4f10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2f4f14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2f4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f4f18: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2f4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2f4f1c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4F1Cu;
    {
        const bool branch_taken_0x2f4f1c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2F4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F1Cu;
        // 0x2f4f20: 0xa62202bc  sh          $v0, 0x2BC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 700), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f1c) {
            ctx->pc = 0x2F4F28u;
            goto label_2f4f28;
        }
    }
    ctx->pc = 0x2F4F24u;
    // 0x2f4f24: 0xa62002bc  sh          $zero, 0x2BC($s1)
    ctx->pc = 0x2f4f24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 700), (uint16_t)GPR_U32(ctx, 0));
label_2f4f28:
    // 0x2f4f28: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2f4f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2f4f2c: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x2f4f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x2f4f30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f4f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f4f34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f4f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4f38: 0x9083018e  lbu         $v1, 0x18E($a0)
    ctx->pc = 0x2f4f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 398)));
    // 0x2f4f3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f4f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f4f40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f4f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f4f44: 0xa22302be  sb          $v1, 0x2BE($s1)
    ctx->pc = 0x2f4f44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 702), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f4f48: 0x8082018f  lb          $v0, 0x18F($a0)
    ctx->pc = 0x2f4f48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 399)));
    // 0x2f4f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4f50: 0x0  nop
    ctx->pc = 0x2f4f50u;
    // NOP
    // 0x2f4f54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f4f58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f4f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f4f5c: 0xe62002b4  swc1        $f0, 0x2B4($s1)
    ctx->pc = 0x2f4f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 692), bits); }
    // 0x2f4f60: 0x80820190  lb          $v0, 0x190($a0)
    ctx->pc = 0x2f4f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x2f4f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4f68: 0x0  nop
    ctx->pc = 0x2f4f68u;
    // NOP
    // 0x2f4f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f4f70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f4f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f4f74: 0xe62002b8  swc1        $f0, 0x2B8($s1)
    ctx->pc = 0x2f4f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
    // 0x2f4f78: 0x90820197  lbu         $v0, 0x197($a0)
    ctx->pc = 0x2f4f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 407)));
    // 0x2f4f7c: 0xa22202e0  sb          $v0, 0x2E0($s1)
    ctx->pc = 0x2f4f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 736), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f4f80: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2f4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2f4f84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4F84u;
    {
        const bool branch_taken_0x2f4f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F84u;
        // 0x2f4f88: 0x26630060  addiu       $v1, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f84) {
            ctx->pc = 0x2F4FBCu;
            goto label_2f4fbc;
        }
    }
    ctx->pc = 0x2F4F8Cu;
    // 0x2f4f8c: 0xae2202c0  sw          $v0, 0x2C0($s1)
    ctx->pc = 0x2f4f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
    // 0x2f4f90: 0x262402d0  addiu       $a0, $s1, 0x2D0
    ctx->pc = 0x2f4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
    // 0x2f4f94: 0x9262004e  lbu         $v0, 0x4E($s3)
    ctx->pc = 0x2f4f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 78)));
    // 0x2f4f98: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F4F98u;
    {
        const bool branch_taken_0x2f4f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F98u;
        // 0x2f4f9c: 0xa22202bf  sb          $v0, 0x2BF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 703), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f98) {
            ctx->pc = 0x2F4FFCu;
            goto label_2f4ffc;
        }
    }
    ctx->pc = 0x2F4FA0u;
    // 0x2f4fa0: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x2f4fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4fa4: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2f4fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2f4fa8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f4fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4fac: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2f4facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f4fb0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f4fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4fb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F4FB4u;
    {
        const bool branch_taken_0x2f4fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FB4u;
        // 0x2f4fb8: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fb4) {
            ctx->pc = 0x2F4FFCu;
            goto label_2f4ffc;
        }
    }
    ctx->pc = 0x2F4FBCu;
label_2f4fbc:
    // 0x2f4fbc: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x2f4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f4fc0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4FC0u;
    {
        const bool branch_taken_0x2f4fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4fc0) {
            ctx->pc = 0x2F4FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4FC0u;
            // 0x2f4fc4: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4FE4u;
            goto label_2f4fe4;
        }
    }
    ctx->pc = 0x2F4FC8u;
    // 0x2f4fc8: 0x808200be  lb          $v0, 0xBE($a0)
    ctx->pc = 0x2f4fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 190)));
    // 0x2f4fcc: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4FCCu;
    {
        const bool branch_taken_0x2f4fcc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2f4fcc) {
            ctx->pc = 0x2F4FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4FCCu;
            // 0x2f4fd0: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4FE4u;
            goto label_2f4fe4;
        }
    }
    ctx->pc = 0x2F4FD4u;
    // 0x2f4fd4: 0xae2302c0  sw          $v1, 0x2C0($s1)
    ctx->pc = 0x2f4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 3));
    // 0x2f4fd8: 0x908200be  lbu         $v0, 0xBE($a0)
    ctx->pc = 0x2f4fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 190)));
    // 0x2f4fdc: 0xa22202bf  sb          $v0, 0x2BF($s1)
    ctx->pc = 0x2f4fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 703), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f4fe0: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2f4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2f4fe4:
    // 0x2f4fe4: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x2f4fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4fe8: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2f4fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2f4fec: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2f4fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4ff0: 0xe62102d4  swc1        $f1, 0x2D4($s1)
    ctx->pc = 0x2f4ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2f4ff4: 0xc4400144  lwc1        $f0, 0x144($v0)
    ctx->pc = 0x2f4ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4ff8: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2f4ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
label_2f4ffc:
    // 0x2f4ffc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2f4ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f5000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5004: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f5004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f5008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f500c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2f500cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f5010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5014: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5014u;
        // 0x2f5018: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F501Cu;
    // 0x2f501c: 0x0  nop
    ctx->pc = 0x2f501cu;
    // NOP
    ctx->pc = 0x2f5020u;
}
