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

// Function: func_00333E88
// Address: 0x333e88 - 0x333f60
void func_00333E88_0x333e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333E88_0x333e88");
#endif

    switch (ctx->pc) {
        case 0x333f04u: goto label_333f04;
        case 0x333f0cu: goto label_333f0c;
        case 0x333f34u: goto label_333f34;
        default: break;
    }

    ctx->pc = 0x333e88u;

    // 0x333e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x333e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333e90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x333e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x333e98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e9c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x333E9Cu;
    {
        const bool branch_taken_0x333e9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x333EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E9Cu;
        // 0x333ea0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e9c) {
            ctx->pc = 0x333EB0u;
            goto label_333eb0;
        }
    }
    ctx->pc = 0x333EA4u;
    // 0x333ea4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x333ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x333ea8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x333EA8u;
    {
        const bool branch_taken_0x333ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EA8u;
        // 0x333eac: 0xa0409de0  sb          $zero, -0x6220($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294942176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ea8) {
            ctx->pc = 0x333F3Cu;
            goto label_333f3c;
        }
    }
    ctx->pc = 0x333EB0u;
label_333eb0:
    // 0x333eb0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x333eb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333eb4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x333eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x333eb8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x333EB8u;
    {
        const bool branch_taken_0x333eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EB8u;
        // 0x333ebc: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333eb8) {
            ctx->pc = 0x333EF0u;
            goto label_333ef0;
        }
    }
    ctx->pc = 0x333EC0u;
    // 0x333ec0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x333EC0u;
    {
        const bool branch_taken_0x333ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EC0u;
        // 0x333ec4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ec0) {
            ctx->pc = 0x333EF0u;
            goto label_333ef0;
        }
    }
    ctx->pc = 0x333EC8u;
    // 0x333ec8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x333ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x333ecc: 0x244844e0  addiu       $t0, $v0, 0x44E0
    ctx->pc = 0x333eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 17632));
    // 0x333ed0: 0x24879de0  addiu       $a3, $a0, -0x6220
    ctx->pc = 0x333ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942176));
    // 0x333ed4: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x333ed4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x333ed8: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x333ed8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x333edc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x333edcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3D9DE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3D9DE0u, _value); } while (0);
    // 0x333ee0: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x333ee0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3D9DE1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3D9DE1u, _value); } while (0);
    // 0x333ee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x333EE4u;
    {
        const bool branch_taken_0x333ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EE4u;
        // 0x333ee8: 0x24919de0  addiu       $s1, $a0, -0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ee4) {
            ctx->pc = 0x333EFCu;
            goto label_333efc;
        }
    }
    ctx->pc = 0x333EECu;
    // 0x333eec: 0x0  nop
    ctx->pc = 0x333eecu;
    // NOP
label_333ef0:
    // 0x333ef0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x333ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x333ef4: 0xa0809de0  sb          $zero, -0x6220($a0)
    ctx->pc = 0x333ef4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3D9DE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3D9DE0u, _value); } while (0);
    // 0x333ef8: 0x24919de0  addiu       $s1, $a0, -0x6220
    ctx->pc = 0x333ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942176));
label_333efc:
    // 0x333efc: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x333EFCu;
    SET_GPR_U32(ctx, 31, 0x333F04u);
    ctx->pc = 0x333F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333EFCu;
    // 0x333f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x333EFCu, 0x333F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F04u;
label_333f04:
    // 0x333f04: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x333F04u;
    SET_GPR_U32(ctx, 31, 0x333F0Cu);
    ctx->pc = 0x333F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F04u;
    // 0x333f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x333F04u, 0x333F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F0Cu;
label_333f0c:
    // 0x333f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f10: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x333f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x333f14: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x333f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x333f18: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x333f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x333f1c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x333F1Cu;
    {
        const bool branch_taken_0x333f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x333F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F1Cu;
        // 0x333f20: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f1c) {
            ctx->pc = 0x333F2Cu;
            goto label_333f2c;
        }
    }
    ctx->pc = 0x333F24u;
    // 0x333f24: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333F24u;
    {
        const bool branch_taken_0x333f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x333F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F24u;
        // 0x333f28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f24) {
            ctx->pc = 0x333F40u;
            goto label_333f40;
        }
    }
    ctx->pc = 0x333F2Cu;
label_333f2c:
    // 0x333f2c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x333F2Cu;
    SET_GPR_U32(ctx, 31, 0x333F34u);
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x333F2Cu, 0x333F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F34u;
label_333f34:
    // 0x333f34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x333f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x333f38: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x333f38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_333f3c:
    // 0x333f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_333f40:
    // 0x333f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x333f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333f48: 0x3e00008  jr          $ra
    ctx->pc = 0x333F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F48u;
        // 0x333f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333F50u;
    // 0x333f50: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x333f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x333f54: 0x0  nop
    ctx->pc = 0x333f54u;
    // NOP
    // 0x333f58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x333f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x333f5c: 0x0  nop
    ctx->pc = 0x333f5cu;
    // NOP
    ctx->pc = 0x333f60u;
}
