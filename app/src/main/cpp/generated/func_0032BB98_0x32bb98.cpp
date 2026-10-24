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

// Function: func_0032BB98
// Address: 0x32bb98 - 0x32bc98
void func_0032BB98_0x32bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BB98_0x32bb98");
#endif

    switch (ctx->pc) {
        case 0x32bbc8u: goto label_32bbc8;
        case 0x32bbd8u: goto label_32bbd8;
        case 0x32bbf4u: goto label_32bbf4;
        case 0x32bc1cu: goto label_32bc1c;
        case 0x32bc2cu: goto label_32bc2c;
        case 0x32bc78u: goto label_32bc78;
        default: break;
    }

    ctx->pc = 0x32bb98u;

    // 0x32bb98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32bb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32bb9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x32bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x32bba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bba4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x32bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x32bba8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32bba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bbac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x32bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x32bbb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32bbb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bbb4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32BBB4u;
    {
        const bool branch_taken_0x32bbb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBB4u;
        // 0x32bbb8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bbb4) {
            ctx->pc = 0x32BBD0u;
            goto label_32bbd0;
        }
    }
    ctx->pc = 0x32BBBCu;
    // 0x32bbbc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32bbc0: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32BBC0u;
    SET_GPR_U32(ctx, 31, 0x32BBC8u);
    ctx->pc = 0x32BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBC0u;
    // 0x32bbc4: 0x24842748  addiu       $a0, $a0, 0x2748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32BBC0u, 0x32BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBC8u;
label_32bbc8:
    // 0x32bbc8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x32BBC8u;
    {
        const bool branch_taken_0x32bbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBC8u;
        // 0x32bbcc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bbc8) {
            ctx->pc = 0x32BC7Cu;
            goto label_32bc7c;
        }
    }
    ctx->pc = 0x32BBD0u;
label_32bbd0:
    // 0x32bbd0: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x32BBD0u;
    SET_GPR_U32(ctx, 31, 0x32BBD8u);
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x32BBD0u, 0x32BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBD8u;
label_32bbd8:
    // 0x32bbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bbdc: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x32bbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x32bbe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32bbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bbe4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x32bbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32bbe8: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x32bbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x32bbec: 0xc0c916c  jal         func_3245B0
    ctx->pc = 0x32BBECu;
    SET_GPR_U32(ctx, 31, 0x32BBF4u);
    ctx->pc = 0x32BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBECu;
    // 0x32bbf0: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245B0u, 0x32BBECu, 0x32BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBF4u;
label_32bbf4:
    // 0x32bbf4: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x32BBF4u;
    {
        const bool branch_taken_0x32bbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bbf4) {
            ctx->pc = 0x32BBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BBF4u;
            // 0x32bbf8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BC7Cu;
            goto label_32bc7c;
        }
    }
    ctx->pc = 0x32BBFCu;
    // 0x32bbfc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32bc00: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x32BC00u;
    {
        const bool branch_taken_0x32bc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bc00) {
            ctx->pc = 0x32BC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BC00u;
            // 0x32bc04: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BC40u;
            goto label_32bc40;
        }
    }
    ctx->pc = 0x32BC08u;
    // 0x32bc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32bc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32bc10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc14: 0xc0cfcd2  jal         func_33F348
    ctx->pc = 0x32BC14u;
    SET_GPR_U32(ctx, 31, 0x32BC1Cu);
    ctx->pc = 0x32BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC14u;
    // 0x32bc18: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F348u, 0x32BC14u, 0x32BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC1Cu;
label_32bc1c:
    // 0x32bc1c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32bc20: 0x24842778  addiu       $a0, $a0, 0x2778
    ctx->pc = 0x32bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10104));
    // 0x32bc24: 0xc0cfc6a  jal         func_33F1A8
    ctx->pc = 0x32BC24u;
    SET_GPR_U32(ctx, 31, 0x32BC2Cu);
    ctx->pc = 0x32BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC24u;
    // 0x32bc28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x32BC24u, 0x32BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC2Cu;
label_32bc2c:
    // 0x32bc2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32bc30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32bc34: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x32bc34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x32bc38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32BC38u;
    {
        const bool branch_taken_0x32bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC38u;
        // 0x32bc3c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bc38) {
            ctx->pc = 0x32BC78u;
            goto label_32bc78;
        }
    }
    ctx->pc = 0x32BC40u;
label_32bc40:
    // 0x32bc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bc44: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x32bc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x32bc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x32bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32bc50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32bc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc54: 0x8e0800b0  lw          $t0, 0xB0($s0)
    ctx->pc = 0x32bc54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x32bc58: 0xae0700b8  sw          $a3, 0xB8($s0)
    ctx->pc = 0x32bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 7));
    // 0x32bc5c: 0xae0800b4  sw          $t0, 0xB4($s0)
    ctx->pc = 0x32bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 8));
    // 0x32bc60: 0xae0600bc  sw          $a2, 0xBC($s0)
    ctx->pc = 0x32bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 6));
    // 0x32bc64: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x32bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x32bc68: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x32bc68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x32bc6c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32bc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32bc70: 0xc0cad98  jal         func_32B660
    ctx->pc = 0x32BC70u;
    SET_GPR_U32(ctx, 31, 0x32BC78u);
    ctx->pc = 0x32BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC70u;
    // 0x32bc74: 0xa20200ac  sb          $v0, 0xAC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B660u, 0x32BC70u, 0x32BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC78u;
label_32bc78:
    // 0x32bc78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x32bc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32bc7c:
    // 0x32bc7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x32bc7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32bc80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x32bc80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bc84: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32bc88: 0x3e00008  jr          $ra
    ctx->pc = 0x32BC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC88u;
        // 0x32bc8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BC90u;
    // 0x32bc90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x32bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32bc94: 0x0  nop
    ctx->pc = 0x32bc94u;
    // NOP
    ctx->pc = 0x32bc98u;
}
