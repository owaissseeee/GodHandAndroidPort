#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079B768
// Address: 0x79b768 - 0x79bec8
void func_0079B768_0x79b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B768_0x79b768");
#endif

    ctx->pc = 0x79b768u;

    // 0x79b768: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b76c: 0x14a201d3  bne         $a1, $v0, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x79B76Cu;
    {
        const bool branch_taken_0x79b76c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b76c) {
            ctx->pc = 0x79BEBCu;
            goto label_79bebc;
        }
    }
    ctx->pc = 0x79B774u;
    // 0x79b774: 0x108001d1  beqz        $a0, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x79B774u;
    {
        const bool branch_taken_0x79b774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B774u;
        // 0x79b778: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b774) {
            ctx->pc = 0x79BEBCu;
            goto label_79bebc;
        }
    }
    ctx->pc = 0x79B77Cu;
    // 0x79b77c: 0x3c01c1e1  lui         $at, 0xC1E1
    ctx->pc = 0x79b77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49633 << 16));
    // 0x79b780: 0x34216910  ori         $at, $at, 0x6910
    ctx->pc = 0x79b780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26896);
    // 0x79b784: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b788: 0x3c013e11  lui         $at, 0x3E11
    ctx->pc = 0x79b788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15889 << 16));
    // 0x79b78c: 0x34214e3c  ori         $at, $at, 0x4E3C
    ctx->pc = 0x79b78cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20028);
    // 0x79b790: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b794: 0x2483c300  addiu       $v1, $a0, -0x3D00
    ctx->pc = 0x79b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951680));
    // 0x79b798: 0x3c0142a4  lui         $at, 0x42A4
    ctx->pc = 0x79b798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17060 << 16));
    // 0x79b79c: 0x3421b1de  ori         $at, $at, 0xB1DE
    ctx->pc = 0x79b79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45534);
    // 0x79b7a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b7a4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b7a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b7ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b7b0: 0x24a2c350  addiu       $v0, $a1, -0x3CB0
    ctx->pc = 0x79b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951760));
    // 0x79b7b4: 0xe483c300  swc1        $f3, -0x3D00($a0)
    ctx->pc = 0x79b7b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294951680), bits); }
    // 0x79b7b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79b7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b7bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79b7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79b7c0: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x79b7c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x79b7c4: 0x3c01c0ee  lui         $at, 0xC0EE
    ctx->pc = 0x79b7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49390 << 16));
    // 0x79b7c8: 0x3421ca58  ori         $at, $at, 0xCA58
    ctx->pc = 0x79b7c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51800);
    // 0x79b7cc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x79b7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x79b7d0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b7d4: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x79b7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x79b7d8: 0x3421f58e  ori         $at, $at, 0xF58E
    ctx->pc = 0x79b7d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62862);
    // 0x79b7dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79b7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79b7e0: 0x3c013e13  lui         $at, 0x3E13
    ctx->pc = 0x79b7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15891 << 16));
    // 0x79b7e4: 0x3421404f  ori         $at, $at, 0x404F
    ctx->pc = 0x79b7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16463);
    // 0x79b7e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b7ec: 0x3c01428e  lui         $at, 0x428E
    ctx->pc = 0x79b7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17038 << 16));
    // 0x79b7f0: 0x3421676d  ori         $at, $at, 0x676D
    ctx->pc = 0x79b7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26477);
    // 0x79b7f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b7f8: 0x3c01bdd1  lui         $at, 0xBDD1
    ctx->pc = 0x79b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48593 << 16));
    // 0x79b7fc: 0x342119ce  ori         $at, $at, 0x19CE
    ctx->pc = 0x79b7fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6606);
    // 0x79b800: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b804: 0x3c01420e  lui         $at, 0x420E
    ctx->pc = 0x79b804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16910 << 16));
    // 0x79b808: 0x3421a320  ori         $at, $at, 0xA320
    ctx->pc = 0x79b808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41760);
    // 0x79b80c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79b80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79b810: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x79b810u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x79b814: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b818: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x79b818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79b81c: 0xe4a6c350  swc1        $f6, -0x3CB0($a1)
    ctx->pc = 0x79b81cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C350u, _value); } while (0); }
    // 0x79b820: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x79b820u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C354u, _value); } while (0); }
    // 0x79b824: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x79b824u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C358u, _value); } while (0); }
    // 0x79b828: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x79b828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x79b82c: 0x3c0141a8  lui         $at, 0x41A8
    ctx->pc = 0x79b82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16808 << 16));
    // 0x79b830: 0x34211c43  ori         $at, $at, 0x1C43
    ctx->pc = 0x79b830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7235);
    // 0x79b834: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79b834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79b838: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b83c: 0x3c014227  lui         $at, 0x4227
    ctx->pc = 0x79b83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16935 << 16));
    // 0x79b840: 0x34211653  ori         $at, $at, 0x1653
    ctx->pc = 0x79b840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5715);
    // 0x79b844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b848: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79b848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C35Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C35Cu, _value); } while (0); }
    // 0x79b84c: 0x3c01419f  lui         $at, 0x419F
    ctx->pc = 0x79b84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16799 << 16));
    // 0x79b850: 0x34213190  ori         $at, $at, 0x3190
    ctx->pc = 0x79b850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12688);
    // 0x79b854: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b858: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b85c: 0x3c013da4  lui         $at, 0x3DA4
    ctx->pc = 0x79b85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15780 << 16));
    // 0x79b860: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x79b860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x79b864: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b868: 0x3c0141fc  lui         $at, 0x41FC
    ctx->pc = 0x79b868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16892 << 16));
    // 0x79b86c: 0x34211a6b  ori         $at, $at, 0x1A6B
    ctx->pc = 0x79b86cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6763);
    // 0x79b870: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79b870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79b874: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x79b874u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x79b878: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79b878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79b87c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79b87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C360u, _value); } while (0); }
    // 0x79b880: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x79b880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C364u, _value); } while (0); }
    // 0x79b884: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x79b884u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C368u, _value); } while (0); }
    // 0x79b888: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x79b888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x79b88c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x79b88cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x79b890: 0x3c013e0e  lui         $at, 0x3E0E
    ctx->pc = 0x79b890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15886 << 16));
    // 0x79b894: 0x3421075f  ori         $at, $at, 0x75F
    ctx->pc = 0x79b894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1887);
    // 0x79b898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b89c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b8a0: 0x3c014347  lui         $at, 0x4347
    ctx->pc = 0x79b8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17223 << 16));
    // 0x79b8a4: 0x34218b99  ori         $at, $at, 0x8B99
    ctx->pc = 0x79b8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35737);
    // 0x79b8a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b8ac: 0x3c0141cc  lui         $at, 0x41CC
    ctx->pc = 0x79b8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16844 << 16));
    // 0x79b8b0: 0x3421c227  ori         $at, $at, 0xC227
    ctx->pc = 0x79b8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49703);
    // 0x79b8b4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x79b8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x79b8b8: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79b8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C36Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C36Cu, _value); } while (0); }
    // 0x79b8bc: 0x3c01411f  lui         $at, 0x411F
    ctx->pc = 0x79b8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16671 << 16));
    // 0x79b8c0: 0x34213190  ori         $at, $at, 0x3190
    ctx->pc = 0x79b8c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12688);
    // 0x79b8c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b8c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b8cc: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x79b8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x79b8d0: 0x3421bd3c  ori         $at, $at, 0xBD3C
    ctx->pc = 0x79b8d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48444);
    // 0x79b8d4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79b8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79b8d8: 0x3c01422a  lui         $at, 0x422A
    ctx->pc = 0x79b8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16938 << 16));
    // 0x79b8dc: 0x3421d532  ori         $at, $at, 0xD532
    ctx->pc = 0x79b8dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54578);
    // 0x79b8e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79b8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79b8e4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b8e8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x79b8e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79b8ec: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x79b8ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x79b8f0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79b8f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C370u, _value); } while (0); }
    // 0x79b8f4: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x79b8f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C374u, _value); } while (0); }
    // 0x79b8f8: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x79b8f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C378u, _value); } while (0); }
    // 0x79b8fc: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x79b8fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x79b900: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79b900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C37Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C37Cu, _value); } while (0); }
    // 0x79b904: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b908: 0x3c0141f2  lui         $at, 0x41F2
    ctx->pc = 0x79b908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16882 << 16));
    // 0x79b90c: 0x34211b3d  ori         $at, $at, 0x1B3D
    ctx->pc = 0x79b90cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6973);
    // 0x79b910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b914: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b918: 0x3c013e14  lui         $at, 0x3E14
    ctx->pc = 0x79b918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15892 << 16));
    // 0x79b91c: 0x34219518  ori         $at, $at, 0x9518
    ctx->pc = 0x79b91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38168);
    // 0x79b920: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b924: 0x3c01431f  lui         $at, 0x431F
    ctx->pc = 0x79b924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17183 << 16));
    // 0x79b928: 0x34218c3d  ori         $at, $at, 0x8C3D
    ctx->pc = 0x79b928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35901);
    // 0x79b92c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b930: 0x3c01c18c  lui         $at, 0xC18C
    ctx->pc = 0x79b930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49548 << 16));
    // 0x79b934: 0x34210c7e  ori         $at, $at, 0xC7E
    ctx->pc = 0x79b934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3198);
    // 0x79b938: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79b938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79b93c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79b93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C380u, _value); } while (0); }
    // 0x79b940: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x79b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x79b944: 0x3421ecc0  ori         $at, $at, 0xECC0
    ctx->pc = 0x79b944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60608);
    // 0x79b948: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79b948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79b94c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79b94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b950: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x79b950u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79b954: 0x3c01422f  lui         $at, 0x422F
    ctx->pc = 0x79b954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16943 << 16));
    // 0x79b958: 0x3421d220  ori         $at, $at, 0xD220
    ctx->pc = 0x79b958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53792);
    // 0x79b95c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b960: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x79b960u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x79b964: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x79b964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x79b968: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x79b968u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C384u, _value); } while (0); }
    // 0x79b96c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C388u, _value); } while (0); }
    // 0x79b970: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79b970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C38Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C38Cu, _value); } while (0); }
    // 0x79b974: 0x3c013d42  lui         $at, 0x3D42
    ctx->pc = 0x79b974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15682 << 16));
    // 0x79b978: 0x3421f838  ori         $at, $at, 0xF838
    ctx->pc = 0x79b978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63544);
    // 0x79b97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b980: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b984: 0x3c014231  lui         $at, 0x4231
    ctx->pc = 0x79b984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16945 << 16));
    // 0x79b988: 0x3421779a  ori         $at, $at, 0x779A
    ctx->pc = 0x79b988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30618);
    // 0x79b98c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b990: 0x3c01c1f2  lui         $at, 0xC1F2
    ctx->pc = 0x79b990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49650 << 16));
    // 0x79b994: 0x34211b3d  ori         $at, $at, 0x1B3D
    ctx->pc = 0x79b994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6973);
    // 0x79b998: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b99c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C394u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C394u, _value); } while (0); }
    // 0x79b9a0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79b9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C398u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C398u, _value); } while (0); }
    // 0x79b9a4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79b9a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C390u, _value); } while (0); }
    // 0x79b9a8: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79b9a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C39Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C39Cu, _value); } while (0); }
    // 0x79b9ac: 0x3c013eb6  lui         $at, 0x3EB6
    ctx->pc = 0x79b9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16054 << 16));
    // 0x79b9b0: 0x3421d5d0  ori         $at, $at, 0xD5D0
    ctx->pc = 0x79b9b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54736);
    // 0x79b9b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b9b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b9bc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x79b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x79b9c0: 0x34217e28  ori         $at, $at, 0x7E28
    ctx->pc = 0x79b9c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32296);
    // 0x79b9c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b9c8: 0x3c01c22e  lui         $at, 0xC22E
    ctx->pc = 0x79b9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49710 << 16));
    // 0x79b9cc: 0x34211e1b  ori         $at, $at, 0x1E1B
    ctx->pc = 0x79b9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7707);
    // 0x79b9d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b9d4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3A4u, _value); } while (0); }
    // 0x79b9d8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79b9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3A8u, _value); } while (0); }
    // 0x79b9dc: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79b9dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3A0u, _value); } while (0); }
    // 0x79b9e0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79b9e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3ACu, _value); } while (0); }
    // 0x79b9e4: 0x3c013e04  lui         $at, 0x3E04
    ctx->pc = 0x79b9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15876 << 16));
    // 0x79b9e8: 0x3421816f  ori         $at, $at, 0x816F
    ctx->pc = 0x79b9e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33135);
    // 0x79b9ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b9f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b9f4: 0x3c01428d  lui         $at, 0x428D
    ctx->pc = 0x79b9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17037 << 16));
    // 0x79b9f8: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x79b9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
    // 0x79b9fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ba00: 0x3c01bfd4  lui         $at, 0xBFD4
    ctx->pc = 0x79ba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49108 << 16));
    // 0x79ba04: 0x3421432d  ori         $at, $at, 0x432D
    ctx->pc = 0x79ba04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17197);
    // 0x79ba08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79ba08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79ba0c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79ba0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3B4u, _value); } while (0); }
    // 0x79ba10: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79ba10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3B8u, _value); } while (0); }
    // 0x79ba14: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79ba14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3B0u, _value); } while (0); }
    // 0x79ba18: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79ba18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3BCu, _value); } while (0); }
    // 0x79ba1c: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x79ba1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
    // 0x79ba20: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x79ba20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x79ba24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ba24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ba28: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79ba2c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79ba2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79ba30: 0x34210d5d  ori         $at, $at, 0xD5D
    ctx->pc = 0x79ba30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3421);
    // 0x79ba34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ba34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ba38: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x79ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x79ba3c: 0x34215bc0  ori         $at, $at, 0x5BC0
    ctx->pc = 0x79ba3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23488);
    // 0x79ba40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79ba40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79ba44: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79ba44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3C4u, _value); } while (0); }
    // 0x79ba48: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79ba48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3C8u, _value); } while (0); }
    // 0x79ba4c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79ba4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3C0u, _value); } while (0); }
    // 0x79ba50: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79ba50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3CCu, _value); } while (0); }
    // 0x79ba54: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x79ba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x79ba58: 0x3421da02  ori         $at, $at, 0xDA02
    ctx->pc = 0x79ba58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55810);
    // 0x79ba5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ba5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ba60: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79ba64: 0x3c01428f  lui         $at, 0x428F
    ctx->pc = 0x79ba64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17039 << 16));
    // 0x79ba68: 0x34217773  ori         $at, $at, 0x7773
    ctx->pc = 0x79ba68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30579);
    // 0x79ba6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ba6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ba70: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79ba70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3D0u, _value); } while (0); }
    // 0x79ba74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79ba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3D8u, _value); } while (0); }
    // 0x79ba78: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79ba78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C3D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3D4u, _value); } while (0);
    // 0x79ba7c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79ba7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3DCu, _value); } while (0); }
    // 0x79ba80: 0x3c014229  lui         $at, 0x4229
    ctx->pc = 0x79ba80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16937 << 16));
    // 0x79ba84: 0x3421248f  ori         $at, $at, 0x248F
    ctx->pc = 0x79ba84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9359);
    // 0x79ba88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ba88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ba8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79ba90: 0x3c0142a8  lui         $at, 0x42A8
    ctx->pc = 0x79ba90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17064 << 16));
    // 0x79ba94: 0x34215852  ori         $at, $at, 0x5852
    ctx->pc = 0x79ba94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22610);
    // 0x79ba98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ba98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ba9c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79ba9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3E0u, _value); } while (0); }
    // 0x79baa0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79baa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3E8u, _value); } while (0); }
    // 0x79baa4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79baa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C3E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3E4u, _value); } while (0);
    // 0x79baa8: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79baa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3ECu, _value); } while (0); }
    // 0x79baac: 0x3c01c1e4  lui         $at, 0xC1E4
    ctx->pc = 0x79baacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49636 << 16));
    // 0x79bab0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79bab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79bab4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bab8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79babc: 0x3c014291  lui         $at, 0x4291
    ctx->pc = 0x79babcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17041 << 16));
    // 0x79bac0: 0x3421f454  ori         $at, $at, 0xF454
    ctx->pc = 0x79bac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62548);
    // 0x79bac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bac8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79bac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3F0u, _value); } while (0); }
    // 0x79bacc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79baccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3F8u, _value); } while (0); }
    // 0x79bad0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C3F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3F4u, _value); } while (0);
    // 0x79bad4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C3FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C3FCu, _value); } while (0); }
    // 0x79bad8: 0x3c01c211  lui         $at, 0xC211
    ctx->pc = 0x79bad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49681 << 16));
    // 0x79badc: 0x3421ed5d  ori         $at, $at, 0xED5D
    ctx->pc = 0x79badcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60765);
    // 0x79bae0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bae4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bae8: 0x3c013e1d  lui         $at, 0x3E1D
    ctx->pc = 0x79bae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15901 << 16));
    // 0x79baec: 0x342197f6  ori         $at, $at, 0x97F6
    ctx->pc = 0x79baecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38902);
    // 0x79baf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79baf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79baf4: 0x3c0142a5  lui         $at, 0x42A5
    ctx->pc = 0x79baf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17061 << 16));
    // 0x79baf8: 0x3421f47b  ori         $at, $at, 0xF47B
    ctx->pc = 0x79baf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62587);
    // 0x79bafc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bb00: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79bb00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C400u, _value); } while (0); }
    // 0x79bb04: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79bb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C404u, _value); } while (0); }
    // 0x79bb08: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bb08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C408u, _value); } while (0); }
    // 0x79bb0c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bb0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C40Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C40Cu, _value); } while (0); }
    // 0x79bb10: 0x3c013f8b  lui         $at, 0x3F8B
    ctx->pc = 0x79bb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16267 << 16));
    // 0x79bb14: 0x34219f56  ori         $at, $at, 0x9F56
    ctx->pc = 0x79bb14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40790);
    // 0x79bb18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bb1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bb20: 0x3c01c139  lui         $at, 0xC139
    ctx->pc = 0x79bb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49465 << 16));
    // 0x79bb24: 0x3421b98c  ori         $at, $at, 0xB98C
    ctx->pc = 0x79bb24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47500);
    // 0x79bb28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bb2c: 0x3c0142b3  lui         $at, 0x42B3
    ctx->pc = 0x79bb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17075 << 16));
    // 0x79bb30: 0x3421f47b  ori         $at, $at, 0xF47B
    ctx->pc = 0x79bb30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62587);
    // 0x79bb34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bb38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79bb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C414u, _value); } while (0); }
    // 0x79bb3c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79bb3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C410u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C410u, _value); } while (0); }
    // 0x79bb40: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bb40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C418u, _value); } while (0); }
    // 0x79bb44: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bb44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C41Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C41Cu, _value); } while (0); }
    // 0x79bb48: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x79bb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x79bb4c: 0x3421e7d5  ori         $at, $at, 0xE7D5
    ctx->pc = 0x79bb4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59349);
    // 0x79bb50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bb54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bb58: 0x3c01c01f  lui         $at, 0xC01F
    ctx->pc = 0x79bb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49183 << 16));
    // 0x79bb5c: 0x34213190  ori         $at, $at, 0x3190
    ctx->pc = 0x79bb5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12688);
    // 0x79bb60: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bb64: 0x3c0142b8  lui         $at, 0x42B8
    ctx->pc = 0x79bb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17080 << 16));
    // 0x79bb68: 0x3421ee49  ori         $at, $at, 0xEE49
    ctx->pc = 0x79bb68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61001);
    // 0x79bb6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bb70: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79bb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C424u, _value); } while (0); }
    // 0x79bb74: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79bb74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C420u, _value); } while (0); }
    // 0x79bb78: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bb78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C428u, _value); } while (0); }
    // 0x79bb7c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bb7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C42Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C42Cu, _value); } while (0); }
    // 0x79bb80: 0x3c013eb0  lui         $at, 0x3EB0
    ctx->pc = 0x79bb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16048 << 16));
    // 0x79bb84: 0x3421068e  ori         $at, $at, 0x68E
    ctx->pc = 0x79bb84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1678);
    // 0x79bb88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bb8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bb90: 0x3c01c0ac  lui         $at, 0xC0AC
    ctx->pc = 0x79bb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49324 << 16));
    // 0x79bb94: 0x342175f7  ori         $at, $at, 0x75F7
    ctx->pc = 0x79bb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30199);
    // 0x79bb98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bb9c: 0x3c0142d8  lui         $at, 0x42D8
    ctx->pc = 0x79bb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17112 << 16));
    // 0x79bba0: 0x34217190  ori         $at, $at, 0x7190
    ctx->pc = 0x79bba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29072);
    // 0x79bba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bba8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79bba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C434u, _value); } while (0); }
    // 0x79bbac: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79bbacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C430u, _value); } while (0); }
    // 0x79bbb0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bbb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C438u, _value); } while (0); }
    // 0x79bbb4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bbb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C43Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C43Cu, _value); } while (0); }
    // 0x79bbb8: 0x3c013ea1  lui         $at, 0x3EA1
    ctx->pc = 0x79bbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16033 << 16));
    // 0x79bbbc: 0x3421f213  ori         $at, $at, 0xF213
    ctx->pc = 0x79bbbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61971);
    // 0x79bbc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bbc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bbc4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bbc8: 0x3c01c187  lui         $at, 0xC187
    ctx->pc = 0x79bbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49543 << 16));
    // 0x79bbcc: 0x3421fa44  ori         $at, $at, 0xFA44
    ctx->pc = 0x79bbccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64068);
    // 0x79bbd0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bbd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bbd4: 0x3c0142e4  lui         $at, 0x42E4
    ctx->pc = 0x79bbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17124 << 16));
    // 0x79bbd8: 0x34210db9  ori         $at, $at, 0xDB9
    ctx->pc = 0x79bbd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3513);
    // 0x79bbdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bbe0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79bbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C444u, _value); } while (0); }
    // 0x79bbe4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79bbe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C440u, _value); } while (0); }
    // 0x79bbe8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C448u, _value); } while (0); }
    // 0x79bbec: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bbecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C44Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C44Cu, _value); } while (0); }
    // 0x79bbf0: 0x3c01bbe8  lui         $at, 0xBBE8
    ctx->pc = 0x79bbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48104 << 16));
    // 0x79bbf4: 0x3421a71e  ori         $at, $at, 0xA71E
    ctx->pc = 0x79bbf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42782);
    // 0x79bbf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bbfc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bc00: 0x3c01c231  lui         $at, 0xC231
    ctx->pc = 0x79bc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49713 << 16));
    // 0x79bc04: 0x34216f35  ori         $at, $at, 0x6F35
    ctx->pc = 0x79bc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28469);
    // 0x79bc08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bc0c: 0x3c0142da  lui         $at, 0x42DA
    ctx->pc = 0x79bc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17114 << 16));
    // 0x79bc10: 0x3421ee7d  ori         $at, $at, 0xEE7D
    ctx->pc = 0x79bc10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61053);
    // 0x79bc14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bc18: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79bc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C454u, _value); } while (0); }
    // 0x79bc1c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79bc1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C450u, _value); } while (0); }
    // 0x79bc20: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bc20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C458u, _value); } while (0); }
    // 0x79bc24: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bc24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C45Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C45Cu, _value); } while (0); }
    // 0x79bc28: 0x3c01430b  lui         $at, 0x430B
    ctx->pc = 0x79bc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17163 << 16));
    // 0x79bc2c: 0x3421bc15  ori         $at, $at, 0xBC15
    ctx->pc = 0x79bc2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48149);
    // 0x79bc30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bc34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bc38: 0x3c01c21f  lui         $at, 0xC21F
    ctx->pc = 0x79bc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49695 << 16));
    // 0x79bc3c: 0x34213176  ori         $at, $at, 0x3176
    ctx->pc = 0x79bc3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12662);
    // 0x79bc40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bc44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C468u, _value); } while (0); }
    // 0x79bc48: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79bc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C460u, _value); } while (0); }
    // 0x79bc4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bc4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C464u, _value); } while (0);
    // 0x79bc50: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bc50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C46Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C46Cu, _value); } while (0); }
    // 0x79bc54: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x79bc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x79bc58: 0x34219d49  ori         $at, $at, 0x9D49
    ctx->pc = 0x79bc58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40265);
    // 0x79bc5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bc60: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bc64: 0x3c01c1c3  lui         $at, 0xC1C3
    ctx->pc = 0x79bc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49603 << 16));
    // 0x79bc68: 0x3421acda  ori         $at, $at, 0xACDA
    ctx->pc = 0x79bc68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44250);
    // 0x79bc6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bc6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bc70: 0x3c01430f  lui         $at, 0x430F
    ctx->pc = 0x79bc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17167 << 16));
    // 0x79bc74: 0x3421e190  ori         $at, $at, 0xE190
    ctx->pc = 0x79bc74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57744);
    // 0x79bc78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bc7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79bc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C474u, _value); } while (0); }
    // 0x79bc80: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79bc80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C470u, _value); } while (0); }
    // 0x79bc84: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bc84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C478u, _value); } while (0); }
    // 0x79bc88: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bc88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C47Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C47Cu, _value); } while (0); }
    // 0x79bc8c: 0x3c01431f  lui         $at, 0x431F
    ctx->pc = 0x79bc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17183 << 16));
    // 0x79bc90: 0x3421a33a  ori         $at, $at, 0xA33A
    ctx->pc = 0x79bc90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41786);
    // 0x79bc94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bc98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bc9c: 0x3c01c1e1  lui         $at, 0xC1E1
    ctx->pc = 0x79bc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49633 << 16));
    // 0x79bca0: 0x34218625  ori         $at, $at, 0x8625
    ctx->pc = 0x79bca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34341);
    // 0x79bca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bca8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79bca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C488u, _value); } while (0); }
    // 0x79bcac: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79bcacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C480u, _value); } while (0); }
    // 0x79bcb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bcb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C484u, _value); } while (0);
    // 0x79bcb4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bcb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C48Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C48Cu, _value); } while (0); }
    // 0x79bcb8: 0x3c01c14d  lui         $at, 0xC14D
    ctx->pc = 0x79bcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49485 << 16));
    // 0x79bcbc: 0x34219fbe  ori         $at, $at, 0x9FBE
    ctx->pc = 0x79bcbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40894);
    // 0x79bcc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bcc4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bcc8: 0x3c01433f  lui         $at, 0x433F
    ctx->pc = 0x79bcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17215 << 16));
    // 0x79bccc: 0x3421face  ori         $at, $at, 0xFACE
    ctx->pc = 0x79bcccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64206);
    // 0x79bcd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bcd4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79bcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C490u, _value); } while (0); }
    // 0x79bcd8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bcd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C494u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C494u, _value); } while (0);
    // 0x79bcdc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bcdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C498u, _value); } while (0); }
    // 0x79bce0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C49Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C49Cu, _value); } while (0); }
    // 0x79bce4: 0x3c01c1ee  lui         $at, 0xC1EE
    ctx->pc = 0x79bce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49646 << 16));
    // 0x79bce8: 0x3421ca23  ori         $at, $at, 0xCA23
    ctx->pc = 0x79bce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51747);
    // 0x79bcec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bcf0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bcf4: 0x3c01434f  lui         $at, 0x434F
    ctx->pc = 0x79bcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17231 << 16));
    // 0x79bcf8: 0x3421bc78  ori         $at, $at, 0xBC78
    ctx->pc = 0x79bcf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48248);
    // 0x79bcfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bd00: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79bd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4A0u, _value); } while (0); }
    // 0x79bd04: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bd04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4A8u, _value); } while (0); }
    // 0x79bd08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bd08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C4A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4A4u, _value); } while (0);
    // 0x79bd0c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bd0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4ACu, _value); } while (0); }
    // 0x79bd10: 0x3c01410b  lui         $at, 0x410B
    ctx->pc = 0x79bd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16651 << 16));
    // 0x79bd14: 0x34214b5e  ori         $at, $at, 0x4B5E
    ctx->pc = 0x79bd14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19294);
    // 0x79bd18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bd18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bd1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bd20: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bd20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4B8u, _value); } while (0); }
    // 0x79bd24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79bd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4B0u, _value); } while (0); }
    // 0x79bd28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bd28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C4B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4B4u, _value); } while (0);
    // 0x79bd2c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bd2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4BCu, _value); } while (0); }
    // 0x79bd30: 0x3c014350  lui         $at, 0x4350
    ctx->pc = 0x79bd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17232 << 16));
    // 0x79bd34: 0x3421269b  ori         $at, $at, 0x269B
    ctx->pc = 0x79bd34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9883);
    // 0x79bd38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bd38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bd3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bd40: 0x3c01421a  lui         $at, 0x421A
    ctx->pc = 0x79bd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16922 << 16));
    // 0x79bd44: 0x342137e9  ori         $at, $at, 0x37E9
    ctx->pc = 0x79bd44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14313);
    // 0x79bd48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bd4c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4C8u, _value); } while (0); }
    // 0x79bd50: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79bd50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4C0u, _value); } while (0); }
    // 0x79bd54: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bd54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C4C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4C4u, _value); } while (0);
    // 0x79bd58: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bd58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4CCu, _value); } while (0); }
    // 0x79bd5c: 0x3c014328  lui         $at, 0x4328
    ctx->pc = 0x79bd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17192 << 16));
    // 0x79bd60: 0x3421f1c4  ori         $at, $at, 0xF1C4
    ctx->pc = 0x79bd60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61892);
    // 0x79bd64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bd68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bd6c: 0x3c0141a4  lui         $at, 0x41A4
    ctx->pc = 0x79bd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16804 << 16));
    // 0x79bd70: 0x34217f63  ori         $at, $at, 0x7F63
    ctx->pc = 0x79bd70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32611);
    // 0x79bd74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bd78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79bd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4D8u, _value); } while (0); }
    // 0x79bd7c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79bd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4D0u, _value); } while (0); }
    // 0x79bd80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bd80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C4D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4D4u, _value); } while (0);
    // 0x79bd84: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bd84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4DCu, _value); } while (0); }
    // 0x79bd88: 0x3c013e55  lui         $at, 0x3E55
    ctx->pc = 0x79bd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15957 << 16));
    // 0x79bd8c: 0x3421b574  ori         $at, $at, 0xB574
    ctx->pc = 0x79bd8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46452);
    // 0x79bd90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bd94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bd98: 0x3c01422d  lui         $at, 0x422D
    ctx->pc = 0x79bd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16941 << 16));
    // 0x79bd9c: 0x34214a3d  ori         $at, $at, 0x4A3D
    ctx->pc = 0x79bd9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19005);
    // 0x79bda0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bda4: 0x3c01433b  lui         $at, 0x433B
    ctx->pc = 0x79bda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17211 << 16));
    // 0x79bda8: 0x3421c3fe  ori         $at, $at, 0xC3FE
    ctx->pc = 0x79bda8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50174);
    // 0x79bdac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bdb0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79bdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4E4u, _value); } while (0); }
    // 0x79bdb4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bdb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4E8u, _value); } while (0); }
    // 0x79bdb8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79bdb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4E0u, _value); } while (0); }
    // 0x79bdbc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bdbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4ECu, _value); } while (0); }
    // 0x79bdc0: 0x3c01431e  lui         $at, 0x431E
    ctx->pc = 0x79bdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17182 << 16));
    // 0x79bdc4: 0x3421e0ec  ori         $at, $at, 0xE0EC
    ctx->pc = 0x79bdc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57580);
    // 0x79bdc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bdcc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bdd0: 0x3c01420e  lui         $at, 0x420E
    ctx->pc = 0x79bdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16910 << 16));
    // 0x79bdd4: 0x34211100  ori         $at, $at, 0x1100
    ctx->pc = 0x79bdd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4352);
    // 0x79bdd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bddc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79bddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4F8u, _value); } while (0); }
    // 0x79bde0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79bde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4F0u, _value); } while (0); }
    // 0x79bde4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bde4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C4F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4F4u, _value); } while (0);
    // 0x79bde8: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79bde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C4FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C4FCu, _value); } while (0); }
    // 0x79bdec: 0x3c014309  lui         $at, 0x4309
    ctx->pc = 0x79bdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17161 << 16));
    // 0x79bdf0: 0x3421cc85  ori         $at, $at, 0xCC85
    ctx->pc = 0x79bdf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52357);
    // 0x79bdf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bdf8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bdfc: 0x3c014215  lui         $at, 0x4215
    ctx->pc = 0x79bdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16917 << 16));
    // 0x79be00: 0x3421df56  ori         $at, $at, 0xDF56
    ctx->pc = 0x79be00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57174);
    // 0x79be04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79be04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79be08: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79be08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C508u, _value); } while (0); }
    // 0x79be0c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79be0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C500u, _value); } while (0); }
    // 0x79be10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79be10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C504u, _value); } while (0);
    // 0x79be14: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79be14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C50Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C50Cu, _value); } while (0); }
    // 0x79be18: 0x3c0142fa  lui         $at, 0x42FA
    ctx->pc = 0x79be18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17146 << 16));
    // 0x79be1c: 0x34219d49  ori         $at, $at, 0x9D49
    ctx->pc = 0x79be1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40265);
    // 0x79be20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79be20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79be24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79be28: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79be28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C510u, _value); } while (0); }
    // 0x79be2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C518u, _value); } while (0); }
    // 0x79be30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79be30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C514u, _value); } while (0);
    // 0x79be34: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79be34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C51Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C51Cu, _value); } while (0); }
    // 0x79be38: 0x3c014235  lui         $at, 0x4235
    ctx->pc = 0x79be38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16949 << 16));
    // 0x79be3c: 0x34211879  ori         $at, $at, 0x1879
    ctx->pc = 0x79be3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6265);
    // 0x79be40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79be40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79be44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79be48: 0x3c0142d1  lui         $at, 0x42D1
    ctx->pc = 0x79be48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17105 << 16));
    // 0x79be4c: 0x34213c5d  ori         $at, $at, 0x3C5D
    ctx->pc = 0x79be4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15453);
    // 0x79be50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79be50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79be54: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79be54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C520u, _value); } while (0); }
    // 0x79be58: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79be58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C528u, _value); } while (0); }
    // 0x79be5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79be5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C524u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C524u, _value); } while (0);
    // 0x79be60: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79be60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C52Cu, _value); } while (0); }
    // 0x79be64: 0x3c01c22f  lui         $at, 0xC22F
    ctx->pc = 0x79be64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49711 << 16));
    // 0x79be68: 0x342132b0  ori         $at, $at, 0x32B0
    ctx->pc = 0x79be68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12976);
    // 0x79be6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79be6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79be70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79be74: 0x3c0142ef  lui         $at, 0x42EF
    ctx->pc = 0x79be74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17135 << 16));
    // 0x79be78: 0x34216c8b  ori         $at, $at, 0x6C8B
    ctx->pc = 0x79be78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27787);
    // 0x79be7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79be7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79be80: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79be80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C530u, _value); } while (0); }
    // 0x79be84: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79be84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C538u, _value); } while (0); }
    // 0x79be88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79be88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C534u, _value); } while (0);
    // 0x79be8c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79be8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C53Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C53Cu, _value); } while (0); }
    // 0x79be90: 0x3c01c005  lui         $at, 0xC005
    ctx->pc = 0x79be90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49157 << 16));
    // 0x79be94: 0x34214fdf  ori         $at, $at, 0x4FDF
    ctx->pc = 0x79be94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20447);
    // 0x79be98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79be98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79be9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79bea0: 0x3c014301  lui         $at, 0x4301
    ctx->pc = 0x79bea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17153 << 16));
    // 0x79bea4: 0x342196ae  ori         $at, $at, 0x96AE
    ctx->pc = 0x79bea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38574);
    // 0x79bea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79beac: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79beacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C54Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C54Cu, _value); } while (0); }
    // 0x79beb0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79beb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C540u, _value); } while (0); }
    // 0x79beb4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79beb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C548u, _value); } while (0); }
    // 0x79beb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79beb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C544u, _value); } while (0);
label_79bebc:
    // 0x79bebc: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEC4u;
    // 0x79bec4: 0x0  nop
    ctx->pc = 0x79bec4u;
    // NOP
    ctx->pc = 0x79bec8u;
}
} // namespace gh_r700
