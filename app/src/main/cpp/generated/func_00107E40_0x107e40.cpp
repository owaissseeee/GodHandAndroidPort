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

// Function: func_00107E40
// Address: 0x107e40 - 0x107ec8
void func_00107E40_0x107e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00107E40_0x107e40");
#endif

    switch (ctx->pc) {
        case 0x107e54u: goto label_107e54;
        case 0x107e78u: goto label_107e78;
        default: break;
    }

    ctx->pc = 0x107e40u;

    // 0x107e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107e44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x107e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x107e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107e4c: 0xc0400a0  jal         func_100280
    ctx->pc = 0x107E4Cu;
    SET_GPR_U32(ctx, 31, 0x107E54u);
    ctx->pc = 0x107E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E4Cu;
    // 0x107e50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100280u, 0x107E4Cu, 0x107E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E54u;
label_107e54:
    // 0x107e54: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x107e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x107e58: 0x2463d220  addiu       $v1, $v1, -0x2DE0
    ctx->pc = 0x107e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955552));
    // 0x107e5c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x107e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x107e60: 0xfa000630  sqc2        $vf0, 0x630($s0)
    ctx->pc = 0x107e60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1584), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107e64: 0xfa000650  sqc2        $vf0, 0x650($s0)
    ctx->pc = 0x107e64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1616), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107e68: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x107e68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107e6c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x107e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107e70: 0x26021580  addiu       $v0, $s0, 0x1580
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5504));
    // 0x107e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107e78:
    // 0x107e78: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x107e78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107e7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x107e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107e80: 0x0  nop
    ctx->pc = 0x107e80u;
    // NOP
    // 0x107e84: 0x0  nop
    ctx->pc = 0x107e84u;
    // NOP
    // 0x107e88: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x107E88u;
    {
        const bool branch_taken_0x107e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x107E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E88u;
        // 0x107e8c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e88) {
            ctx->pc = 0x107E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107e78;
        }
    }
    ctx->pc = 0x107E90u;
    // 0x107e90: 0xfa0015e0  sqc2        $vf0, 0x15E0($s0)
    ctx->pc = 0x107e90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5600), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107e94: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x107e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x107e98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x107e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e9c: 0x2463b800  addiu       $v1, $v1, -0x4800
    ctx->pc = 0x107e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948864));
    // 0x107ea0: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x107ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x107ea4: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x107ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x107ea8: 0xae0006a0  sw          $zero, 0x6A0($s0)
    ctx->pc = 0x107ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
    // 0x107eac: 0xae00069c  sw          $zero, 0x69C($s0)
    ctx->pc = 0x107eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1692), GPR_U32(ctx, 0));
    // 0x107eb0: 0xae0006a4  sw          $zero, 0x6A4($s0)
    ctx->pc = 0x107eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 0));
    // 0x107eb4: 0xae0006a8  sw          $zero, 0x6A8($s0)
    ctx->pc = 0x107eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 0));
    // 0x107eb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x107eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x107EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EC0u;
        // 0x107ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107EC8u;
}
