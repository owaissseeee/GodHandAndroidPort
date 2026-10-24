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

// Function: func_001D4B78
// Address: 0x1d4b78 - 0x1d4d60
void func_001D4B78_0x1d4b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4B78_0x1d4b78");
#endif

    ctx->pc = 0x1d4b78u;

    // 0x1d4b78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d4b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d4b7c: 0x14a20075  bne         $a1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1D4B7Cu;
    {
        const bool branch_taken_0x1d4b7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4b7c) {
            ctx->pc = 0x1D4D54u;
            goto label_1d4d54;
        }
    }
    ctx->pc = 0x1D4B84u;
    // 0x1d4b84: 0x10800073  beqz        $a0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1D4B84u;
    {
        const bool branch_taken_0x1d4b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B84u;
        // 0x1d4b88: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b84) {
            ctx->pc = 0x1D4D54u;
            goto label_1d4d54;
        }
    }
    ctx->pc = 0x1D4B8Cu;
    // 0x1d4b8c: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x1d4b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x1d4b90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d4b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d4b94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d4b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4b98: 0x24438080  addiu       $v1, $v0, -0x7F80
    ctx->pc = 0x1d4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
    // 0x1d4b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d4b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4ba0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d4ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d4ba4: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x1d4ba8: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1d4bac: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d4bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1d4bb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d4bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d4bb4: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x1d4bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
    // 0x1d4bb8: 0xe4448080  swc1        $f4, -0x7F80($v0)
    ctx->pc = 0x1d4bb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294934656), bits); }
    // 0x1d4bbc: 0x25248050  addiu       $a0, $t1, -0x7FB0
    ctx->pc = 0x1d4bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934608));
    // 0x1d4bc0: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1d4bc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d4bc4: 0x25058060  addiu       $a1, $t0, -0x7FA0
    ctx->pc = 0x1d4bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934624));
    // 0x1d4bc8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1d4bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d4bcc: 0x3c0a0057  lui         $t2, 0x57
    ctx->pc = 0x1d4bccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)87 << 16));
    // 0x1d4bd0: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1d4bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1d4bd4: 0x25468070  addiu       $a2, $t2, -0x7F90
    ctx->pc = 0x1d4bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294934640));
    // 0x1d4bd8: 0x3c01bdf9  lui         $at, 0xBDF9
    ctx->pc = 0x1d4bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48633 << 16));
    // 0x1d4bdc: 0x3421db22  ori         $at, $at, 0xDB22
    ctx->pc = 0x1d4bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56098);
    // 0x1d4be0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1d4be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1d4be4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d4be8: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1d4be8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d4bec: 0x3c0b0057  lui         $t3, 0x57
    ctx->pc = 0x1d4becu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)87 << 16));
    // 0x1d4bf0: 0xe4690000  swc1        $f9, 0x0($v1)
    ctx->pc = 0x1d4bf0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d4bf4: 0x256280f0  addiu       $v0, $t3, -0x7F10
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294934768));
    // 0x1d4bf8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1d4bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d4bfc: 0x3c0c0057  lui         $t4, 0x57
    ctx->pc = 0x1d4bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)87 << 16));
    // 0x1d4c00: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1d4c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1d4c04: 0x258780e0  addiu       $a3, $t4, -0x7F20
    ctx->pc = 0x1d4c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294934752));
    // 0x1d4c08: 0x3c013bc4  lui         $at, 0x3BC4
    ctx->pc = 0x1d4c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15300 << 16));
    // 0x1d4c0c: 0x34219bc0  ori         $at, $at, 0x9BC0
    ctx->pc = 0x1d4c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39872);
    // 0x1d4c10: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d4c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1d4c14: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d4c18: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1d4c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d4c1c: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x1d4c1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d4c20: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1d4c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d4c24: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1d4c24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1d4c28: 0x3c013e09  lui         $at, 0x3E09
    ctx->pc = 0x1d4c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15881 << 16));
    // 0x1d4c2c: 0x3421374c  ori         $at, $at, 0x374C
    ctx->pc = 0x1d4c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14156);
    // 0x1d4c30: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1d4c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1d4c34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d4c38: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1d4c38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d4c3c: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x1d4c3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d4c40: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1d4c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d4c44: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1d4c44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1d4c48: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x1d4c4c: 0x342124de  ori         $at, $at, 0x24DE
    ctx->pc = 0x1d4c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9438);
    // 0x1d4c50: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1d4c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1d4c54: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d4c58: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1d4c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1d4c5c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d4c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1d4c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d4c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4c64: 0xe4670000  swc1        $f7, 0x0($v1)
    ctx->pc = 0x1d4c64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d4c68: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1d4c68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d4c6c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1d4c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d4c70: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1d4c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1d4c74: 0xe5008060  swc1        $f0, -0x7FA0($t0)
    ctx->pc = 0x1d4c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568060u, _value); } while (0); }
    // 0x1d4c78: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d4c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d4c7c: 0xe5218050  swc1        $f1, -0x7FB0($t1)
    ctx->pc = 0x1d4c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568050u, _value); } while (0); }
    // 0x1d4c80: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1d4c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56805Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56805Cu, _value); } while (0); }
    // 0x1d4c84: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x1d4c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56806Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56806Cu, _value); } while (0); }
    // 0x1d4c88: 0xe5448070  swc1        $f4, -0x7F90($t2)
    ctx->pc = 0x1d4c88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568070u, _value); } while (0); }
    // 0x1d4c8c: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x1d4c8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56807Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56807Cu, _value); } while (0); }
    // 0x1d4c90: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1d4c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568054u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568054u, _value); } while (0); }
    // 0x1d4c94: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1d4c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568058u, _value); } while (0); }
    // 0x1d4c98: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x1d4c98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568064u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568064u, _value); } while (0); }
    // 0x1d4c9c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1d4c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568068u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568068u, _value); } while (0); }
    // 0x1d4ca0: 0x3c013ec7  lui         $at, 0x3EC7
    ctx->pc = 0x1d4ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16071 << 16));
    // 0x1d4ca4: 0x3421ae16  ori         $at, $at, 0xAE16
    ctx->pc = 0x1d4ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44566);
    // 0x1d4ca8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1d4ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1d4cac: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x1d4cacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568074u, _value); } while (0); }
    // 0x1d4cb0: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x1d4cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568078u, _value); } while (0); }
    // 0x1d4cb4: 0xe4680000  swc1        $f8, 0x0($v1)
    ctx->pc = 0x1d4cb4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d4cb8: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1d4cb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d4cbc: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x1d4cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x1d4cc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d4cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d4cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d4cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4cc8: 0xe56480f0  swc1        $f4, -0x7F10($t3)
    ctx->pc = 0x1d4cc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5680F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5680F0u, _value); } while (0); }
    // 0x1d4ccc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d4cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5680F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5680F4u, _value); } while (0); }
    // 0x1d4cd0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d4cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5680F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5680F8u, _value); } while (0); }
    // 0x1d4cd4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1d4cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5680FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5680FCu, _value); } while (0); }
    // 0x1d4cd8: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1d4cd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1d4cdc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d4ce0: 0xe4490000  swc1        $f9, 0x0($v0)
    ctx->pc = 0x1d4ce0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568100u, _value); } while (0); }
    // 0x1d4ce4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d4ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568104u, _value); } while (0); }
    // 0x1d4ce8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d4ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568108u, _value); } while (0); }
    // 0x1d4cec: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1d4cecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56810Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56810Cu, _value); } while (0); }
    // 0x1d4cf0: 0xe58480e0  swc1        $f4, -0x7F20($t4)
    ctx->pc = 0x1d4cf0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5680E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5680E0u, _value); } while (0); }
    // 0x1d4cf4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d4cf8: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x1d4cf8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568110u, _value); } while (0); }
    // 0x1d4cfc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d4cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568114u, _value); } while (0); }
    // 0x1d4d00: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d4d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568118u, _value); } while (0); }
    // 0x1d4d04: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1d4d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56811Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56811Cu, _value); } while (0); }
    // 0x1d4d08: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x1d4d08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5680ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5680ECu, _value); } while (0); }
    // 0x1d4d0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d4d10: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x1d4d10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568120u, _value); } while (0); }
    // 0x1d4d14: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d4d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568124u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568124u, _value); } while (0); }
    // 0x1d4d18: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d4d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568128u, _value); } while (0); }
    // 0x1d4d1c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1d4d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56812Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56812Cu, _value); } while (0); }
    // 0x1d4d20: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1d4d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d4d24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d4d28: 0xe4470000  swc1        $f7, 0x0($v0)
    ctx->pc = 0x1d4d28u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568130u, _value); } while (0); }
    // 0x1d4d2c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d4d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568134u, _value); } while (0); }
    // 0x1d4d30: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d4d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568138u, _value); } while (0); }
    // 0x1d4d34: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1d4d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56813Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56813Cu, _value); } while (0); }
    // 0x1d4d38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d4d3c: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1d4d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5680E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5680E4u, _value); } while (0); }
    // 0x1d4d40: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1d4d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x56814Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56814Cu, _value); } while (0); }
    // 0x1d4d44: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x1d4d44u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568140u, _value); } while (0); }
    // 0x1d4d48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d4d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568144u, _value); } while (0); }
    // 0x1d4d4c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d4d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x568148u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568148u, _value); } while (0); }
    // 0x1d4d50: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1d4d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5680E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5680E8u, _value); } while (0); }
label_1d4d54:
    // 0x1d4d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4D5Cu;
    // 0x1d4d5c: 0x0  nop
    ctx->pc = 0x1d4d5cu;
    // NOP
    ctx->pc = 0x1d4d60u;
}
