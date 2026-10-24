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

// Function: Motion_seq_ctr
// Address: 0x2c7fd0 - 0x2c8ad8
void Motion_seq_ctr_0x2c7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_seq_ctr_0x2c7fd0");
#endif

    switch (ctx->pc) {
        case 0x2c8060u: goto label_2c8060;
        case 0x2c80a0u: goto label_2c80a0;
        case 0x2c80acu: goto label_2c80ac;
        case 0x2c8148u: goto label_2c8148;
        case 0x2c8154u: goto label_2c8154;
        case 0x2c82ccu: goto label_2c82cc;
        case 0x2c8364u: goto label_2c8364;
        case 0x2c838cu: goto label_2c838c;
        case 0x2c85c4u: goto label_2c85c4;
        case 0x2c8638u: goto label_2c8638;
        case 0x2c8738u: goto label_2c8738;
        case 0x2c8768u: goto label_2c8768;
        case 0x2c87e0u: goto label_2c87e0;
        case 0x2c8820u: goto label_2c8820;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c8878u: goto label_2c8878;
        case 0x2c8884u: goto label_2c8884;
        case 0x2c89a8u: goto label_2c89a8;
        case 0x2c89b8u: goto label_2c89b8;
        default: break;
    }

    ctx->pc = 0x2c7fd0u;

    // 0x2c7fd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2c7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2c7fd4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c7fd8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2c7fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2c7fdc: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2c7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2c7fe0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c7fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2c7fe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7fe8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2c7fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2c7fec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2c7fecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ff0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2c7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2c7ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7ff8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2c7ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2c7ffc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2c7ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2c8000: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2c8000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2c8004: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2c8004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2c8008: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2c8008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x2c800c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c8010: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2c8010u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2c8014: 0x90440569  lbu         $a0, 0x569($v0)
    ctx->pc = 0x2c8014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x747A09u));
    // 0x2c8018: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8018u;
    {
        const bool branch_taken_0x2c8018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8018u;
        // 0x2c801c: 0xc4540574  lwc1        $f20, 0x574($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8018) {
            ctx->pc = 0x2C8030u;
            goto label_2c8030;
        }
    }
    ctx->pc = 0x2C8020u;
    // 0x2c8020: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c8020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c8024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8028: 0x0  nop
    ctx->pc = 0x2c8028u;
    // NOP
    // 0x2c802c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2c802cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2c8030:
    // 0x2c8030: 0x12c00298  beqz        $s6, . + 4 + (0x298 << 2)
    ctx->pc = 0x2C8030u;
    {
        const bool branch_taken_0x2c8030 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8030u;
        // 0x2c8034: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8030) {
            ctx->pc = 0x2C8A94u;
            goto label_2c8a94;
        }
    }
    ctx->pc = 0x2C8038u;
    // 0x2c8038: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x2c8038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
    // 0x2c803c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c8040: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C8040u;
    {
        const bool branch_taken_0x2c8040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8040) {
            ctx->pc = 0x2C8044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8040u;
            // 0x2c8044: 0x96c2000c  lhu         $v0, 0xC($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8124u;
            goto label_2c8124;
        }
    }
    ctx->pc = 0x2C8048u;
    // 0x2c8048: 0x96c20008  lhu         $v0, 0x8($s6)
    ctx->pc = 0x2c8048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2c804c: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x2c804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
    // 0x2c8050: 0x2c28821  addu        $s1, $s6, $v0
    ctx->pc = 0x2c8050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2c8054: 0x1071000a  beq         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8054u;
    {
        const bool branch_taken_0x2c8054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8054u;
        // 0x2c8058: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8054) {
            ctx->pc = 0x2C8080u;
            goto label_2c8080;
        }
    }
    ctx->pc = 0x2C805Cu;
    // 0x2c805c: 0x26450410  addiu       $a1, $s2, 0x410
    ctx->pc = 0x2c805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
label_2c8060:
    // 0x2c8060: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2c8060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2c8064: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c8064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c8068: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x2c8068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c806c: 0x0  nop
    ctx->pc = 0x2c806cu;
    // NOP
    // 0x2c8070: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C8070u;
    {
        const bool branch_taken_0x2c8070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8070u;
        // 0x2c8074: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8070) {
            ctx->pc = 0x2C8060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8060;
        }
    }
    ctx->pc = 0x2C8078u;
    // 0x2c8078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8078u;
    {
        const bool branch_taken_0x2c8078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8078u;
        // 0x2c807c: 0x96d0000a  lhu         $s0, 0xA($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8078) {
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C8080u;
label_2c8080:
    // 0x2c8080: 0xae510418  sw          $s1, 0x418($s2)
    ctx->pc = 0x2c8080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1048), GPR_U32(ctx, 17));
    // 0x2c8084: 0x96d0000a  lhu         $s0, 0xA($s6)
    ctx->pc = 0x2c8084u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
label_2c8088:
    // 0x2c8088: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C8088u;
    {
        const bool branch_taken_0x2c8088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8088) {
            ctx->pc = 0x2C808Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8088u;
            // 0x2c808c: 0x96c2000c  lhu         $v0, 0xC($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8124u;
            goto label_2c8124;
        }
    }
    ctx->pc = 0x2C8090u;
    // 0x2c8090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8098: 0x0  nop
    ctx->pc = 0x2c8098u;
    // NOP
    // 0x2c809c: 0xe6400440  swc1        $f0, 0x440($s2)
    ctx->pc = 0x2c809cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1088), bits); }
label_2c80a0:
    // 0x2c80a0: 0x92c50019  lbu         $a1, 0x19($s6)
    ctx->pc = 0x2c80a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 25)));
    // 0x2c80a4: 0xc0b1f46  jal         func_2C7D18
    ctx->pc = 0x2C80A4u;
    SET_GPR_U32(ctx, 31, 0x2C80ACu);
    ctx->pc = 0x2C80A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C80A4u;
    // 0x2c80a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7D18u, 0x2C80A4u, 0x2C80ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80ACu;
label_2c80ac:
    // 0x2c80ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c80acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c80b0: 0xc6410430  lwc1        $f1, 0x430($s2)
    ctx->pc = 0x2c80b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c80b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c80b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2c80b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2c80bc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2c80bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2c80c0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2c80c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2c80c4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2c80c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c80c8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2c80c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c80cc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2c80ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c80d0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2c80d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c80d4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2c80d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c80d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c80d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c80dc: 0x0  nop
    ctx->pc = 0x2c80dcu;
    // NOP
    // 0x2c80e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c80e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c80e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c80e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c80e8: 0x0  nop
    ctx->pc = 0x2c80e8u;
    // NOP
    // 0x2c80ec: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2C80ECu;
    {
        const bool branch_taken_0x2c80ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80ECu;
        // 0x2c80f0: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80ec) {
            ctx->pc = 0x2C8114u;
            goto label_2c8114;
        }
    }
    ctx->pc = 0x2C80F4u;
    // 0x2c80f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c80f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c80f8: 0x0  nop
    ctx->pc = 0x2c80f8u;
    // NOP
    // 0x2c80fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c80fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c8100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8104: 0x0  nop
    ctx->pc = 0x2c8104u;
    // NOP
    // 0x2c8108: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8108u;
    {
        const bool branch_taken_0x2c8108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8108u;
        // 0x2c810c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8108) {
            ctx->pc = 0x2C8114u;
            goto label_2c8114;
        }
    }
    ctx->pc = 0x2C8110u;
    // 0x2c8110: 0xe6400440  swc1        $f0, 0x440($s2)
    ctx->pc = 0x2c8110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1088), bits); }
label_2c8114:
    // 0x2c8114: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c8114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c8118: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2C8118u;
    {
        const bool branch_taken_0x2c8118 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8118u;
        // 0x2c811c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8118) {
            ctx->pc = 0x2C80A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c80a0;
        }
    }
    ctx->pc = 0x2C8120u;
    // 0x2c8120: 0x96c2000c  lhu         $v0, 0xC($s6)
    ctx->pc = 0x2c8120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
label_2c8124:
    // 0x2c8124: 0x96d5000e  lhu         $s5, 0xE($s6)
    ctx->pc = 0x2c8124u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 14)));
    // 0x2c8128: 0x12a001ce  beqz        $s5, . + 4 + (0x1CE << 2)
    ctx->pc = 0x2C8128u;
    {
        const bool branch_taken_0x2c8128 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8128u;
        // 0x2c812c: 0x2c2b821  addu        $s7, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8128) {
            ctx->pc = 0x2C8864u;
            goto label_2c8864;
        }
    }
    ctx->pc = 0x2C8130u;
    // 0x2c8130: 0xa64003a2  sh          $zero, 0x3A2($s2)
    ctx->pc = 0x2c8130u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 930), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c8134: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x2c8134u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c8138: 0xa64003a0  sh          $zero, 0x3A0($s2)
    ctx->pc = 0x2c8138u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 928), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c813c: 0xa64003a4  sh          $zero, 0x3A4($s2)
    ctx->pc = 0x2c813cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 932), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c8140: 0x92c6001a  lbu         $a2, 0x1A($s6)
    ctx->pc = 0x2c8140u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 26)));
    // 0x2c8144: 0x0  nop
    ctx->pc = 0x2c8144u;
    // NOP
label_2c8148:
    // 0x2c8148: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c8148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c814c: 0xc0b1f6a  jal         func_2C7DA8
    ctx->pc = 0x2C814Cu;
    SET_GPR_U32(ctx, 31, 0x2C8154u);
    ctx->pc = 0x2C8150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C814Cu;
    // 0x2c8150: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7DA8u, 0x2C814Cu, 0x2C8154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8154u;
label_2c8154:
    // 0x2c8154: 0xc6420430  lwc1        $f2, 0x430($s2)
    ctx->pc = 0x2c8154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8158: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2c8158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c815c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2c815cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c8160: 0x8ba3002b  lwl         $v1, 0x2B($sp)
    ctx->pc = 0x2c8160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2c8164: 0x9ba30028  lwr         $v1, 0x28($sp)
    ctx->pc = 0x2c8164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2c8168: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2c8168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c816c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2c816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8170: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x2c8170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c8174: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x2c8174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c8178: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2c8178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c817c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2c817cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c8180: 0x0  nop
    ctx->pc = 0x2c8180u;
    // NOP
    // 0x2c8184: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2c8184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c8188: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2c8188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c818c: 0x0  nop
    ctx->pc = 0x2c818cu;
    // NOP
    // 0x2c8190: 0x450201b1  bc1fl       . + 4 + (0x1B1 << 2)
    ctx->pc = 0x2C8190u;
    {
        const bool branch_taken_0x2c8190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8190) {
            ctx->pc = 0x2C8194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8190u;
            // 0x2c8194: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8858u;
            goto label_2c8858;
        }
    }
    ctx->pc = 0x2C8198u;
    // 0x2c8198: 0xc6400444  lwc1        $f0, 0x444($s2)
    ctx->pc = 0x2c8198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c819c: 0xc64103a8  lwc1        $f1, 0x3A8($s2)
    ctx->pc = 0x2c819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c81a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c81a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c81a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c81a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c81a8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2c81a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c81ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2c81acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c81b0: 0x0  nop
    ctx->pc = 0x2c81b0u;
    // NOP
    // 0x2c81b4: 0x450201a8  bc1fl       . + 4 + (0x1A8 << 2)
    ctx->pc = 0x2C81B4u;
    {
        const bool branch_taken_0x2c81b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c81b4) {
            ctx->pc = 0x2C81B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C81B4u;
            // 0x2c81b8: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8858u;
            goto label_2c8858;
        }
    }
    ctx->pc = 0x2C81BCu;
    // 0x2c81bc: 0xc640041c  lwc1        $f0, 0x41C($s2)
    ctx->pc = 0x2c81bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c81c0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c81c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c81c4: 0x0  nop
    ctx->pc = 0x2c81c4u;
    // NOP
    // 0x2c81c8: 0x450301a3  bc1tl       . + 4 + (0x1A3 << 2)
    ctx->pc = 0x2C81C8u;
    {
        const bool branch_taken_0x2c81c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c81c8) {
            ctx->pc = 0x2C81CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C81C8u;
            // 0x2c81cc: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8858u;
            goto label_2c8858;
        }
    }
    ctx->pc = 0x2C81D0u;
    // 0x2c81d0: 0x93a30008  lbu         $v1, 0x8($sp)
    ctx->pc = 0x2c81d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c81d4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2c81d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c81d8: 0x97a50002  lhu         $a1, 0x2($sp)
    ctx->pc = 0x2c81d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2c81dc: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x2c81dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x2c81e0: 0xa64303a2  sh          $v1, 0x3A2($s2)
    ctx->pc = 0x2c81e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 930), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c81e4: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x2c81e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c81e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c81ec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c81f0: 0x964402fe  lhu         $a0, 0x2FE($s2)
    ctx->pc = 0x2c81f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x2c81f4: 0xa64303a4  sh          $v1, 0x3A4($s2)
    ctx->pc = 0x2c81f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c81f8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x2c81f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c81fc: 0xa64503a0  sh          $a1, 0x3A0($s2)
    ctx->pc = 0x2c81fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 928), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c8200: 0x1486007f  bne         $a0, $a2, . + 4 + (0x7F << 2)
    ctx->pc = 0x2C8200u;
    {
        const bool branch_taken_0x2c8200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2C8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8200u;
        // 0x2c8204: 0x925403a2  lbu         $s4, 0x3A2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 930)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8200) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C8208u;
    // 0x2c8208: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x2c8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2c820c: 0x12220036  beq         $s1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C820Cu;
    {
        const bool branch_taken_0x2c820c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C820Cu;
        // 0x2c8210: 0x2a22004b  slti        $v0, $s1, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c820c) {
            ctx->pc = 0x2C82E8u;
            goto label_2c82e8;
        }
    }
    ctx->pc = 0x2C8214u;
    // 0x2c8214: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8214u;
    {
        const bool branch_taken_0x2c8214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8214u;
        // 0x2c8218: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8214) {
            ctx->pc = 0x2C8234u;
            goto label_2c8234;
        }
    }
    ctx->pc = 0x2C821Cu;
    // 0x2c821c: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C821Cu;
    {
        const bool branch_taken_0x2c821c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C821Cu;
        // 0x2c8220: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c821c) {
            ctx->pc = 0x2C8250u;
            goto label_2c8250;
        }
    }
    ctx->pc = 0x2C8224u;
    // 0x2c8224: 0x5222000b  beql        $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8224u;
    {
        const bool branch_taken_0x2c8224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8224) {
            ctx->pc = 0x2C8228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8224u;
            // 0x2c8228: 0x8e430474  lw          $v1, 0x474($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8254u;
            goto label_2c8254;
        }
    }
    ctx->pc = 0x2C822Cu;
    // 0x2c822c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2C822Cu;
    {
        const bool branch_taken_0x2c822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C822Cu;
        // 0x2c8230: 0x964302fe  lhu         $v1, 0x2FE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c822c) {
            ctx->pc = 0x2C8404u;
            goto label_2c8404;
        }
    }
    ctx->pc = 0x2C8234u;
label_2c8234:
    // 0x2c8234: 0x2a220115  slti        $v0, $s1, 0x115
    ctx->pc = 0x2c8234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)277) ? 1 : 0);
    // 0x2c8238: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2C8238u;
    {
        const bool branch_taken_0x2c8238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8238u;
        // 0x2c823c: 0x2a220113  slti        $v0, $s1, 0x113 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)275) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8238) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C8240u;
    // 0x2c8240: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C8240u;
    {
        const bool branch_taken_0x2c8240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8240u;
        // 0x2c8244: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8240) {
            ctx->pc = 0x2C8380u;
            goto label_2c8380;
        }
    }
    ctx->pc = 0x2C8248u;
    // 0x2c8248: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2C8248u;
    {
        const bool branch_taken_0x2c8248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8248u;
        // 0x2c824c: 0x964302fe  lhu         $v1, 0x2FE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8248) {
            ctx->pc = 0x2C8404u;
            goto label_2c8404;
        }
    }
    ctx->pc = 0x2C8250u;
label_2c8250:
    // 0x2c8250: 0x8e430474  lw          $v1, 0x474($s2)
    ctx->pc = 0x2c8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
label_2c8254:
    // 0x2c8254: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c8254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8258: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c8258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c825c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2c825cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c8260: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2c8260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2c8264: 0x38640003  xori        $a0, $v1, 0x3
    ctx->pc = 0x2c8264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2c8268: 0x2c490001  sltiu       $t1, $v0, 0x1
    ctx->pc = 0x2c8268u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c826c: 0x38650004  xori        $a1, $v1, 0x4
    ctx->pc = 0x2c826cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2c8270: 0xc4480a  movz        $t1, $a2, $a0
    ctx->pc = 0x2c8270u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x2c8274: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x2c8274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x2c8278: 0xe5480a  movz        $t1, $a3, $a1
    ctx->pc = 0x2c8278u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
    // 0x2c827c: 0x103480a  movz        $t1, $t0, $v1
    ctx->pc = 0x2c827cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
    // 0x2c8280: 0x2d220005  sltiu       $v0, $t1, 0x5
    ctx->pc = 0x2c8280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c8284: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C8284u;
    {
        const bool branch_taken_0x2c8284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8284u;
        // 0x2c8288: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8284) {
            ctx->pc = 0x2C82C0u;
            goto label_2c82c0;
        }
    }
    ctx->pc = 0x2C828Cu;
    // 0x2c828c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2c828cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c8290: 0x2442c410  addiu       $v0, $v0, -0x3BF0
    ctx->pc = 0x2c8290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951952));
    // 0x2c8294: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8298: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c829c: 0x800008  jr          $a0
    ctx->pc = 0x2C829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C82A4u: goto label_2c82a4;
            case 0x2C82ACu: goto label_2c82ac;
            case 0x2C82B4u: goto label_2c82b4;
            case 0x2C82BCu: goto label_2c82bc;
            case 0x2C82C0u: goto label_2c82c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C829Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C82A4u;
label_2c82a4:
    // 0x2c82a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C82A4u;
    {
        const bool branch_taken_0x2c82a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82A4u;
        // 0x2c82a8: 0x24110048  addiu       $s1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82a4) {
            ctx->pc = 0x2C82C0u;
            goto label_2c82c0;
        }
    }
    ctx->pc = 0x2C82ACu;
label_2c82ac:
    // 0x2c82ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C82ACu;
    {
        const bool branch_taken_0x2c82ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82ACu;
        // 0x2c82b0: 0x24110055  addiu       $s1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82ac) {
            ctx->pc = 0x2C82C0u;
            goto label_2c82c0;
        }
    }
    ctx->pc = 0x2C82B4u;
label_2c82b4:
    // 0x2c82b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C82B4u;
    {
        const bool branch_taken_0x2c82b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82B4u;
        // 0x2c82b8: 0x24110052  addiu       $s1, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82b4) {
            ctx->pc = 0x2C82C0u;
            goto label_2c82c0;
        }
    }
    ctx->pc = 0x2C82BCu;
label_2c82bc:
    // 0x2c82bc: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x2c82bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2c82c0:
    // 0x2c82c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c82c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c82c4: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x2C82C4u;
    SET_GPR_U32(ctx, 31, 0x2C82CCu);
    ctx->pc = 0x2C82C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C82C4u;
    // 0x2c82c8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x2C82C4u, 0x2C82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82CCu;
label_2c82cc:
    // 0x2c82cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c82ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82d0: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x2c82d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c82d4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C82D4u;
    {
        const bool branch_taken_0x2c82d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82D4u;
        // 0x2c82d8: 0x28630004  slti        $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82d4) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C82DCu;
    // 0x2c82dc: 0x24020109  addiu       $v0, $zero, 0x109
    ctx->pc = 0x2c82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x2c82e0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2C82E0u;
    {
        const bool branch_taken_0x2c82e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82E0u;
        // 0x2c82e4: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82e0) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C82E8u;
label_2c82e8:
    // 0x2c82e8: 0x8e430474  lw          $v1, 0x474($s2)
    ctx->pc = 0x2c82e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
    // 0x2c82ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c82ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c82f0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c82f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c82f4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2c82f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c82f8: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2c82f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2c82fc: 0x38640003  xori        $a0, $v1, 0x3
    ctx->pc = 0x2c82fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2c8300: 0x2c490001  sltiu       $t1, $v0, 0x1
    ctx->pc = 0x2c8300u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c8304: 0x38650004  xori        $a1, $v1, 0x4
    ctx->pc = 0x2c8304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2c8308: 0xc4480a  movz        $t1, $a2, $a0
    ctx->pc = 0x2c8308u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x2c830c: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x2c830cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x2c8310: 0xe5480a  movz        $t1, $a3, $a1
    ctx->pc = 0x2c8310u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
    // 0x2c8314: 0x103480a  movz        $t1, $t0, $v1
    ctx->pc = 0x2c8314u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
    // 0x2c8318: 0x2d220005  sltiu       $v0, $t1, 0x5
    ctx->pc = 0x2c8318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c831c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C831Cu;
    {
        const bool branch_taken_0x2c831c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C831Cu;
        // 0x2c8320: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c831c) {
            ctx->pc = 0x2C8358u;
            goto label_2c8358;
        }
    }
    ctx->pc = 0x2C8324u;
    // 0x2c8324: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2c8324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c8328: 0x2442c430  addiu       $v0, $v0, -0x3BD0
    ctx->pc = 0x2c8328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x2c832c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8330: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8334: 0x800008  jr          $a0
    ctx->pc = 0x2C8334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C833Cu: goto label_2c833c;
            case 0x2C8344u: goto label_2c8344;
            case 0x2C834Cu: goto label_2c834c;
            case 0x2C8354u: goto label_2c8354;
            case 0x2C8358u: goto label_2c8358;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8334u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C833Cu;
label_2c833c:
    // 0x2c833c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C833Cu;
    {
        const bool branch_taken_0x2c833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C833Cu;
        // 0x2c8340: 0x2411004b  addiu       $s1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c833c) {
            ctx->pc = 0x2C8358u;
            goto label_2c8358;
        }
    }
    ctx->pc = 0x2C8344u;
label_2c8344:
    // 0x2c8344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8344u;
    {
        const bool branch_taken_0x2c8344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8344u;
        // 0x2c8348: 0x24110057  addiu       $s1, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8344) {
            ctx->pc = 0x2C8358u;
            goto label_2c8358;
        }
    }
    ctx->pc = 0x2C834Cu;
label_2c834c:
    // 0x2c834c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C834Cu;
    {
        const bool branch_taken_0x2c834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C834Cu;
        // 0x2c8350: 0x24110054  addiu       $s1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c834c) {
            ctx->pc = 0x2C8358u;
            goto label_2c8358;
        }
    }
    ctx->pc = 0x2C8354u;
label_2c8354:
    // 0x2c8354: 0x2411004e  addiu       $s1, $zero, 0x4E
    ctx->pc = 0x2c8354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2c8358:
    // 0x2c8358: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c8358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c835c: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x2C835Cu;
    SET_GPR_U32(ctx, 31, 0x2C8364u);
    ctx->pc = 0x2C8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C835Cu;
    // 0x2c8360: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x2C835Cu, 0x2C8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8364u;
label_2c8364:
    // 0x2c8364: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8368: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x2c8368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c836c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C836Cu;
    {
        const bool branch_taken_0x2c836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C836Cu;
        // 0x2c8370: 0x28630004  slti        $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c836c) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C8374u;
    // 0x2c8374: 0x2402010b  addiu       $v0, $zero, 0x10B
    ctx->pc = 0x2c8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x2c8378: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C8378u;
    {
        const bool branch_taken_0x2c8378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8378u;
        // 0x2c837c: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8378) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C8380u;
label_2c8380:
    // 0x2c8380: 0x8e4504ac  lw          $a1, 0x4AC($s2)
    ctx->pc = 0x2c8380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1196)));
    // 0x2c8384: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2C8384u;
    SET_GPR_U32(ctx, 31, 0x2C838Cu);
    ctx->pc = 0x2C8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8384u;
    // 0x2c8388: 0x2484c400  addiu       $a0, $a0, -0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2C8384u, 0x2C838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C838Cu;
label_2c838c:
    // 0x2c838c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C838Cu;
    {
        const bool branch_taken_0x2c838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c838c) {
            ctx->pc = 0x2C8390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C838Cu;
            // 0x2c8390: 0x964302fe  lhu         $v1, 0x2FE($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8404u;
            goto label_2c8404;
        }
    }
    ctx->pc = 0x2C8394u;
    // 0x2c8394: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x2c8394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x2c8398: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C8398u;
    {
        const bool branch_taken_0x2c8398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8398) {
            ctx->pc = 0x2C839Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8398u;
            // 0x2c839c: 0x964302fe  lhu         $v1, 0x2FE($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8404u;
            goto label_2c8404;
        }
    }
    ctx->pc = 0x2C83A0u;
    // 0x2c83a0: 0x944202fe  lhu         $v0, 0x2FE($v0)
    ctx->pc = 0x2c83a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x2c83a4: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x2c83a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x2c83a8: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x2c83a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x2c83ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C83ACu;
    {
        const bool branch_taken_0x2c83ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83ACu;
        // 0x2c83b0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83ac) {
            ctx->pc = 0x2C83CCu;
            goto label_2c83cc;
        }
    }
    ctx->pc = 0x2C83B4u;
    // 0x2c83b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c83b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c83b8: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x2c83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x2c83bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c83c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c83c4: 0x800008  jr          $a0
    ctx->pc = 0x2C83C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C83CCu: goto label_2c83cc;
            case 0x2C83D4u: goto label_2c83d4;
            case 0x2C83DCu: goto label_2c83dc;
            case 0x2C83E4u: goto label_2c83e4;
            case 0x2C83F0u: goto label_2c83f0;
            case 0x2C83FCu: goto label_2c83fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C83C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C83CCu;
label_2c83cc:
    // 0x2c83cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C83CCu;
    {
        const bool branch_taken_0x2c83cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83CCu;
        // 0x2c83d0: 0x24110113  addiu       $s1, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83cc) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C83D4u;
label_2c83d4:
    // 0x2c83d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C83D4u;
    {
        const bool branch_taken_0x2c83d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83D4u;
        // 0x2c83d8: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83d4) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C83DCu;
label_2c83dc:
    // 0x2c83dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C83DCu;
    {
        const bool branch_taken_0x2c83dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83DCu;
        // 0x2c83e0: 0x24110114  addiu       $s1, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83dc) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C83E4u;
label_2c83e4:
    // 0x2c83e4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2c83e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c83e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C83E8u;
    {
        const bool branch_taken_0x2c83e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83E8u;
        // 0x2c83ec: 0x24110023  addiu       $s1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83e8) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C83F0u;
label_2c83f0:
    // 0x2c83f0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2c83f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c83f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C83F4u;
    {
        const bool branch_taken_0x2c83f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83F4u;
        // 0x2c83f8: 0x241100d5  addiu       $s1, $zero, 0xD5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83f4) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C83FCu;
label_2c83fc:
    // 0x2c83fc: 0x24110145  addiu       $s1, $zero, 0x145
    ctx->pc = 0x2c83fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_2c8400:
    // 0x2c8400: 0x964302fe  lhu         $v1, 0x2FE($s2)
    ctx->pc = 0x2c8400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
label_2c8404:
    // 0x2c8404: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x2c8404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2c8408: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8408u;
    {
        const bool branch_taken_0x2c8408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8408u;
        // 0x2c840c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8408) {
            ctx->pc = 0x2C8418u;
            goto label_2c8418;
        }
    }
    ctx->pc = 0x2C8410u;
    // 0x2c8410: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x2c8410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2c8414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8418:
    // 0x2c8418: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2c8418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c841c: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2C841Cu;
    {
        const bool branch_taken_0x2c841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C841Cu;
        // 0x2c8420: 0x2a220113  slti        $v0, $s1, 0x113 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)275) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c841c) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C8424u;
    // 0x2c8424: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8424u;
    {
        const bool branch_taken_0x2c8424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8424u;
        // 0x2c8428: 0x2a220111  slti        $v0, $s1, 0x111 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)273) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8424) {
            ctx->pc = 0x2C844Cu;
            goto label_2c844c;
        }
    }
    ctx->pc = 0x2C842Cu;
    // 0x2c842c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2C842Cu;
    {
        const bool branch_taken_0x2c842c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C842Cu;
        // 0x2c8430: 0x240200aa  addiu       $v0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c842c) {
            ctx->pc = 0x2C8628u;
            goto label_2c8628;
        }
    }
    ctx->pc = 0x2C8434u;
    // 0x2c8434: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C8434u;
    {
        const bool branch_taken_0x2c8434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8434u;
        // 0x2c8438: 0x240200ae  addiu       $v0, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8434) {
            ctx->pc = 0x2C846Cu;
            goto label_2c846c;
        }
    }
    ctx->pc = 0x2C843Cu;
    // 0x2c843c: 0x12220032  beq         $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C843Cu;
    {
        const bool branch_taken_0x2c843c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C843Cu;
        // 0x2c8440: 0x93a20006  lbu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c843c) {
            ctx->pc = 0x2C8508u;
            goto label_2c8508;
        }
    }
    ctx->pc = 0x2C8444u;
    // 0x2c8444: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2C8444u;
    {
        const bool branch_taken_0x2c8444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8444u;
        // 0x2c8448: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8444) {
            ctx->pc = 0x2C869Cu;
            goto label_2c869c;
        }
    }
    ctx->pc = 0x2C844Cu;
label_2c844c:
    // 0x2c844c: 0x2a220115  slti        $v0, $s1, 0x115
    ctx->pc = 0x2c844cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)277) ? 1 : 0);
    // 0x2c8450: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2C8450u;
    {
        const bool branch_taken_0x2c8450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8450u;
        // 0x2c8454: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8450) {
            ctx->pc = 0x2C85B8u;
            goto label_2c85b8;
        }
    }
    ctx->pc = 0x2C8458u;
    // 0x2c8458: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x2c8458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x2c845c: 0x12220073  beq         $s1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2C845Cu;
    {
        const bool branch_taken_0x2c845c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C845Cu;
        // 0x2c8460: 0x93a20006  lbu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c845c) {
            ctx->pc = 0x2C862Cu;
            goto label_2c862c;
        }
    }
    ctx->pc = 0x2C8464u;
    // 0x2c8464: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2C8464u;
    {
        const bool branch_taken_0x2c8464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8464u;
        // 0x2c8468: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8464) {
            ctx->pc = 0x2C869Cu;
            goto label_2c869c;
        }
    }
    ctx->pc = 0x2C846Cu;
label_2c846c:
    // 0x2c846c: 0x8e430474  lw          $v1, 0x474($s2)
    ctx->pc = 0x2c846cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
    // 0x2c8470: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c8470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8474: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c8474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c8478: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2c8478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c847c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2c847cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2c8480: 0x38640003  xori        $a0, $v1, 0x3
    ctx->pc = 0x2c8480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2c8484: 0x2c490001  sltiu       $t1, $v0, 0x1
    ctx->pc = 0x2c8484u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c8488: 0x38650004  xori        $a1, $v1, 0x4
    ctx->pc = 0x2c8488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2c848c: 0xc4480a  movz        $t1, $a2, $a0
    ctx->pc = 0x2c848cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x2c8490: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x2c8490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x2c8494: 0xe5480a  movz        $t1, $a3, $a1
    ctx->pc = 0x2c8494u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
    // 0x2c8498: 0x103480a  movz        $t1, $t0, $v1
    ctx->pc = 0x2c8498u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
    // 0x2c849c: 0x2d220005  sltiu       $v0, $t1, 0x5
    ctx->pc = 0x2c849cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c84a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C84A0u;
    {
        const bool branch_taken_0x2c84a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84A0u;
        // 0x2c84a4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84a0) {
            ctx->pc = 0x2C84DCu;
            goto label_2c84dc;
        }
    }
    ctx->pc = 0x2C84A8u;
    // 0x2c84a8: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2c84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c84ac: 0x2442c5b0  addiu       $v0, $v0, -0x3A50
    ctx->pc = 0x2c84acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952368));
    // 0x2c84b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c84b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c84b8: 0x800008  jr          $a0
    ctx->pc = 0x2C84B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C84C0u: goto label_2c84c0;
            case 0x2C84C8u: goto label_2c84c8;
            case 0x2C84D0u: goto label_2c84d0;
            case 0x2C84D8u: goto label_2c84d8;
            case 0x2C84DCu: goto label_2c84dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C84B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C84C0u;
label_2c84c0:
    // 0x2c84c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C84C0u;
    {
        const bool branch_taken_0x2c84c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84C0u;
        // 0x2c84c4: 0x241100ac  addiu       $s1, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84c0) {
            ctx->pc = 0x2C84DCu;
            goto label_2c84dc;
        }
    }
    ctx->pc = 0x2C84C8u;
label_2c84c8:
    // 0x2c84c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C84C8u;
    {
        const bool branch_taken_0x2c84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84C8u;
        // 0x2c84cc: 0x241100b9  addiu       $s1, $zero, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84c8) {
            ctx->pc = 0x2C84DCu;
            goto label_2c84dc;
        }
    }
    ctx->pc = 0x2C84D0u;
label_2c84d0:
    // 0x2c84d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C84D0u;
    {
        const bool branch_taken_0x2c84d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84D0u;
        // 0x2c84d4: 0x241100b6  addiu       $s1, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84d0) {
            ctx->pc = 0x2C84DCu;
            goto label_2c84dc;
        }
    }
    ctx->pc = 0x2C84D8u;
label_2c84d8:
    // 0x2c84d8: 0x241100b0  addiu       $s1, $zero, 0xB0
    ctx->pc = 0x2c84d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2c84dc:
    // 0x2c84dc: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2c84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2c84e0: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x2c84e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x2c84e4: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x2c84e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x2c84e8: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2C84E8u;
    {
        const bool branch_taken_0x2c84e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84E8u;
        // 0x2c84ec: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84e8) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C84F0u;
    // 0x2c84f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c84f4: 0x2442c5d0  addiu       $v0, $v0, -0x3A30
    ctx->pc = 0x2c84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952400));
    // 0x2c84f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c84f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c84fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8500: 0x800008  jr          $a0
    ctx->pc = 0x2C8500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C85A4u: goto label_2c85a4;
            case 0x2C8694u: goto label_2c8694;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8500u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C8508u;
label_2c8508:
    // 0x2c8508: 0x8e430474  lw          $v1, 0x474($s2)
    ctx->pc = 0x2c8508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
    // 0x2c850c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c850cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8510: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c8510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c8514: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2c8514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c8518: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2c8518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2c851c: 0x38640003  xori        $a0, $v1, 0x3
    ctx->pc = 0x2c851cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2c8520: 0x2c490001  sltiu       $t1, $v0, 0x1
    ctx->pc = 0x2c8520u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c8524: 0x38650004  xori        $a1, $v1, 0x4
    ctx->pc = 0x2c8524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2c8528: 0xc4480a  movz        $t1, $a2, $a0
    ctx->pc = 0x2c8528u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x2c852c: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x2c852cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x2c8530: 0xe5480a  movz        $t1, $a3, $a1
    ctx->pc = 0x2c8530u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
    // 0x2c8534: 0x103480a  movz        $t1, $t0, $v1
    ctx->pc = 0x2c8534u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
    // 0x2c8538: 0x2d220005  sltiu       $v0, $t1, 0x5
    ctx->pc = 0x2c8538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c853c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C853Cu;
    {
        const bool branch_taken_0x2c853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C853Cu;
        // 0x2c8540: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c853c) {
            ctx->pc = 0x2C8578u;
            goto label_2c8578;
        }
    }
    ctx->pc = 0x2C8544u;
    // 0x2c8544: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2c8544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c8548: 0x2442c790  addiu       $v0, $v0, -0x3870
    ctx->pc = 0x2c8548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952848));
    // 0x2c854c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8550: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8554: 0x800008  jr          $a0
    ctx->pc = 0x2C8554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C855Cu: goto label_2c855c;
            case 0x2C8564u: goto label_2c8564;
            case 0x2C856Cu: goto label_2c856c;
            case 0x2C8574u: goto label_2c8574;
            case 0x2C8578u: goto label_2c8578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8554u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C855Cu;
label_2c855c:
    // 0x2c855c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C855Cu;
    {
        const bool branch_taken_0x2c855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C855Cu;
        // 0x2c8560: 0x241100af  addiu       $s1, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c855c) {
            ctx->pc = 0x2C8578u;
            goto label_2c8578;
        }
    }
    ctx->pc = 0x2C8564u;
label_2c8564:
    // 0x2c8564: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8564u;
    {
        const bool branch_taken_0x2c8564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8564u;
        // 0x2c8568: 0x241100bb  addiu       $s1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8564) {
            ctx->pc = 0x2C8578u;
            goto label_2c8578;
        }
    }
    ctx->pc = 0x2C856Cu;
label_2c856c:
    // 0x2c856c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C856Cu;
    {
        const bool branch_taken_0x2c856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C856Cu;
        // 0x2c8570: 0x241100b8  addiu       $s1, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c856c) {
            ctx->pc = 0x2C8578u;
            goto label_2c8578;
        }
    }
    ctx->pc = 0x2C8574u;
label_2c8574:
    // 0x2c8574: 0x241100b2  addiu       $s1, $zero, 0xB2
    ctx->pc = 0x2c8574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_2c8578:
    // 0x2c8578: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2c8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2c857c: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x2c857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x2c8580: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x2c8580u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x2c8584: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C8584u;
    {
        const bool branch_taken_0x2c8584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8584u;
        // 0x2c8588: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8584) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C858Cu;
    // 0x2c858c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c858cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c8590: 0x2442c7b0  addiu       $v0, $v0, -0x3850
    ctx->pc = 0x2c8590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x2c8594: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8598: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c859c: 0x800008  jr          $a0
    ctx->pc = 0x2C859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C85A4u: goto label_2c85a4;
            case 0x2C8694u: goto label_2c8694;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C859Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C85A4u;
label_2c85a4:
    // 0x2c85a4: 0x96420424  lhu         $v0, 0x424($s2)
    ctx->pc = 0x2c85a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1060)));
    // 0x2c85a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2c85a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c85ac: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x2c85acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x2c85b0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2C85B0u;
    {
        const bool branch_taken_0x2c85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85B0u;
        // 0x2c85b4: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85b0) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C85B8u;
label_2c85b8:
    // 0x2c85b8: 0x8e4504ac  lw          $a1, 0x4AC($s2)
    ctx->pc = 0x2c85b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1196)));
    // 0x2c85bc: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2C85BCu;
    SET_GPR_U32(ctx, 31, 0x2C85C4u);
    ctx->pc = 0x2C85C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85BCu;
    // 0x2c85c0: 0x2484c408  addiu       $a0, $a0, -0x3BF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2C85BCu, 0x2C85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85C4u;
label_2c85c4:
    // 0x2c85c4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C85C4u;
    {
        const bool branch_taken_0x2c85c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85C4u;
        // 0x2c85c8: 0x93a20006  lbu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85c4) {
            ctx->pc = 0x2C8698u;
            goto label_2c8698;
        }
    }
    ctx->pc = 0x2C85CCu;
    // 0x2c85cc: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x2c85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
    // 0x2c85d0: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C85D0u;
    {
        const bool branch_taken_0x2c85d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c85d0) {
            ctx->pc = 0x2C85D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C85D0u;
            // 0x2c85d4: 0x93a20006  lbu         $v0, 0x6($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8698u;
            goto label_2c8698;
        }
    }
    ctx->pc = 0x2C85D8u;
    // 0x2c85d8: 0x944202fe  lhu         $v0, 0x2FE($v0)
    ctx->pc = 0x2c85d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x2c85dc: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x2c85dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x2c85e0: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x2c85e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x2c85e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C85E4u;
    {
        const bool branch_taken_0x2c85e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85E4u;
        // 0x2c85e8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85e4) {
            ctx->pc = 0x2C8604u;
            goto label_2c8604;
        }
    }
    ctx->pc = 0x2C85ECu;
    // 0x2c85ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c85f0: 0x2442c970  addiu       $v0, $v0, -0x3690
    ctx->pc = 0x2c85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953328));
    // 0x2c85f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c85f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c85fc: 0x800008  jr          $a0
    ctx->pc = 0x2C85FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8604u: goto label_2c8604;
            case 0x2C860Cu: goto label_2c860c;
            case 0x2C8614u: goto label_2c8614;
            case 0x2C861Cu: goto label_2c861c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C85FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C8604u;
label_2c8604:
    // 0x2c8604: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C8604u;
    {
        const bool branch_taken_0x2c8604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8604u;
        // 0x2c8608: 0x24110113  addiu       $s1, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8604) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C860Cu;
label_2c860c:
    // 0x2c860c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C860Cu;
    {
        const bool branch_taken_0x2c860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C860Cu;
        // 0x2c8610: 0x24110083  addiu       $s1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c860c) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C8614u;
label_2c8614:
    // 0x2c8614: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C8614u;
    {
        const bool branch_taken_0x2c8614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8614u;
        // 0x2c8618: 0x24110114  addiu       $s1, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8614) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C861Cu;
label_2c861c:
    // 0x2c861c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2c861cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8620: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C8620u;
    {
        const bool branch_taken_0x2c8620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8620u;
        // 0x2c8624: 0x24110023  addiu       $s1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8620) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C8628u;
label_2c8628:
    // 0x2c8628: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2c8628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_2c862c:
    // 0x2c862c: 0x8e4504ac  lw          $a1, 0x4AC($s2)
    ctx->pc = 0x2c862cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1196)));
    // 0x2c8630: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2C8630u;
    SET_GPR_U32(ctx, 31, 0x2C8638u);
    ctx->pc = 0x2C8634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8630u;
    // 0x2c8634: 0x2484c408  addiu       $a0, $a0, -0x3BF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2C8630u, 0x2C8638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8638u;
label_2c8638:
    // 0x2c8638: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C8638u;
    {
        const bool branch_taken_0x2c8638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8638u;
        // 0x2c863c: 0x93a20006  lbu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8638) {
            ctx->pc = 0x2C8698u;
            goto label_2c8698;
        }
    }
    ctx->pc = 0x2C8640u;
    // 0x2c8640: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x2c8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
    // 0x2c8644: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C8644u;
    {
        const bool branch_taken_0x2c8644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8644) {
            ctx->pc = 0x2C8648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8644u;
            // 0x2c8648: 0x93a20006  lbu         $v0, 0x6($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8698u;
            goto label_2c8698;
        }
    }
    ctx->pc = 0x2C864Cu;
    // 0x2c864c: 0x944202fe  lhu         $v0, 0x2FE($v0)
    ctx->pc = 0x2c864cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x2c8650: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x2c8650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x2c8654: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x2c8654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x2c8658: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8658u;
    {
        const bool branch_taken_0x2c8658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8658u;
        // 0x2c865c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8658) {
            ctx->pc = 0x2C8678u;
            goto label_2c8678;
        }
    }
    ctx->pc = 0x2C8660u;
    // 0x2c8660: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c8660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c8664: 0x2442cad0  addiu       $v0, $v0, -0x3530
    ctx->pc = 0x2c8664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953680));
    // 0x2c8668: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c866c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8670: 0x800008  jr          $a0
    ctx->pc = 0x2C8670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8678u: goto label_2c8678;
            case 0x2C8680u: goto label_2c8680;
            case 0x2C8688u: goto label_2c8688;
            case 0x2C8690u: goto label_2c8690;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8670u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C8678u;
label_2c8678:
    // 0x2c8678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8678u;
    {
        const bool branch_taken_0x2c8678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8678u;
        // 0x2c867c: 0x24110111  addiu       $s1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8678) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C8680u;
label_2c8680:
    // 0x2c8680: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8680u;
    {
        const bool branch_taken_0x2c8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8680u;
        // 0x2c8684: 0x24110112  addiu       $s1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8680) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C8688u;
label_2c8688:
    // 0x2c8688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8688u;
    {
        const bool branch_taken_0x2c8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8688u;
        // 0x2c868c: 0x2411011d  addiu       $s1, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8688) {
            ctx->pc = 0x2C8694u;
            goto label_2c8694;
        }
    }
    ctx->pc = 0x2C8690u;
label_2c8690:
    // 0x2c8690: 0x241100ea  addiu       $s1, $zero, 0xEA
    ctx->pc = 0x2c8690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_2c8694:
    // 0x2c8694: 0x93a20006  lbu         $v0, 0x6($sp)
    ctx->pc = 0x2c8694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
label_2c8698:
    // 0x2c8698: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c8698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c869c:
    // 0x2c869c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c869cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c86a0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C86A0u;
    {
        const bool branch_taken_0x2c86a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c86a0) {
            ctx->pc = 0x2C86A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86A0u;
            // 0x2c86a4: 0x964202fe  lhu         $v0, 0x2FE($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C86B8u;
            goto label_2c86b8;
        }
    }
    ctx->pc = 0x2C86A8u;
    // 0x2c86a8: 0x92420436  lbu         $v0, 0x436($s2)
    ctx->pc = 0x2c86a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1078)));
    // 0x2c86ac: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x2C86ACu;
    {
        const bool branch_taken_0x2c86ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c86ac) {
            ctx->pc = 0x2C86B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86ACu;
            // 0x2c86b0: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8858u;
            goto label_2c8858;
        }
    }
    ctx->pc = 0x2C86B4u;
    // 0x2c86b4: 0x964202fe  lhu         $v0, 0x2FE($s2)
    ctx->pc = 0x2c86b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
label_2c86b8:
    // 0x2c86b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c86b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86bc: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x2c86bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2c86c0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C86C0u;
    {
        const bool branch_taken_0x2c86c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86C0u;
        // 0x2c86c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86c0) {
            ctx->pc = 0x2C8770u;
            goto label_2c8770;
        }
    }
    ctx->pc = 0x2C86C8u;
    // 0x2c86c8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x2c86c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2c86cc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C86CCu;
    {
        const bool branch_taken_0x2c86cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86CCu;
        // 0x2c86d0: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86cc) {
            ctx->pc = 0x2C8770u;
            goto label_2c8770;
        }
    }
    ctx->pc = 0x2C86D4u;
    // 0x2c86d4: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2c86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2c86d8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C86D8u;
    {
        const bool branch_taken_0x2c86d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86D8u;
        // 0x2c86dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86d8) {
            ctx->pc = 0x2C8704u;
            goto label_2c8704;
        }
    }
    ctx->pc = 0x2C86E0u;
    // 0x2c86e0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x2c86e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x2c86e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c86e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c86e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C86E8u;
    {
        const bool branch_taken_0x2c86e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86E8u;
        // 0x2c86ec: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86e8) {
            ctx->pc = 0x2C86FCu;
            goto label_2c86fc;
        }
    }
    ctx->pc = 0x2C86F0u;
    // 0x2c86f0: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x2c86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x2c86f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C86F4u;
    {
        const bool branch_taken_0x2c86f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86F4u;
        // 0x2c86f8: 0x8c490040  lw          $t1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86f4) {
            ctx->pc = 0x2C8700u;
            goto label_2c8700;
        }
    }
    ctx->pc = 0x2C86FCu;
label_2c86fc:
    // 0x2c86fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c86fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8700:
    // 0x2c8700: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c8700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c8704:
    // 0x2c8704: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8704u;
    {
        const bool branch_taken_0x2c8704 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8704u;
        // 0x2c8708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8704) {
            ctx->pc = 0x2C8714u;
            goto label_2c8714;
        }
    }
    ctx->pc = 0x2C870Cu;
    // 0x2c870c: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C870Cu;
    {
        const bool branch_taken_0x2c870c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C870Cu;
        // 0x2c8710: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c870c) {
            ctx->pc = 0x2C8728u;
            goto label_2c8728;
        }
    }
    ctx->pc = 0x2C8714u;
label_2c8714:
    // 0x2c8714: 0x113400  sll         $a2, $s1, 16
    ctx->pc = 0x2c8714u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2c8718: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c8718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c871c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2c871cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2c8720: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C8720u;
    {
        const bool branch_taken_0x2c8720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8720u;
        // 0x2c8724: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8720) {
            ctx->pc = 0x2C874Cu;
            goto label_2c874c;
        }
    }
    ctx->pc = 0x2C8728u;
label_2c8728:
    // 0x2c8728: 0x8e450564  lw          $a1, 0x564($s2)
    ctx->pc = 0x2c8728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2c872c: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x2c872cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2c8730: 0xc0b2d06  jal         func_2CB418
    ctx->pc = 0x2C8730u;
    SET_GPR_U32(ctx, 31, 0x2C8738u);
    ctx->pc = 0x2C8734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8730u;
    // 0x2c8734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB418u, 0x2C8730u, 0x2C8738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8738u;
label_2c8738:
    // 0x2c8738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c873c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c8740: 0x10a20044  beq         $a1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C8740u;
    {
        const bool branch_taken_0x2c8740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8740u;
        // 0x2c8744: 0x113400  sll         $a2, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8740) {
            ctx->pc = 0x2C8854u;
            goto label_2c8854;
        }
    }
    ctx->pc = 0x2C8748u;
    // 0x2c8748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c874c:
    // 0x2c874c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2c874cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2c8750: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c8750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8754: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c8754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8758: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c8758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c875c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c875cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8760: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2C8760u;
    SET_GPR_U32(ctx, 31, 0x2C8768u);
    ctx->pc = 0x2C8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8760u;
    // 0x2c8764: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2C8760u, 0x2C8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8768u;
label_2c8768:
    // 0x2c8768: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2C8768u;
    {
        const bool branch_taken_0x2c8768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8768u;
        // 0x2c876c: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8768) {
            ctx->pc = 0x2C8858u;
            goto label_2c8858;
        }
    }
    ctx->pc = 0x2C8770u;
label_2c8770:
    // 0x2c8770: 0x24020350  addiu       $v0, $zero, 0x350
    ctx->pc = 0x2c8770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
    // 0x2c8774: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8774u;
    {
        const bool branch_taken_0x2c8774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8774u;
        // 0x2c8778: 0x24020359  addiu       $v0, $zero, 0x359 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 857));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8774) {
            ctx->pc = 0x2C87A4u;
            goto label_2c87a4;
        }
    }
    ctx->pc = 0x2C877Cu;
    // 0x2c877c: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C877Cu;
    {
        const bool branch_taken_0x2c877c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c877c) {
            ctx->pc = 0x2C8780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C877Cu;
            // 0x2c8780: 0x964203a4  lhu         $v0, 0x3A4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 932)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87D0u;
            goto label_2c87d0;
        }
    }
    ctx->pc = 0x2C8784u;
    // 0x2c8784: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x2c8784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x2c8788: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c8788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c878c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c878cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c8790: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8790u;
    {
        const bool branch_taken_0x2c8790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8790u;
        // 0x2c8794: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8790) {
            ctx->pc = 0x2C87C4u;
            goto label_2c87c4;
        }
    }
    ctx->pc = 0x2C8798u;
    // 0x2c8798: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x2c8798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x2c879c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C879Cu;
    {
        const bool branch_taken_0x2c879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C879Cu;
        // 0x2c87a0: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c879c) {
            ctx->pc = 0x2C87C8u;
            goto label_2c87c8;
        }
    }
    ctx->pc = 0x2C87A4u;
label_2c87a4:
    // 0x2c87a4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x2c87a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x2c87a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c87ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c87acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c87b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C87B0u;
    {
        const bool branch_taken_0x2c87b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87B0u;
        // 0x2c87b4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87b0) {
            ctx->pc = 0x2C87C4u;
            goto label_2c87c4;
        }
    }
    ctx->pc = 0x2C87B8u;
    // 0x2c87b8: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x2c87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x2c87bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C87BCu;
    {
        const bool branch_taken_0x2c87bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87BCu;
        // 0x2c87c0: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87bc) {
            ctx->pc = 0x2C87C8u;
            goto label_2c87c8;
        }
    }
    ctx->pc = 0x2C87C4u;
label_2c87c4:
    // 0x2c87c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c87c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c87c8:
    // 0x2c87c8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c87c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87cc: 0x964203a4  lhu         $v0, 0x3A4($s2)
    ctx->pc = 0x2c87ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 932)));
label_2c87d0:
    // 0x2c87d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C87D0u;
    {
        const bool branch_taken_0x2c87d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87D0u;
        // 0x2c87d4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87d0) {
            ctx->pc = 0x2C8828u;
            goto label_2c8828;
        }
    }
    ctx->pc = 0x2C87D8u;
    // 0x2c87d8: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x2C87D8u;
    SET_GPR_U32(ctx, 31, 0x2C87E0u);
    ctx->pc = 0x2C87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87D8u;
    // 0x2c87dc: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x2C87D8u, 0x2C87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87E0u;
label_2c87e0:
    // 0x2c87e0: 0x964303a4  lhu         $v1, 0x3A4($s2)
    ctx->pc = 0x2c87e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 932)));
    // 0x2c87e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c87e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c87e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87ec: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c87ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87f0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2c87f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c87f4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C87F4u;
    {
        const bool branch_taken_0x2c87f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c87f4) {
            ctx->pc = 0x2C87F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C87F4u;
            // 0x2c87f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C87FCu;
label_2c87fc:
    // 0x2c87fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c87fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c8800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8804: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c8804u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8808: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2c8808u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c880c: 0x3010  mfhi        $a2
    ctx->pc = 0x2c880cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2c8810: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2c8810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2c8814: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2c8814u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2c8818: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2C8818u;
    SET_GPR_U32(ctx, 31, 0x2C8820u);
    ctx->pc = 0x2C881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8818u;
    // 0x2c881c: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2C8818u, 0x2C8820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8820u;
label_2c8820:
    // 0x2c8820: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C8820u;
    {
        const bool branch_taken_0x2c8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8820u;
        // 0x2c8824: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8820) {
            ctx->pc = 0x2C8858u;
            goto label_2c8858;
        }
    }
    ctx->pc = 0x2C8828u;
label_2c8828:
    // 0x2c8828: 0x113400  sll         $a2, $s1, 16
    ctx->pc = 0x2c8828u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2c882c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c882cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c8830: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2c8830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2c8834: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c8834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8838: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2c8838u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2c883c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c883cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8840: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c8840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c8844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8848: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c8848u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c884c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2C884Cu;
    SET_GPR_U32(ctx, 31, 0x2C8854u);
    ctx->pc = 0x2C8850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C884Cu;
    // 0x2c8850: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2C884Cu, 0x2C8854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8854u;
label_2c8854:
    // 0x2c8854: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x2c8854u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_2c8858:
    // 0x2c8858: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2c8858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2c885c: 0x56a0fe3a  bnel        $s5, $zero, . + 4 + (-0x1C6 << 2)
    ctx->pc = 0x2C885Cu;
    {
        const bool branch_taken_0x2c885c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c885c) {
            ctx->pc = 0x2C8860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C885Cu;
            // 0x2c8860: 0x92c6001a  lbu         $a2, 0x1A($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8148;
        }
    }
    ctx->pc = 0x2C8864u;
label_2c8864:
    // 0x2c8864: 0x96c20010  lhu         $v0, 0x10($s6)
    ctx->pc = 0x2c8864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2c8868: 0xa64003ac  sh          $zero, 0x3AC($s2)
    ctx->pc = 0x2c8868u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 940), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c886c: 0x96d00012  lhu         $s0, 0x12($s6)
    ctx->pc = 0x2c886cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x2c8870: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C8870u;
    {
        const bool branch_taken_0x2c8870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8870u;
        // 0x2c8874: 0x2c28821  addu        $s1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8870) {
            ctx->pc = 0x2C8978u;
            goto label_2c8978;
        }
    }
    ctx->pc = 0x2C8878u;
label_2c8878:
    // 0x2c8878: 0x92c5001b  lbu         $a1, 0x1B($s6)
    ctx->pc = 0x2c8878u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 27)));
    // 0x2c887c: 0xc0b1f8c  jal         func_2C7E30
    ctx->pc = 0x2C887Cu;
    SET_GPR_U32(ctx, 31, 0x2C8884u);
    ctx->pc = 0x2C8880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C887Cu;
    // 0x2c8880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7E30u, 0x2C887Cu, 0x2C8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8884u;
label_2c8884:
    // 0x2c8884: 0xc6430430  lwc1        $f3, 0x430($s2)
    ctx->pc = 0x2c8884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8888: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x2c8888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x2c888c: 0x22c3e  dsrl32      $a1, $v0, 16
    ctx->pc = 0x2c888cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x2c8890: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x2c8890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2c8894: 0xa7a30032  sh          $v1, 0x32($sp)
    ctx->pc = 0x2c8894u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8898: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x2c8898u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c889c: 0xa7a40034  sh          $a0, 0x34($sp)
    ctx->pc = 0x2c889cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c88a0: 0xa7a50036  sh          $a1, 0x36($sp)
    ctx->pc = 0x2c88a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c88a4: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x2c88a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c88a8: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x2c88a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c88ac: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2c88acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c88b0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2c88b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c88b4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2c88b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c88b8: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x2c88b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2c88bc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2c88bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c88c0: 0x0  nop
    ctx->pc = 0x2c88c0u;
    // NOP
    // 0x2c88c4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c88c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c88c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2c88c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c88cc: 0x0  nop
    ctx->pc = 0x2c88ccu;
    // NOP
    // 0x2c88d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c88d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c88d4: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x2c88d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c88d8: 0x0  nop
    ctx->pc = 0x2c88d8u;
    // NOP
    // 0x2c88dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C88DCu;
    {
        const bool branch_taken_0x2c88dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c88dc) {
            ctx->pc = 0x2C88F4u;
            goto label_2c88f4;
        }
    }
    ctx->pc = 0x2C88E4u;
    // 0x2c88e4: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2c88e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c88e8: 0x0  nop
    ctx->pc = 0x2c88e8u;
    // NOP
    // 0x2c88ec: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x2C88ECu;
    {
        const bool branch_taken_0x2c88ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c88ec) {
            ctx->pc = 0x2C88F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C88ECu;
            // 0x2c88f0: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8960u;
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C88F4u;
label_2c88f4:
    // 0x2c88f4: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2c88f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c88f8: 0x0  nop
    ctx->pc = 0x2c88f8u;
    // NOP
    // 0x2c88fc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C88FCu;
    {
        const bool branch_taken_0x2c88fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c88fc) {
            ctx->pc = 0x2C8928u;
            goto label_2c8928;
        }
    }
    ctx->pc = 0x2C8904u;
    // 0x2c8904: 0xc6400444  lwc1        $f0, 0x444($s2)
    ctx->pc = 0x2c8904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8908: 0xc64103a8  lwc1        $f1, 0x3A8($s2)
    ctx->pc = 0x2c8908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c890c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c890cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c8910: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c8910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c8914: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c8914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c8918: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2c8918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c891c: 0x0  nop
    ctx->pc = 0x2c891cu;
    // NOP
    // 0x2c8920: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x2C8920u;
    {
        const bool branch_taken_0x2c8920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8920) {
            ctx->pc = 0x2C8924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8920u;
            // 0x2c8924: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8960u;
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C8928u;
label_2c8928:
    // 0x2c8928: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x2c8928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c892c: 0x0  nop
    ctx->pc = 0x2c892cu;
    // NOP
    // 0x2c8930: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2C8930u;
    {
        const bool branch_taken_0x2c8930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8930) {
            ctx->pc = 0x2C8934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8930u;
            // 0x2c8934: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8970u;
            goto label_2c8970;
        }
    }
    ctx->pc = 0x2C8938u;
    // 0x2c8938: 0xc6400444  lwc1        $f0, 0x444($s2)
    ctx->pc = 0x2c8938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c893c: 0xc64103a8  lwc1        $f1, 0x3A8($s2)
    ctx->pc = 0x2c893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c8940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c8944: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c8944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c8948: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2c8948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2c894c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c894cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8950: 0x0  nop
    ctx->pc = 0x2c8950u;
    // NOP
    // 0x2c8954: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8954u;
    {
        const bool branch_taken_0x2c8954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8954) {
            ctx->pc = 0x2C8958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8954u;
            // 0x2c8958: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8970u;
            goto label_2c8970;
        }
    }
    ctx->pc = 0x2C895Cu;
    // 0x2c895c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x2c895cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_2c8960:
    // 0x2c8960: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x2c8960u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c8964: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c8964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c8968: 0xa64203ac  sh          $v0, 0x3AC($s2)
    ctx->pc = 0x2c8968u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c896c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c896cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2c8970:
    // 0x2c8970: 0x1600ffc1  bnez        $s0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2C8970u;
    {
        const bool branch_taken_0x2c8970 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8970u;
        // 0x2c8974: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8970) {
            ctx->pc = 0x2C8878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8878;
        }
    }
    ctx->pc = 0x2C8978u;
label_2c8978:
    // 0x2c8978: 0x92420420  lbu         $v0, 0x420($s2)
    ctx->pc = 0x2c8978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1056)));
    // 0x2c897c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c8980: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c8980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8984: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C8984u;
    {
        const bool branch_taken_0x2c8984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8984u;
        // 0x2c8988: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8984) {
            ctx->pc = 0x2C8A80u;
            goto label_2c8a80;
        }
    }
    ctx->pc = 0x2C898Cu;
    // 0x2c898c: 0x96c20014  lhu         $v0, 0x14($s6)
    ctx->pc = 0x2c898cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x2c8990: 0x96d30016  lhu         $s3, 0x16($s6)
    ctx->pc = 0x2c8990u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
    // 0x2c8994: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C8994u;
    {
        const bool branch_taken_0x2c8994 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8994u;
        // 0x2c8998: 0x2c2a021  addu        $s4, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8994) {
            ctx->pc = 0x2C8A7Cu;
            goto label_2c8a7c;
        }
    }
    ctx->pc = 0x2C899Cu;
    // 0x2c899c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2c899cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89a0: 0x26510410  addiu       $s1, $s2, 0x410
    ctx->pc = 0x2c89a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
    // 0x2c89a4: 0x0  nop
    ctx->pc = 0x2c89a4u;
    // NOP
label_2c89a8:
    // 0x2c89a8: 0x92c6001c  lbu         $a2, 0x1C($s6)
    ctx->pc = 0x2c89a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x2c89ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c89acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c89b0: 0xc0b1fc0  jal         func_2C7F00
    ctx->pc = 0x2C89B0u;
    SET_GPR_U32(ctx, 31, 0x2C89B8u);
    ctx->pc = 0x2C89B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89B0u;
    // 0x2c89b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7F00u, 0x2C89B0u, 0x2C89B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89B8u;
label_2c89b8:
    // 0x2c89b8: 0xc6430430  lwc1        $f3, 0x430($s2)
    ctx->pc = 0x2c89b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c89bc: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2c89bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c89c0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2c89c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c89c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c89c8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2c89c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c89cc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2c89ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c89d0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2c89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2c89d4: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x2c89d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c89d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c89d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c89dc: 0x0  nop
    ctx->pc = 0x2c89dcu;
    // NOP
    // 0x2c89e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c89e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c89e4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x2c89e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c89e8: 0x0  nop
    ctx->pc = 0x2c89e8u;
    // NOP
    // 0x2c89ec: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x2C89ECu;
    {
        const bool branch_taken_0x2c89ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c89ec) {
            ctx->pc = 0x2C89F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89ECu;
            // 0x2c89f0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A74u;
            goto label_2c8a74;
        }
    }
    ctx->pc = 0x2C89F4u;
    // 0x2c89f4: 0xc6400444  lwc1        $f0, 0x444($s2)
    ctx->pc = 0x2c89f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c89f8: 0xc64103a8  lwc1        $f1, 0x3A8($s2)
    ctx->pc = 0x2c89f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c89fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c89fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c8a00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c8a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c8a04: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c8a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c8a08: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c8a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8a0c: 0x0  nop
    ctx->pc = 0x2c8a0cu;
    // NOP
    // 0x2c8a10: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2C8A10u;
    {
        const bool branch_taken_0x2c8a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A10u;
        // 0x2c8a14: 0x2ea20008  sltiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a10) {
            ctx->pc = 0x2C8A70u;
            goto label_2c8a70;
        }
    }
    ctx->pc = 0x2C8A18u;
    // 0x2c8a18: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C8A18u;
    {
        const bool branch_taken_0x2c8a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a18) {
            ctx->pc = 0x2C8A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A18u;
            // 0x2c8a1c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A74u;
            goto label_2c8a74;
        }
    }
    ctx->pc = 0x2C8A20u;
    // 0x2c8a20: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2c8a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8a24: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c8a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c8a28: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C8A28u;
    {
        const bool branch_taken_0x2c8a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a28) {
            ctx->pc = 0x2C8A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A28u;
            // 0x2c8a2c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A74u;
            goto label_2c8a74;
        }
    }
    ctx->pc = 0x2C8A30u;
    // 0x2c8a30: 0x93a20008  lbu         $v0, 0x8($sp)
    ctx->pc = 0x2c8a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8a34: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c8a34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2c8a38: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2c8a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8a3c: 0x93a30009  lbu         $v1, 0x9($sp)
    ctx->pc = 0x2c8a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x2c8a40: 0x93a40007  lbu         $a0, 0x7($sp)
    ctx->pc = 0x2c8a40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x2c8a44: 0x93a5000a  lbu         $a1, 0xA($sp)
    ctx->pc = 0x2c8a44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x2c8a48: 0xae0603b4  sw          $a2, 0x3B4($s0)
    ctx->pc = 0x2c8a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 6));
    // 0x2c8a4c: 0xa20203b1  sb          $v0, 0x3B1($s0)
    ctx->pc = 0x2c8a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 945), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c8a50: 0xa20303b8  sb          $v1, 0x3B8($s0)
    ctx->pc = 0x2c8a50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 952), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8a54: 0xa20403b0  sb          $a0, 0x3B0($s0)
    ctx->pc = 0x2c8a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 944), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8a58: 0xa20503b9  sb          $a1, 0x3B9($s0)
    ctx->pc = 0x2c8a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 953), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c8a5c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2c8a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c8a60: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2c8a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8a64: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2c8a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2c8a68: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2c8a68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c8a6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c8a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c8a70:
    // 0x2c8a70: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2c8a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2c8a74:
    // 0x2c8a74: 0x1660ffcc  bnez        $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2C8A74u;
    {
        const bool branch_taken_0x2c8a74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A74u;
        // 0x2c8a78: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a74) {
            ctx->pc = 0x2C89A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c89a8;
        }
    }
    ctx->pc = 0x2C8A7Cu;
label_2c8a7c:
    // 0x2c8a7c: 0xa65503ae  sh          $s5, 0x3AE($s2)
    ctx->pc = 0x2c8a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 942), (uint16_t)GPR_U32(ctx, 21));
label_2c8a80:
    // 0x2c8a80: 0xc6400430  lwc1        $f0, 0x430($s2)
    ctx->pc = 0x2c8a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8a84: 0xc6410440  lwc1        $f1, 0x440($s2)
    ctx->pc = 0x2c8a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8a88: 0xe640041c  swc1        $f0, 0x41C($s2)
    ctx->pc = 0x2c8a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1052), bits); }
    // 0x2c8a8c: 0xe64103a8  swc1        $f1, 0x3A8($s2)
    ctx->pc = 0x2c8a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 936), bits); }
    // 0x2c8a90: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2c8a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c8a94:
    // 0x2c8a94: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2c8a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c8a98: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2c8a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c8a9c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2c8a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c8aa0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2c8aa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c8aa4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2c8aa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c8aa8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c8aa8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c8aac: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2c8aacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c8ab0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2c8ab0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c8ab4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c8ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8ab8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2c8ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8abc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8ABCu;
        // 0x2c8ac0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8AC4u;
    // 0x2c8ac4: 0x0  nop
    ctx->pc = 0x2c8ac4u;
    // NOP
    // 0x2c8ac8: 0x0  nop
    ctx->pc = 0x2c8ac8u;
    // NOP
    // 0x2c8acc: 0x0  nop
    ctx->pc = 0x2c8accu;
    // NOP
    // 0x2c8ad0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c8ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c8ad4: 0x0  nop
    ctx->pc = 0x2c8ad4u;
    // NOP
    ctx->pc = 0x2c8ad8u;
}
