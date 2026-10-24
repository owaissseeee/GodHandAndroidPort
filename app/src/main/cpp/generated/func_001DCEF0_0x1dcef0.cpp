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

// Function: func_001DCEF0
// Address: 0x1dcef0 - 0x1dd048
void func_001DCEF0_0x1dcef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DCEF0_0x1dcef0");
#endif

    ctx->pc = 0x1dcef0u;

    // 0x1dcef0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dcef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dcef4: 0x14a20051  bne         $a1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1DCEF4u;
    {
        const bool branch_taken_0x1dcef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcef4) {
            ctx->pc = 0x1DD03Cu;
            goto label_1dd03c;
        }
    }
    ctx->pc = 0x1DCEFCu;
    // 0x1dcefc: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1DCEFCu;
    {
        const bool branch_taken_0x1dcefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCEFCu;
        // 0x1dcf00: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcefc) {
            ctx->pc = 0x1DD03Cu;
            goto label_1dd03c;
        }
    }
    ctx->pc = 0x1DCF04u;
    // 0x1dcf04: 0x3c01be8e  lui         $at, 0xBE8E
    ctx->pc = 0x1dcf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48782 << 16));
    // 0x1dcf08: 0x34215604  ori         $at, $at, 0x5604
    ctx->pc = 0x1dcf08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22020);
    // 0x1dcf0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dcf0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcf10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcf10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcf14: 0x24828170  addiu       $v0, $a0, -0x7E90
    ctx->pc = 0x1dcf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934896));
    // 0x1dcf18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dcf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dcf1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dcf1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dcf20: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x1dcf20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x1dcf24: 0x3c013cc4  lui         $at, 0x3CC4
    ctx->pc = 0x1dcf24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15556 << 16));
    // 0x1dcf28: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1dcf28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x1dcf2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1dcf2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dcf30: 0x24c381c0  addiu       $v1, $a2, -0x7E40
    ctx->pc = 0x1dcf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934976));
    // 0x1dcf34: 0xe4818170  swc1        $f1, -0x7E90($a0)
    ctx->pc = 0x1dcf34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294934896), bits); }
    // 0x1dcf38: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x1dcf38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
    // 0x1dcf3c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x1dcf3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dcf40: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x1dcf40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x1dcf44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1dcf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1dcf48: 0x25058150  addiu       $a1, $t0, -0x7EB0
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934864));
    // 0x1dcf4c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1dcf4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1dcf50: 0x24e48160  addiu       $a0, $a3, -0x7EA0
    ctx->pc = 0x1dcf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934880));
    // 0x1dcf54: 0x3c01be0e  lui         $at, 0xBE0E
    ctx->pc = 0x1dcf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48654 << 16));
    // 0x1dcf58: 0x34215604  ori         $at, $at, 0x5604
    ctx->pc = 0x1dcf58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22020);
    // 0x1dcf5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dcf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcf60: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dcf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dcf64: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x1dcf64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dcf68: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1dcf68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dcf6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1dcf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1dcf70: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1dcf70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1dcf74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dcf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dcf78: 0x3c01bde3  lui         $at, 0xBDE3
    ctx->pc = 0x1dcf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48611 << 16));
    // 0x1dcf7c: 0x3421bcd3  ori         $at, $at, 0xBCD3
    ctx->pc = 0x1dcf7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48339);
    // 0x1dcf80: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1dcf80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1dcf84: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dcf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dcf88: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x1dcf88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dcf8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1dcf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1dcf90: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1dcf90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1dcf94: 0x3c013e0e  lui         $at, 0x3E0E
    ctx->pc = 0x1dcf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15886 << 16));
    // 0x1dcf98: 0x34215604  ori         $at, $at, 0x5604
    ctx->pc = 0x1dcf98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22020);
    // 0x1dcf9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dcf9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcfa0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dcfa4: 0xe4c481c0  swc1        $f4, -0x7E40($a2)
    ctx->pc = 0x1dcfa4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681C0u, _value); } while (0); }
    // 0x1dcfa8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1dcfa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dcfac: 0x3c013e73  lui         $at, 0x3E73
    ctx->pc = 0x1dcfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15987 << 16));
    // 0x1dcfb0: 0x3421b646  ori         $at, $at, 0xB646
    ctx->pc = 0x1dcfb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46662);
    // 0x1dcfb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dcfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcfb8: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x1dcfb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dcfbc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1dcfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1dcfc0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1dcfc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1dcfc4: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1dcfc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681C4u, _value); } while (0); }
    // 0x1dcfc8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dcfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dcfcc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1dcfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681C8u, _value); } while (0); }
    // 0x1dcfd0: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1dcfd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681CCu, _value); } while (0); }
    // 0x1dcfd4: 0xe4e18160  swc1        $f1, -0x7EA0($a3)
    ctx->pc = 0x1dcfd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568160u, _value); } while (0); }
    // 0x1dcfd8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dcfdc: 0xe5008150  swc1        $f0, -0x7EB0($t0)
    ctx->pc = 0x1dcfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568150u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568150u, _value); } while (0); }
    // 0x1dcfe0: 0x3c013e3c  lui         $at, 0x3E3C
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15932 << 16));
    // 0x1dcfe4: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x1dcfe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x1dcfe8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1dcfe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1dcfec: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x1dcfecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56815Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56815Cu, _value); } while (0); }
    // 0x1dcff0: 0x3c013e8e  lui         $at, 0x3E8E
    ctx->pc = 0x1dcff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16014 << 16));
    // 0x1dcff4: 0x34215604  ori         $at, $at, 0x5604
    ctx->pc = 0x1dcff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22020);
    // 0x1dcff8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1dcff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1dcffc: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x1dcffcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568164u, _value); } while (0); }
    // 0x1dd000: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1dd000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56816Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56816Cu, _value); } while (0); }
    // 0x1dd004: 0x3c013de3  lui         $at, 0x3DE3
    ctx->pc = 0x1dd004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15843 << 16));
    // 0x1dd008: 0x3421bcd3  ori         $at, $at, 0xBCD3
    ctx->pc = 0x1dd008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48339);
    // 0x1dd00c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1dd00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1dd010: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x1dd010u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dd014: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1dd014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1dd018: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x1dd018u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681D0u, _value); } while (0); }
    // 0x1dd01c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1dd01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568154u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568154u, _value); } while (0); }
    // 0x1dd020: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1dd020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568158u, _value); } while (0); }
    // 0x1dd024: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1dd024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568168u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568168u, _value); } while (0); }
    // 0x1dd028: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x1dd028u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dd02c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1dd02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1dd030: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1dd030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681D4u, _value); } while (0); }
    // 0x1dd034: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1dd034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681DCu, _value); } while (0); }
    // 0x1dd038: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1dd038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5681D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5681D8u, _value); } while (0); }
label_1dd03c:
    // 0x1dd03c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD044u;
    // 0x1dd044: 0x0  nop
    ctx->pc = 0x1dd044u;
    // NOP
    ctx->pc = 0x1dd048u;
}
