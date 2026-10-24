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

// Function: func_00276C88
// Address: 0x276c88 - 0x276dc8
void func_00276C88_0x276c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00276C88_0x276c88");
#endif

    switch (ctx->pc) {
        case 0x276db8u: goto label_276db8;
        default: break;
    }

    ctx->pc = 0x276c88u;

    // 0x276c88: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x276c88u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c8c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276c90: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x276c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x276c94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x276c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x276c98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x276c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x276c9c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x276c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x276ca0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x276ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x276ca4: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x276ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x276ca8: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x276ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x276cac: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x276cacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x276cb0: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x276cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x276cb4: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x276cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x276cb8: 0x3c0b0058  lui         $t3, 0x58
    ctx->pc = 0x276cb8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)88 << 16));
    // 0x276cbc: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x276cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x276cc0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x276cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x276cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276cc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x276cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x276ccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276cd0: 0x2463f958  addiu       $v1, $v1, -0x6A8
    ctx->pc = 0x276cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965592));
    // 0x276cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276cd8: 0x24a5f9a0  addiu       $a1, $a1, -0x660
    ctx->pc = 0x276cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965664));
    // 0x276cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x276ce0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x276ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x276ce4: 0x24c6f970  addiu       $a2, $a2, -0x690
    ctx->pc = 0x276ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965616));
    // 0x276ce8: 0x24e7f988  addiu       $a3, $a3, -0x678
    ctx->pc = 0x276ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965640));
    // 0x276cec: 0x2508f9b8  addiu       $t0, $t0, -0x648
    ctx->pc = 0x276cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965688));
    // 0x276cf0: 0x2529fa10  addiu       $t1, $t1, -0x5F0
    ctx->pc = 0x276cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965776));
    // 0x276cf4: 0x254afa68  addiu       $t2, $t2, -0x598
    ctx->pc = 0x276cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965864));
    // 0x276cf8: 0x256b50c0  addiu       $t3, $t3, 0x50C0
    ctx->pc = 0x276cf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20672));
    // 0x276cfc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x276cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x276d00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d04: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x276d04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x276d08: 0xada22130  sw          $v0, 0x2130($t5)
    ctx->pc = 0x276d08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8496), GPR_U32(ctx, 2));
    // 0x276d0c: 0x25ae2190  addiu       $t6, $t5, 0x2190
    ctx->pc = 0x276d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 8592));
    // 0x276d10: 0xada32134  sw          $v1, 0x2134($t5)
    ctx->pc = 0x276d10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8500), GPR_U32(ctx, 3));
    // 0x276d14: 0xada52138  sw          $a1, 0x2138($t5)
    ctx->pc = 0x276d14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8504), GPR_U32(ctx, 5));
    // 0x276d18: 0xada62148  sw          $a2, 0x2148($t5)
    ctx->pc = 0x276d18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8520), GPR_U32(ctx, 6));
    // 0x276d1c: 0xada7214c  sw          $a3, 0x214C($t5)
    ctx->pc = 0x276d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8524), GPR_U32(ctx, 7));
    // 0x276d20: 0xada82158  sw          $t0, 0x2158($t5)
    ctx->pc = 0x276d20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8536), GPR_U32(ctx, 8));
    // 0x276d24: 0xada9215c  sw          $t1, 0x215C($t5)
    ctx->pc = 0x276d24u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8540), GPR_U32(ctx, 9));
    // 0x276d28: 0xadaa2160  sw          $t2, 0x2160($t5)
    ctx->pc = 0x276d28u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8544), GPR_U32(ctx, 10));
    // 0x276d2c: 0xadab2164  sw          $t3, 0x2164($t5)
    ctx->pc = 0x276d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8548), GPR_U32(ctx, 11));
    // 0x276d30: 0xe5a0216c  swc1        $f0, 0x216C($t5)
    ctx->pc = 0x276d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8556), bits); }
    // 0x276d34: 0xada42174  sw          $a0, 0x2174($t5)
    ctx->pc = 0x276d34u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8564), GPR_U32(ctx, 4));
    // 0x276d38: 0xe5a3217c  swc1        $f3, 0x217C($t5)
    ctx->pc = 0x276d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8572), bits); }
    // 0x276d3c: 0xe5a12180  swc1        $f1, 0x2180($t5)
    ctx->pc = 0x276d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8576), bits); }
    // 0x276d40: 0xadac218c  sw          $t4, 0x218C($t5)
    ctx->pc = 0x276d40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8588), GPR_U32(ctx, 12));
    // 0x276d44: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x276d44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x276d48: 0xada0213c  sw          $zero, 0x213C($t5)
    ctx->pc = 0x276d48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8508), GPR_U32(ctx, 0));
    // 0x276d4c: 0xada02140  sw          $zero, 0x2140($t5)
    ctx->pc = 0x276d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8512), GPR_U32(ctx, 0));
    // 0x276d50: 0xada02144  sw          $zero, 0x2144($t5)
    ctx->pc = 0x276d50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8516), GPR_U32(ctx, 0));
    // 0x276d54: 0xada02150  sw          $zero, 0x2150($t5)
    ctx->pc = 0x276d54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8528), GPR_U32(ctx, 0));
    // 0x276d58: 0xada02154  sw          $zero, 0x2154($t5)
    ctx->pc = 0x276d58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8532), GPR_U32(ctx, 0));
    // 0x276d5c: 0xada02168  sw          $zero, 0x2168($t5)
    ctx->pc = 0x276d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8552), GPR_U32(ctx, 0));
    // 0x276d60: 0xada02188  sw          $zero, 0x2188($t5)
    ctx->pc = 0x276d60u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8584), GPR_U32(ctx, 0));
    // 0x276d64: 0xe5a32170  swc1        $f3, 0x2170($t5)
    ctx->pc = 0x276d64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8560), bits); }
    // 0x276d68: 0xada02178  sw          $zero, 0x2178($t5)
    ctx->pc = 0x276d68u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8568), GPR_U32(ctx, 0));
    // 0x276d6c: 0xada02184  sw          $zero, 0x2184($t5)
    ctx->pc = 0x276d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8580), GPR_U32(ctx, 0));
    // 0x276d70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x276d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x276d74: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x276d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x276d78: 0x11dd0006  beq         $t6, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x276D78u;
    {
        const bool branch_taken_0x276d78 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 29));
        ctx->pc = 0x276D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D78u;
        // 0x276d7c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d78) {
            ctx->pc = 0x276D94u;
            goto label_276d94;
        }
    }
    ctx->pc = 0x276D80u;
    // 0x276d80: 0xc5a12178  lwc1        $f1, 0x2178($t5)
    ctx->pc = 0x276d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276d84: 0xe5a12190  swc1        $f1, 0x2190($t5)
    ctx->pc = 0x276d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8592), bits); }
    // 0x276d88: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x276d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x276d8c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x276d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d90: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x276d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_276d94:
    // 0x276d94: 0xada021a0  sw          $zero, 0x21A0($t5)
    ctx->pc = 0x276d94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8608), GPR_U32(ctx, 0));
    // 0x276d98: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x276d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d9c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x276d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x276da0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x276da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x276da4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x276da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276da8: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x276da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x276dac: 0xc48d21a0  lwc1        $f13, 0x21A0($a0)
    ctx->pc = 0x276dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276db0: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x276DB0u;
    SET_GPR_U32(ctx, 31, 0x276DB8u);
    ctx->pc = 0x276DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DB0u;
    // 0x276db4: 0x248605b0  addiu       $a2, $a0, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x276DB0u, 0x276DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DB8u;
label_276db8:
    // 0x276db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x276DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DBCu;
        // 0x276dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276DC4u;
    // 0x276dc4: 0x0  nop
    ctx->pc = 0x276dc4u;
    // NOP
    ctx->pc = 0x276dc8u;
}
