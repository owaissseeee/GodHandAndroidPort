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

// Function: CornerTables_init
// Address: 0x133670 - 0x1337a0
void CornerTables_init_0x133670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CornerTables_init_0x133670");
#endif

    ctx->pc = 0x133670u;

    // 0x133670: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x133670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x133674: 0x14a20046  bne         $a1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x133674u;
    {
        const bool branch_taken_0x133674 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x133674) {
            ctx->pc = 0x133790u;
            goto label_133790;
        }
    }
    ctx->pc = 0x13367Cu;
    // 0x13367c: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x13367Cu;
    {
        const bool branch_taken_0x13367c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x133680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13367Cu;
        // 0x133680: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13367c) {
            ctx->pc = 0x133790u;
            goto label_133790;
        }
    }
    ctx->pc = 0x133684u;
    // 0x133684: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x133684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x133688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13368c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13368cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x133690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x133690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133694: 0x24822f40  addiu       $v0, $a0, 0x2F40
    ctx->pc = 0x133694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12096));
    // 0x133698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x133698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13369c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13369cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1336a0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1336a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1336a4: 0xe4812f40  swc1        $f1, 0x2F40($a0)
    ctx->pc = 0x1336a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12096), bits); }
    // 0x1336a8: 0x24a32f00  addiu       $v1, $a1, 0x2F00
    ctx->pc = 0x1336a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12032));
    // 0x1336ac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1336acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1336b0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1336b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1336b4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1336b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1336b8: 0xe4a12f00  swc1        $f1, 0x2F00($a1)
    ctx->pc = 0x1336b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F00u, _value); } while (0); }
    // 0x1336bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1336bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1336c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1336c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F04u, _value); } while (0); }
    // 0x1336c4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1336c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x462F08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F08u, _value); } while (0);
    // 0x1336c8: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1336c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F0Cu, _value); } while (0); }
    // 0x1336cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1336ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1336d0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1336d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1336d4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1336d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1336d8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1336d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1336dc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1336dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1336e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1336e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F10u, _value); } while (0); }
    // 0x1336e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1336e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1336e8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1336e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F14u, _value); } while (0); }
    // 0x1336ec: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1336ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x462F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F18u, _value); } while (0);
    // 0x1336f0: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1336f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F1Cu, _value); } while (0); }
    // 0x1336f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1336f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1336f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1336f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1336fc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1336fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x133700: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x133700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x133704: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x133704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x133708: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x133708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F20u, _value); } while (0); }
    // 0x13370c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x133710: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x133710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F24u, _value); } while (0); }
    // 0x133714: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x133714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x462F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F28u, _value); } while (0);
    // 0x133718: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x133718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F2Cu, _value); } while (0); }
    // 0x13371c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13371cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x133720: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x133720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x133724: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x133724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x133728: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x133728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x13372c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x13372cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x133730: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x133730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x133734: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x133734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F3Cu, _value); } while (0); }
    // 0x133738: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x133738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13373c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x13373cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F30u, _value); } while (0); }
    // 0x133740: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x133740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x462F34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F34u, _value); } while (0); }
    // 0x133744: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x133744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x462F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x462F38u, _value); } while (0);
    // 0x133748: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x133748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13374c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x13374cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x133750: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x133750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x133754: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x133754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x133758: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x133758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13375c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x13375cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x133760: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x133760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x133764: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x133764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x133768: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x133768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13376c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x133770: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x133770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x133774: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x133774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x133778: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x133778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x13377c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x133780: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x133780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x133784: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x133784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x133788: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x133788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x13378c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13378cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_133790:
    // 0x133790: 0x3e00008  jr          $ra
    ctx->pc = 0x133790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133798u;
    // 0x133798: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x133798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13379c: 0x0  nop
    ctx->pc = 0x13379cu;
    // NOP
    ctx->pc = 0x1337a0u;
}
