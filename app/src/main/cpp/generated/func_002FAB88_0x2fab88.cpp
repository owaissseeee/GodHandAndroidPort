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

// Function: func_002FAB88
// Address: 0x2fab88 - 0x2faca8
void func_002FAB88_0x2fab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FAB88_0x2fab88");
#endif

    switch (ctx->pc) {
        case 0x2fabe8u: goto label_2fabe8;
        case 0x2fac1cu: goto label_2fac1c;
        case 0x2fac28u: goto label_2fac28;
        default: break;
    }

    ctx->pc = 0x2fab88u;

    // 0x2fab88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fab88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2fab8c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fab90: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2fab90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2fab94: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x2fab94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x2fab98: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x2fab98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x2fab9c: 0x245eb7c0  addiu       $fp, $v0, -0x4840
    ctx->pc = 0x2fab9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2faba0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2faba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2faba4: 0x24c6b7c0  addiu       $a2, $a2, -0x4840
    ctx->pc = 0x2faba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948800));
    // 0x2faba8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2faba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2fabac: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fabacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fabb0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2fabb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2fabb4: 0x34a5fc00  ori         $a1, $a1, 0xFC00
    ctx->pc = 0x2fabb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64512);
    // 0x2fabb8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2fabb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2fabbc: 0xc5a021  addu        $s4, $a2, $a1
    ctx->pc = 0x2fabbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2fabc0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2fabc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2fabc4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2fabc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fabc8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2fabc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2fabcc: 0x2457b8c0  addiu       $s7, $v0, -0x4740
    ctx->pc = 0x2fabccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x2fabd0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2fabd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2fabd4: 0x241303ff  addiu       $s3, $zero, 0x3FF
    ctx->pc = 0x2fabd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2fabd8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2fabd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2fabdc: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x2fabdcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x2fabe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fabe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fabe4: 0x0  nop
    ctx->pc = 0x2fabe4u;
    // NOP
label_2fabe8:
    // 0x2fabe8: 0x131142  srl         $v0, $s3, 5
    ctx->pc = 0x2fabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
    // 0x2fabec: 0x3263001f  andi        $v1, $s3, 0x1F
    ctx->pc = 0x2fabecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x2fabf0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2fabf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fabf4: 0x768806  srlv        $s1, $s6, $v1
    ctx->pc = 0x2fabf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 22), GPR_U32(ctx, 3) & 0x1F));
    // 0x2fabf8: 0x21e9021  addu        $s2, $s0, $fp
    ctx->pc = 0x2fabf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x2fabfc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2fabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fac00: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2fac00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2fac04: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FAC04u;
    {
        const bool branch_taken_0x2fac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fac04) {
            ctx->pc = 0x2FAC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAC04u;
            // 0x2fac08: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAC6Cu;
            goto label_2fac6c;
        }
    }
    ctx->pc = 0x2FAC0Cu;
    // 0x2fac0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fac10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2FAC14u;
    SET_GPR_U32(ctx, 31, 0x2FAC1Cu);
    ctx->pc = 0x2FAC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC14u;
    // 0x2fac18: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2FAC14u, 0x2FAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC1Cu;
label_2fac1c:
    // 0x2fac1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac20: 0xc0beb2a  jal         func_2FACA8
    ctx->pc = 0x2FAC20u;
    SET_GPR_U32(ctx, 31, 0x2FAC28u);
    ctx->pc = 0x2FAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC20u;
    // 0x2fac24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FACA8u, 0x2FAC20u, 0x2FAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC28u;
label_2fac28:
    // 0x2fac28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FAC28u;
    {
        const bool branch_taken_0x2fac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC28u;
        // 0x2fac2c: 0x3c030072  lui         $v1, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac28) {
            ctx->pc = 0x2FAC68u;
            goto label_2fac68;
        }
    }
    ctx->pc = 0x2FAC30u;
    // 0x2fac30: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2fac30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fac34: 0x2463b840  addiu       $v1, $v1, -0x47C0
    ctx->pc = 0x2fac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x2fac38: 0x2174021  addu        $t0, $s0, $s7
    ctx->pc = 0x2fac38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x2fac3c: 0x2033821  addu        $a3, $s0, $v1
    ctx->pc = 0x2fac3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2fac40: 0x113027  nor         $a2, $zero, $s1
    ctx->pc = 0x2fac40u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x2fac44: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2fac44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fac48: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x2fac48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x2fac4c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2fac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fac50: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2fac50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2fac54: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2fac54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2fac58: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2fac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2fac5c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2fac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2fac60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FAC60u;
    {
        const bool branch_taken_0x2fac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC60u;
        // 0x2fac64: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac60) {
            ctx->pc = 0x2FAC78u;
            goto label_2fac78;
        }
    }
    ctx->pc = 0x2FAC68u;
label_2fac68:
    // 0x2fac68: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2fac68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2fac6c:
    // 0x2fac6c: 0x661ffde  bgez        $s3, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2FAC6Cu;
    {
        const bool branch_taken_0x2fac6c = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x2FAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC6Cu;
        // 0x2fac70: 0x2694fc00  addiu       $s4, $s4, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac6c) {
            ctx->pc = 0x2FABE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fabe8;
        }
    }
    ctx->pc = 0x2FAC74u;
    // 0x2fac74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fac74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fac78:
    // 0x2fac78: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2fac78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fac7c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2fac7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fac80: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2fac80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fac84: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2fac84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fac88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2fac88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fac8c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2fac8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fac90: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2fac90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fac94: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2fac94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fac98: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2fac98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fac9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACA0u;
        // 0x2faca4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FACA8u;
}
