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

// Function: func_001EC928
// Address: 0x1ec928 - 0x1eca60
void func_001EC928_0x1ec928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EC928_0x1ec928");
#endif

    ctx->pc = 0x1ec928u;

    // 0x1ec928: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ec928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ec92c: 0x14a20049  bne         $a1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1EC92Cu;
    {
        const bool branch_taken_0x1ec92c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec92c) {
            ctx->pc = 0x1ECA54u;
            goto label_1eca54;
        }
    }
    ctx->pc = 0x1EC934u;
    // 0x1ec934: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1EC934u;
    {
        const bool branch_taken_0x1ec934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC934u;
        // 0x1ec938: 0x3c0a0057  lui         $t2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec934) {
            ctx->pc = 0x1ECA54u;
            goto label_1eca54;
        }
    }
    ctx->pc = 0x1EC93Cu;
    // 0x1ec93c: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x1ec93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x1ec940: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ec940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ec944: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ec944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1ec948: 0x3c01c1ce  lui         $at, 0xC1CE
    ctx->pc = 0x1ec948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49614 << 16));
    // 0x1ec94c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ec94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1ec950: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ec950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ec954: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x1ec954u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
    // 0x1ec958: 0x3c01c204  lui         $at, 0xC204
    ctx->pc = 0x1ec958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49668 << 16));
    // 0x1ec95c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1ec95cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1ec960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ec960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec964: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x1ec964u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x1ec968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ec968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec96c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ec96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec970: 0x25248230  addiu       $a0, $t1, -0x7DD0
    ctx->pc = 0x1ec970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935088));
    // 0x1ec974: 0xe5038220  swc1        $f3, -0x7DE0($t0)
    ctx->pc = 0x1ec974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568220u, _value); } while (0); }
    // 0x1ec978: 0x254281e0  addiu       $v0, $t2, -0x7E20
    ctx->pc = 0x1ec978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935008));
    // 0x1ec97c: 0xe54481e0  swc1        $f4, -0x7E20($t2)
    ctx->pc = 0x1ec97cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294935008), bits); }
    // 0x1ec980: 0x3c0b0057  lui         $t3, 0x57
    ctx->pc = 0x1ec980u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)87 << 16));
    // 0x1ec984: 0xe5218230  swc1        $f1, -0x7DD0($t1)
    ctx->pc = 0x1ec984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568230u, _value); } while (0); }
    // 0x1ec988: 0x256781f0  addiu       $a3, $t3, -0x7E10
    ctx->pc = 0x1ec988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294935024));
    // 0x1ec98c: 0x3c01be57  lui         $at, 0xBE57
    ctx->pc = 0x1ec98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48727 << 16));
    // 0x1ec990: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1ec990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1ec994: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ec994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1ec998: 0x3c0c0057  lui         $t4, 0x57
    ctx->pc = 0x1ec998u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)87 << 16));
    // 0x1ec99c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1ec99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1ec9a0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ec9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1ec9a4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ec9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1ec9a8: 0x25868200  addiu       $a2, $t4, -0x7E00
    ctx->pc = 0x1ec9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294935040));
    // 0x1ec9ac: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1ec9acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56823Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56823Cu, _value); } while (0); }
    // 0x1ec9b0: 0x3c0d0057  lui         $t5, 0x57
    ctx->pc = 0x1ec9b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)87 << 16));
    // 0x1ec9b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec9b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec9b8: 0x25a58210  addiu       $a1, $t5, -0x7DF0
    ctx->pc = 0x1ec9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294935056));
    // 0x1ec9bc: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x1ec9bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ec9c0: 0x25038220  addiu       $v1, $t0, -0x7DE0
    ctx->pc = 0x1ec9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935072));
    // 0x1ec9c4: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x1ec9c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1ec9c8: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1ec9c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1ec9cc: 0x3c01be56  lui         $at, 0xBE56
    ctx->pc = 0x1ec9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48726 << 16));
    // 0x1ec9d0: 0x34217770  ori         $at, $at, 0x7770
    ctx->pc = 0x1ec9d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30576);
    // 0x1ec9d4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ec9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1ec9d8: 0xe56081f0  swc1        $f0, -0x7E10($t3)
    ctx->pc = 0x1ec9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681F0u, _value); } while (0); }
    // 0x1ec9dc: 0xe4e70004  swc1        $f7, 0x4($a3)
    ctx->pc = 0x1ec9dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681F4u, _value); } while (0); }
    // 0x1ec9e0: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x1ec9e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681FCu, _value); } while (0); }
    // 0x1ec9e4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1ec9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1ec9e8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ec9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1ec9ec: 0xe5808200  swc1        $f0, -0x7E00($t4)
    ctx->pc = 0x1ec9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568200u, _value); } while (0); }
    // 0x1ec9f0: 0xe4c80008  swc1        $f8, 0x8($a2)
    ctx->pc = 0x1ec9f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568208u, _value); } while (0); }
    // 0x1ec9f4: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x1ec9f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56820Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56820Cu, _value); } while (0); }
    // 0x1ec9f8: 0xe5a08210  swc1        $f0, -0x7DF0($t5)
    ctx->pc = 0x1ec9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568210u, _value); } while (0); }
    // 0x1ec9fc: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x1ec9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
    // 0x1eca00: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1eca00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1eca04: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1eca04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1eca08: 0x3c01c11b  lui         $at, 0xC11B
    ctx->pc = 0x1eca08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49435 << 16));
    // 0x1eca0c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1eca0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1eca10: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1eca10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1eca14: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1eca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568218u, _value); } while (0); }
    // 0x1eca18: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x1eca18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56821Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56821Cu, _value); } while (0); }
    // 0x1eca1c: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1eca1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
    // 0x1eca20: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1eca20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1eca24: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1eca24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1eca28: 0x3c01c0bd  lui         $at, 0xC0BD
    ctx->pc = 0x1eca28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49341 << 16));
    // 0x1eca2c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1eca2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1eca30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1eca30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eca34: 0xe4690004  swc1        $f9, 0x4($v1)
    ctx->pc = 0x1eca34u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568224u, _value); } while (0); }
    // 0x1eca38: 0xe46a0008  swc1        $f10, 0x8($v1)
    ctx->pc = 0x1eca38u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568228u, _value); } while (0); }
    // 0x1eca3c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1eca3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56822Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56822Cu, _value); } while (0); }
    // 0x1eca40: 0xe48b0004  swc1        $f11, 0x4($a0)
    ctx->pc = 0x1eca40u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568234u, _value); } while (0); }
    // 0x1eca44: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1eca44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568238u, _value); } while (0); }
    // 0x1eca48: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1eca48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681F8u, _value); } while (0); }
    // 0x1eca4c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1eca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568204u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568204u, _value); } while (0); }
    // 0x1eca50: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1eca50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568214u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568214u, _value); } while (0); }
label_1eca54:
    // 0x1eca54: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECA5Cu;
    // 0x1eca5c: 0x0  nop
    ctx->pc = 0x1eca5cu;
    // NOP
    ctx->pc = 0x1eca60u;
}
