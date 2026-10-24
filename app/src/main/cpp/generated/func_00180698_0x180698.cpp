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

// Function: func_00180698
// Address: 0x180698 - 0x180878
void func_00180698_0x180698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00180698_0x180698");
#endif

    ctx->pc = 0x180698u;

    // 0x180698: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x180698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18069c: 0x14a20073  bne         $a1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x18069Cu;
    {
        const bool branch_taken_0x18069c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x18069c) {
            ctx->pc = 0x18086Cu;
            goto label_18086c;
        }
    }
    ctx->pc = 0x1806A4u;
    // 0x1806a4: 0x10800071  beqz        $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1806A4u;
    {
        const bool branch_taken_0x1806a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1806A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806A4u;
        // 0x1806a8: 0x3c070056  lui         $a3, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806a4) {
            ctx->pc = 0x18086Cu;
            goto label_18086c;
        }
    }
    ctx->pc = 0x1806ACu;
    // 0x1806ac: 0x3c01be6e  lui         $at, 0xBE6E
    ctx->pc = 0x1806acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48750 << 16));
    // 0x1806b0: 0x34218ec8  ori         $at, $at, 0x8EC8
    ctx->pc = 0x1806b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36552);
    // 0x1806b4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1806b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1806b8: 0x3c01bd5b  lui         $at, 0xBD5B
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48475 << 16));
    // 0x1806bc: 0x34219cfe  ori         $at, $at, 0x9CFE
    ctx->pc = 0x1806bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40190);
    // 0x1806c0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1806c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1806c4: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x1806c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x1806c8: 0x3c01be12  lui         $at, 0xBE12
    ctx->pc = 0x1806c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48658 << 16));
    // 0x1806cc: 0x3421565c  ori         $at, $at, 0x565C
    ctx->pc = 0x1806ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22108);
    // 0x1806d0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1806d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1806d4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1806d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x1806d8: 0x3c013f6c  lui         $at, 0x3F6C
    ctx->pc = 0x1806d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16236 << 16));
    // 0x1806dc: 0x3421e0b5  ori         $at, $at, 0xE0B5
    ctx->pc = 0x1806dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57525);
    // 0x1806e0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1806e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1806e4: 0x24e27fc0  addiu       $v0, $a3, 0x7FC0
    ctx->pc = 0x1806e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32704));
    // 0x1806e8: 0x3c013f83  lui         $at, 0x3F83
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16259 << 16));
    // 0x1806ec: 0x3421bfca  ori         $at, $at, 0xBFCA
    ctx->pc = 0x1806ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49098);
    // 0x1806f0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1806f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1806f4: 0x24c37ff0  addiu       $v1, $a2, 0x7FF0
    ctx->pc = 0x1806f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32752));
    // 0x1806f8: 0xe4c87ff0  swc1        $f8, 0x7FF0($a2)
    ctx->pc = 0x1806f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FF0u, _value); } while (0); }
    // 0x1806fc: 0x24a48020  addiu       $a0, $a1, -0x7FE0
    ctx->pc = 0x1806fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934560));
    // 0x180700: 0xe4a78020  swc1        $f7, -0x7FE0($a1)
    ctx->pc = 0x180700u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568020u, _value); } while (0); }
    // 0x180704: 0xe4e97fc0  swc1        $f9, 0x7FC0($a3)
    ctx->pc = 0x180704u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32704), bits); }
    // 0x180708: 0x3c013f53  lui         $at, 0x3F53
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16211 << 16));
    // 0x18070c: 0x34218d8a  ori         $at, $at, 0x8D8A
    ctx->pc = 0x18070cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36234);
    // 0x180710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180714: 0x3c013f18  lui         $at, 0x3F18
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16152 << 16));
    // 0x180718: 0x34212678  ori         $at, $at, 0x2678
    ctx->pc = 0x180718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9848);
    // 0x18071c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18071cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180720: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x180720u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x180724: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x180724u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x180728: 0x3c013f89  lui         $at, 0x3F89
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16265 << 16));
    // 0x18072c: 0x3421a233  ori         $at, $at, 0xA233
    ctx->pc = 0x18072cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41523);
    // 0x180730: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x180730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180734: 0x3c013f43  lui         $at, 0x3F43
    ctx->pc = 0x180734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16195 << 16));
    // 0x180738: 0x3421f7e7  ori         $at, $at, 0xF7E7
    ctx->pc = 0x180738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63463);
    // 0x18073c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18073cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x180740: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x180740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FF4u, _value); } while (0); }
    // 0x180744: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x180744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FF8u, _value); } while (0); }
    // 0x180748: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18074c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18074cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180750: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x180750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568024u, _value); } while (0); }
    // 0x180754: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x180754u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568028u, _value); } while (0); }
    // 0x180758: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x180758u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18075c: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x18075cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FFCu, _value); } while (0); }
    // 0x180760: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x180760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x180764: 0x3c013faf  lui         $at, 0x3FAF
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16303 << 16));
    // 0x180768: 0x34215c09  ori         $at, $at, 0x5C09
    ctx->pc = 0x180768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23561);
    // 0x18076c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18076cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180770: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x180770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x180774: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x180774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56802Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56802Cu, _value); } while (0); }
    // 0x180778: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x180778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x18077c: 0x3421d3e5  ori         $at, $at, 0xD3E5
    ctx->pc = 0x18077cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54245);
    // 0x180780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180784: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x180784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x180788: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x180788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18078c: 0x3c014008  lui         $at, 0x4008
    ctx->pc = 0x18078cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16392 << 16));
    // 0x180790: 0x3421b8dc  ori         $at, $at, 0xB8DC
    ctx->pc = 0x180790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47324);
    // 0x180794: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x180794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180798: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x180798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568004u, _value); } while (0); }
    // 0x18079c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18079cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568034u, _value); } while (0); }
    // 0x1807a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1807a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1807a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1807a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1807a8: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1807a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1807ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1807acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x568000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568000u, _value); } while (0);
    // 0x1807b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1807b4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1807b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x568008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568008u, _value); } while (0);
    // 0x1807b8: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x1807b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56800Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56800Cu, _value); } while (0); }
    // 0x1807bc: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x1807c0: 0x34215b87  ori         $at, $at, 0x5B87
    ctx->pc = 0x1807c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23431);
    // 0x1807c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1807c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1807c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1807c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1807cc: 0x3c01be2c  lui         $at, 0xBE2C
    ctx->pc = 0x1807ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48684 << 16));
    // 0x1807d0: 0x3421e0a5  ori         $at, $at, 0xE0A5
    ctx->pc = 0x1807d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57509);
    // 0x1807d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1807d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1807d8: 0x3c01bc60  lui         $at, 0xBC60
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48224 << 16));
    // 0x1807dc: 0x34217978  ori         $at, $at, 0x7978
    ctx->pc = 0x1807dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31096);
    // 0x1807e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1807e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1807e4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1807e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x568030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568030u, _value); } while (0);
    // 0x1807e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1807e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x568038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568038u, _value); } while (0);
    // 0x1807ec: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1807ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56803Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56803Cu, _value); } while (0); }
    // 0x1807f0: 0x3c01beb5  lui         $at, 0xBEB5
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48821 << 16));
    // 0x1807f4: 0x3421d4db  ori         $at, $at, 0xD4DB
    ctx->pc = 0x1807f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54491);
    // 0x1807f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1807f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1807fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x180800: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x180800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
    // 0x180804: 0x3421c52c  ori         $at, $at, 0xC52C
    ctx->pc = 0x180804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50476);
    // 0x180808: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x180808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18080c: 0x3c01beaa  lui         $at, 0xBEAA
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48810 << 16));
    // 0x180810: 0x34213011  ori         $at, $at, 0x3011
    ctx->pc = 0x180810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12305);
    // 0x180814: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x180814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x180818: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x180818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18081c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x18081cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x180820: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x180820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x180824: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x180824u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x180828: 0x3c01bc99  lui         $at, 0xBC99
    ctx->pc = 0x180828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48281 << 16));
    // 0x18082c: 0x3421b360  ori         $at, $at, 0xB360
    ctx->pc = 0x18082cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45920);
    // 0x180830: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x180830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x180834: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x180834u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568010u, _value); } while (0); }
    // 0x180838: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x180838u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568014u, _value); } while (0); }
    // 0x18083c: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x18083cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568018u, _value); } while (0); }
    // 0x180840: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x180840u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56801Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56801Cu, _value); } while (0); }
    // 0x180844: 0x3c013df9  lui         $at, 0x3DF9
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15865 << 16));
    // 0x180848: 0x34212358  ori         $at, $at, 0x2358
    ctx->pc = 0x180848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9048);
    // 0x18084c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x18084cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x180850: 0xe4870000  swc1        $f7, 0x0($a0)
    ctx->pc = 0x180850u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568040u, _value); } while (0); }
    // 0x180854: 0x3c01bc16  lui         $at, 0xBC16
    ctx->pc = 0x180854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48150 << 16));
    // 0x180858: 0x3421fbee  ori         $at, $at, 0xFBEE
    ctx->pc = 0x180858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64494);
    // 0x18085c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18085cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180860: 0xe4880004  swc1        $f8, 0x4($a0)
    ctx->pc = 0x180860u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568044u, _value); } while (0); }
    // 0x180864: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x180864u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56804Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56804Cu, _value); } while (0); }
    // 0x180868: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x180868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568048u, _value); } while (0); }
label_18086c:
    // 0x18086c: 0x3e00008  jr          $ra
    ctx->pc = 0x18086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18086Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180874u;
    // 0x180874: 0x0  nop
    ctx->pc = 0x180874u;
    // NOP
    ctx->pc = 0x180878u;
}
