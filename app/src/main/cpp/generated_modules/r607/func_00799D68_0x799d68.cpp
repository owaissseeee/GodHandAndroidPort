#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_00799D68
// Address: 0x799d68 - 0x79a0c0
void func_00799D68_0x799d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D68_0x799d68");
#endif

    switch (ctx->pc) {
        case 0x799ebcu: goto label_799ebc;
        case 0x799eccu: goto label_799ecc;
        case 0x799ef8u: goto label_799ef8;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f58u: goto label_799f58;
        case 0x799f70u: goto label_799f70;
        case 0x799f94u: goto label_799f94;
        case 0x799fa4u: goto label_799fa4;
        case 0x79a038u: goto label_79a038;
        case 0x79a068u: goto label_79a068;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a098u: goto label_79a098;
        default: break;
    }

    ctx->pc = 0x799d68u;

    // 0x799d68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x799d6c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d70: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x799d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x799d74: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799d78: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x799d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x799d7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x799d7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d80: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x799d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x799d84: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x799d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x799d88: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x799d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x799d8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x799d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x799d90: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x799d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x799d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799d98: 0x8ca3b730  lw          $v1, -0x48D0($a1)
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79B730u));
    // 0x799d9c: 0x2448b638  addiu       $t0, $v0, -0x49C8
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948408));
    // 0x799da0: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x799da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x799da4: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x799da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x799da8: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x79B640u));
    // 0x799dac: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x799dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799db0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x799db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799db4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x799db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x799db8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x799DB8u;
    {
        const bool branch_taken_0x799db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB8u;
        // 0x799dbc: 0x2ab60020  slti        $s6, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799db8) {
            ctx->pc = 0x799E70u;
            goto label_799e70;
        }
    }
    ctx->pc = 0x799DC0u;
    // 0x799dc0: 0x3c014211  lui         $at, 0x4211
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16913 << 16));
    // 0x799dc4: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x799dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x799dc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799dcc: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799dd0: 0x3c01c066  lui         $at, 0xC066
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49254 << 16));
    // 0x799dd4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799ddc: 0x2462b700  addiu       $v0, $v1, -0x4900
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x799de0: 0xe461b700  swc1        $f1, -0x4900($v1)
    ctx->pc = 0x799de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B700u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B700u, _value); } while (0); }
    // 0x799de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799de8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799dec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799df0: 0x3c01c21f  lui         $at, 0xC21F
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49695 << 16));
    // 0x799df4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x799df8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799dfc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B708u, _value); } while (0); }
    // 0x799e00: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x799e00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B704u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B704u, _value); } while (0); }
    // 0x799e04: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x799e04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B70Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B70Cu, _value); } while (0); }
    // 0x799e08: 0x3c014243  lui         $at, 0x4243
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16963 << 16));
    // 0x799e0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x799e10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799e14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x799e18: 0x3c0141b9  lui         $at, 0x41B9
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16825 << 16));
    // 0x799e1c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x799e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x799e20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799e24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B710u, _value); } while (0); }
    // 0x799e28: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x799e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B714u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B714u, _value); } while (0); }
    // 0x799e2c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x799e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B718u, _value); } while (0); }
    // 0x799e30: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x799e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B71Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B71Cu, _value); } while (0); }
    // 0x799e34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x799e38: 0x3c01425b  lui         $at, 0x425B
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16987 << 16));
    // 0x799e3c: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x799e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x799e40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799e44: 0x3c01c210  lui         $at, 0xC210
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49680 << 16));
    // 0x799e48: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x799e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x799e4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799e50: 0x3c01405b  lui         $at, 0x405B
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16475 << 16));
    // 0x799e54: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x799e58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799e5c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x799e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B72Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B72Cu, _value); } while (0); }
    // 0x799e60: 0xaca4b730  sw          $a0, -0x48D0($a1)
    ctx->pc = 0x799e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294948656), GPR_U32(ctx, 4));
    // 0x799e64: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x799e64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B720u, _value); } while (0); }
    // 0x799e68: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x799e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B724u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B724u, _value); } while (0); }
    // 0x799e6c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x799e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79B728u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79B728u, _value); } while (0); }
label_799e70:
    // 0x799e70: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x799E70u;
    {
        const bool branch_taken_0x799e70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E70u;
        // 0x799e74: 0x3c03005f  lui         $v1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e70) {
            ctx->pc = 0x799EA4u;
            goto label_799ea4;
        }
    }
    ctx->pc = 0x799E78u;
    // 0x799e78: 0x151142  srl         $v0, $s5, 5
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
    // 0x799e7c: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
    // 0x799e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x799e84: 0x32a5001f  andi        $a1, $s5, 0x1F
    ctx->pc = 0x799e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)31);
    // 0x799e88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x799e8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x799e90: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x799e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x799e94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799e98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799e9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799E9Cu;
    {
        const bool branch_taken_0x799e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E9Cu;
        // 0x799ea0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e9c) {
            ctx->pc = 0x799EA8u;
            goto label_799ea8;
        }
    }
    ctx->pc = 0x799EA4u;
label_799ea4:
    // 0x799ea4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799ea8:
    // 0x799ea8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x799ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x799eac: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x799EACu;
    {
        const bool branch_taken_0x799eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EACu;
        // 0x799eb0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799eac) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x799EB4u;
    // 0x799eb4: 0xc1e68e6  jal         func_79A398
    ctx->pc = 0x799EB4u;
    SET_GPR_U32(ctx, 31, 0x799EBCu);
    ctx->pc = 0x79A398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A398u, 0x799EB4u, 0x799EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EBCu;
label_799ebc:
    // 0x799ebc: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x799EBCu;
    {
        const bool branch_taken_0x799ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EBCu;
        // 0x799ec0: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ebc) {
            ctx->pc = 0x79A008u;
            goto label_79a008;
        }
    }
    ctx->pc = 0x799EC4u;
    // 0x799ec4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799EC4u;
    SET_GPR_U32(ctx, 31, 0x799ECCu);
    ctx->pc = 0x799EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC4u;
    // 0x799ec8: 0x15a080  sll         $s4, $s5, 2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799EC4u, 0x799ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ECCu;
label_799ecc:
    // 0x799ecc: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799ed0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ed4: 0x2463b580  addiu       $v1, $v1, -0x4A80
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948224));
    // 0x799ed8: 0x24a5b700  addiu       $a1, $a1, -0x4900
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
    // 0x799edc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x799ee0: 0x158900  sll         $s1, $s5, 4
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x799ee4: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x799ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eec: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x799ef0: 0xc04b364  jal         func_12CD90
    ctx->pc = 0x799EF0u;
    SET_GPR_U32(ctx, 31, 0x799EF8u);
    ctx->pc = 0x799EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF0u;
    // 0x799ef4: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CD90u, 0x799EF0u, 0x799EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF8u;
label_799ef8:
    // 0x799ef8: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x799efc: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799f00: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x799f04: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F04u;
    SET_GPR_U32(ctx, 31, 0x799F0Cu);
    ctx->pc = 0x799F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F04u;
    // 0x799f08: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F04u, 0x799F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F0Cu;
label_799f0c:
    // 0x799f0c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799f10: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799f14: 0x2442b740  addiu       $v0, $v0, -0x48C0
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948672));
    // 0x799f18: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x799f1c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x799f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799f28: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x799f2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x799f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799f30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f34: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x799F34u;
    SET_GPR_U32(ctx, 31, 0x799F3Cu);
    ctx->pc = 0x799F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F34u;
    // 0x799f38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x799F34u, 0x799F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F3Cu;
label_799f3c:
    // 0x799f3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x799f3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f44: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x799f48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799f4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f50: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x799F50u;
    SET_GPR_U32(ctx, 31, 0x799F58u);
    ctx->pc = 0x799F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F50u;
    // 0x799f54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x799F50u, 0x799F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F58u;
label_799f58:
    // 0x799f58: 0x8e63b770  lw          $v1, -0x4890($s3)
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948720)));
    // 0x799f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f64: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x799f68: 0xc1e6906  jal         func_79A418
    ctx->pc = 0x799F68u;
    SET_GPR_U32(ctx, 31, 0x799F70u);
    ctx->pc = 0x799F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F68u;
    // 0x799f6c: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A418u, 0x799F68u, 0x799F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x3b41021  addu        $v0, $sp, $s4
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    // 0x799f74: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x799f78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799f7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f88: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799f8c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x799F8Cu;
    SET_GPR_U32(ctx, 31, 0x799F94u);
    ctx->pc = 0x799F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F8Cu;
    // 0x799f90: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x799F8Cu, 0x799F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F94u;
label_799f94:
    // 0x799f94: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799f98: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x799f9c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F9Cu;
    SET_GPR_U32(ctx, 31, 0x799FA4u);
    ctx->pc = 0x799FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F9Cu;
    // 0x799fa0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F9Cu, 0x799FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA4u;
label_799fa4:
    // 0x799fa4: 0x8e64b770  lw          $a0, -0x4890($s3)
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948720)));
    // 0x799fa8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fac: 0x3c014528  lui         $at, 0x4528
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17704 << 16));
    // 0x799fb0: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x799fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x799fb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799fb8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x799fbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799fc0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x799fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x799fc4: 0x8e63b770  lw          $v1, -0x4890($s3)
    ctx->pc = 0x799fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948720)));
    // 0x799fc8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x799fcc: 0x12c0002f  beqz        $s6, . + 4 + (0x2F << 2)
    ctx->pc = 0x799FCCu;
    {
        const bool branch_taken_0x799fcc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FCCu;
        // 0x799fd0: 0xe460001c  swc1        $f0, 0x1C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fcc) {
            ctx->pc = 0x79A08Cu;
            goto label_79a08c;
        }
    }
    ctx->pc = 0x799FD4u;
    // 0x799fd4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799fd8: 0x152142  srl         $a0, $s5, 5
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
    // 0x799fdc: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
    // 0x799fe0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x799fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x799fe4: 0x32a2001f  andi        $v0, $s5, 0x1F
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)31);
    // 0x799fe8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x799fec: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x799ff0: 0x431806  srlv        $v1, $v1, $v0
    ctx->pc = 0x799ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x799ff4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x799ff8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x799ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799ffc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a000: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79A000u;
    {
        const bool branch_taken_0x79a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A000u;
        // 0x79a004: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a000) {
            ctx->pc = 0x79A08Cu;
            goto label_79a08c;
        }
    }
    ctx->pc = 0x79A008u;
label_79a008:
    // 0x79a008: 0x8e23b770  lw          $v1, -0x4890($s1)
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948720)));
    // 0x79a00c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79a010: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x79a010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a014: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A014u;
    {
        const bool branch_taken_0x79a014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A014u;
        // 0x79a018: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a014) {
            ctx->pc = 0x79A04Cu;
            goto label_79a04c;
        }
    }
    ctx->pc = 0x79A01Cu;
    // 0x79a01c: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x79a020: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a028: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a02c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a02cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a030: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A030u;
    SET_GPR_U32(ctx, 31, 0x79A038u);
    ctx->pc = 0x79A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A030u;
    // 0x79a034: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A030u, 0x79A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A038u;
label_79a038:
    // 0x79a038: 0x8e23b770  lw          $v1, -0x4890($s1)
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948720)));
    // 0x79a03c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79a040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a044: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x79A044u;
    {
        const bool branch_taken_0x79a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A044u;
        // 0x79a048: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a044) {
            ctx->pc = 0x79A08Cu;
            goto label_79a08c;
        }
    }
    ctx->pc = 0x79A04Cu;
label_79a04c:
    // 0x79a04c: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x79a050: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a05c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a05cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a060: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A060u;
    SET_GPR_U32(ctx, 31, 0x79A068u);
    ctx->pc = 0x79A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A060u;
    // 0x79a064: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A060u, 0x79A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A068u;
label_79a068:
    // 0x79a068: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79A068u;
    {
        const bool branch_taken_0x79a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A068u;
        // 0x79a06c: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a068) {
            ctx->pc = 0x79A090u;
            goto label_79a090;
        }
    }
    ctx->pc = 0x79A070u;
label_79a070:
    // 0x79a070: 0x24051004  addiu       $a1, $zero, 0x1004
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
    // 0x79a074: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a07c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a080: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a084: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A084u;
    SET_GPR_U32(ctx, 31, 0x79A08Cu);
    ctx->pc = 0x79A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A084u;
    // 0x79a088: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A084u, 0x79A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A08Cu;
label_79a08c:
    // 0x79a08c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79a090:
    // 0x79a090: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A090u;
    SET_GPR_U32(ctx, 31, 0x79A098u);
    ctx->pc = 0x79A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A090u;
    // 0x79a094: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A090u, 0x79A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A098u;
label_79a098:
    // 0x79a098: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79a098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a09c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79a09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a0a0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79a0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a0a4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79a0a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a0a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79a0a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a0ac: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79a0acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a0b0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x79a0b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a0b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0B8u;
        // 0x79a0bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A0C0u;
}
} // namespace gh_r607
