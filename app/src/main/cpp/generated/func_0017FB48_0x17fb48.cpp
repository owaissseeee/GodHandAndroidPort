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

// Function: func_0017FB48
// Address: 0x17fb48 - 0x17fc30
void func_0017FB48_0x17fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017FB48_0x17fb48");
#endif

    switch (ctx->pc) {
        case 0x17fb5cu: goto label_17fb5c;
        case 0x17fb78u: goto label_17fb78;
        case 0x17fbf8u: goto label_17fbf8;
        default: break;
    }

    ctx->pc = 0x17fb48u;

    // 0x17fb48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17fb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17fb4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17fb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fb54: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17FB54u;
    SET_GPR_U32(ctx, 31, 0x17FB5Cu);
    ctx->pc = 0x17FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB54u;
    // 0x17fb58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17FB54u, 0x17FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB5Cu;
label_17fb5c:
    // 0x17fb5c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17fb60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17fb60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17fb64: 0x24422560  addiu       $v0, $v0, 0x2560
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9568));
    // 0x17fb68: 0x26030600  addiu       $v1, $s0, 0x600
    ctx->pc = 0x17fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x17fb6c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x17fb70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fb74: 0x0  nop
    ctx->pc = 0x17fb74u;
    // NOP
label_17fb78:
    // 0x17fb78: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x17fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb7c: 0xf8600060  sqc2        $vf0, 0x60($v1)
    ctx->pc = 0x17fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb80: 0xf8600070  sqc2        $vf0, 0x70($v1)
    ctx->pc = 0x17fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb84: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x17fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb88: 0xf8600090  sqc2        $vf0, 0x90($v1)
    ctx->pc = 0x17fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb8c: 0xf86000a0  sqc2        $vf0, 0xA0($v1)
    ctx->pc = 0x17fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb90: 0xf86000b0  sqc2        $vf0, 0xB0($v1)
    ctx->pc = 0x17fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb94: 0xf86000c0  sqc2        $vf0, 0xC0($v1)
    ctx->pc = 0x17fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb98: 0xf86000d0  sqc2        $vf0, 0xD0($v1)
    ctx->pc = 0x17fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fb9c: 0xf86000e0  sqc2        $vf0, 0xE0($v1)
    ctx->pc = 0x17fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fba0: 0xf86000f0  sqc2        $vf0, 0xF0($v1)
    ctx->pc = 0x17fba0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fba4: 0xf8600100  sqc2        $vf0, 0x100($v1)
    ctx->pc = 0x17fba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fba8: 0xf8600110  sqc2        $vf0, 0x110($v1)
    ctx->pc = 0x17fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fbac: 0xf8600120  sqc2        $vf0, 0x120($v1)
    ctx->pc = 0x17fbacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fbb0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17fbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fbb4: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x17fbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17fbb8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x17fbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fbbc: 0x24660160  addiu       $a2, $v1, 0x160
    ctx->pc = 0x17fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x17fbc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x17fbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fbc4: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x17fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x17fbc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17fbcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17fbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbd0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x17fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x17fbd4: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x17fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x17fbd8: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x17fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x17fbdc: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x17fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x17fbe0: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x17fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x17fbe4: 0xac600130  sw          $zero, 0x130($v1)
    ctx->pc = 0x17fbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 0));
    // 0x17fbe8: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x17fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
    // 0x17fbec: 0xac600138  sw          $zero, 0x138($v1)
    ctx->pc = 0x17fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
    // 0x17fbf0: 0xac60013c  sw          $zero, 0x13C($v1)
    ctx->pc = 0x17fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 0));
    // 0x17fbf4: 0x0  nop
    ctx->pc = 0x17fbf4u;
    // NOP
label_17fbf8:
    // 0x17fbf8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17fbfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17fc00: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x17fc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17fc04: 0x0  nop
    ctx->pc = 0x17fc04u;
    // NOP
    // 0x17fc08: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17FC08u;
    {
        const bool branch_taken_0x17fc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC08u;
        // 0x17fc0c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc08) {
            ctx->pc = 0x17FBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fbf8;
        }
    }
    ctx->pc = 0x17FC10u;
    // 0x17fc10: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x17fc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc14: 0x1448ffd8  bne         $v0, $t0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x17FC14u;
    {
        const bool branch_taken_0x17fc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x17FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC14u;
        // 0x17fc18: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc14) {
            ctx->pc = 0x17FB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb78;
        }
    }
    ctx->pc = 0x17FC1Cu;
    // 0x17fc1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17fc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17fc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fc28: 0x3e00008  jr          $ra
    ctx->pc = 0x17FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC28u;
        // 0x17fc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FC30u;
}
