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

// Function: func_00216B58
// Address: 0x216b58 - 0x2170b8
void func_00216B58_0x216b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00216B58_0x216b58");
#endif

    switch (ctx->pc) {
        case 0x216bacu: goto label_216bac;
        case 0x216c14u: goto label_216c14;
        case 0x216c4cu: goto label_216c4c;
        case 0x216c5cu: goto label_216c5c;
        case 0x216d30u: goto label_216d30;
        case 0x216d54u: goto label_216d54;
        case 0x216d6cu: goto label_216d6c;
        case 0x216d84u: goto label_216d84;
        case 0x216d90u: goto label_216d90;
        case 0x216db8u: goto label_216db8;
        case 0x216dc4u: goto label_216dc4;
        case 0x216dd4u: goto label_216dd4;
        case 0x216df4u: goto label_216df4;
        case 0x216e5cu: goto label_216e5c;
        case 0x216e78u: goto label_216e78;
        case 0x216e84u: goto label_216e84;
        case 0x216e90u: goto label_216e90;
        case 0x216ea8u: goto label_216ea8;
        case 0x216edcu: goto label_216edc;
        case 0x216eecu: goto label_216eec;
        case 0x216f40u: goto label_216f40;
        case 0x216f6cu: goto label_216f6c;
        case 0x216f9cu: goto label_216f9c;
        case 0x216ff4u: goto label_216ff4;
        case 0x217028u: goto label_217028;
        case 0x217040u: goto label_217040;
        case 0x217048u: goto label_217048;
        case 0x21705cu: goto label_21705c;
        case 0x217068u: goto label_217068;
        case 0x217090u: goto label_217090;
        default: break;
    }

    ctx->pc = 0x216b58u;

    // 0x216b58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x216b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x216b5c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x216b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x216b60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x216b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x216b64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x216b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x216b6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x216b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x216b70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x216b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x216b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216b78: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x216b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x216b7c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x216b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216b80: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x216b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x216b84: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x216B84u;
    {
        const bool branch_taken_0x216b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B84u;
        // 0x216b88: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b84) {
            ctx->pc = 0x217068u;
            goto label_217068;
        }
    }
    ctx->pc = 0x216B8Cu;
    // 0x216b8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x216b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x216b90: 0x24426570  addiu       $v0, $v0, 0x6570
    ctx->pc = 0x216b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25968));
    // 0x216b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216b98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x216b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216b9c: 0x800008  jr          $a0
    ctx->pc = 0x216B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216BA4u: goto label_216ba4;
            case 0x216CF8u: goto label_216cf8;
            case 0x216DCCu: goto label_216dcc;
            case 0x216E68u: goto label_216e68;
            case 0x216EE4u: goto label_216ee4;
            case 0x216FA8u: goto label_216fa8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x216BA4u;
label_216ba4:
    // 0x216ba4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x216BA4u;
    SET_GPR_U32(ctx, 31, 0x216BACu);
    ctx->pc = 0x216BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BA4u;
    // 0x216ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x216BA4u, 0x216BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BACu;
label_216bac:
    // 0x216bac: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x216bacu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x216bb0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x216bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x216bb4: 0x2402021e  addiu       $v0, $zero, 0x21E
    ctx->pc = 0x216bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x216bb8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x216BB8u;
    {
        const bool branch_taken_0x216bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BB8u;
        // 0x216bbc: 0x2862021f  slti        $v0, $v1, 0x21F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)543) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bb8) {
            ctx->pc = 0x216BF0u;
            goto label_216bf0;
        }
    }
    ctx->pc = 0x216BC0u;
    // 0x216bc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x216BC0u;
    {
        const bool branch_taken_0x216bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216bc0) {
            ctx->pc = 0x216BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216BC0u;
            // 0x216bc4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216BD8u;
            goto label_216bd8;
        }
    }
    ctx->pc = 0x216BC8u;
    // 0x216bc8: 0x2402022f  addiu       $v0, $zero, 0x22F
    ctx->pc = 0x216bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x216bcc: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216BCCu;
    {
        const bool branch_taken_0x216bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216bcc) {
            ctx->pc = 0x216BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216BCCu;
            // 0x216bd0: 0x8e230304  lw          $v1, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216BF4u;
            goto label_216bf4;
        }
    }
    ctx->pc = 0x216BD4u;
    // 0x216bd4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x216bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_216bd8:
    // 0x216bd8: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x216bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x216bdc: 0x8c431e68  lw          $v1, 0x1E68($v0)
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7784)));
    // 0x216be0: 0x8c441e6c  lw          $a0, 0x1E6C($v0)
    ctx->pc = 0x216be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7788)));
    // 0x216be4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x216be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216be8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x216BE8u;
    {
        const bool branch_taken_0x216be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BE8u;
        // 0x216bec: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216be8) {
            ctx->pc = 0x216C2Cu;
            goto label_216c2c;
        }
    }
    ctx->pc = 0x216BF0u;
label_216bf0:
    // 0x216bf0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_216bf4:
    // 0x216bf4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x216bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x216bf8: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x216bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x216bfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x216bfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c00: 0x8c651518  lw          $a1, 0x1518($v1)
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5400)));
    // 0x216c04: 0x8c62151c  lw          $v0, 0x151C($v1)
    ctx->pc = 0x216c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5404)));
    // 0x216c08: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x216c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x216c0c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x216C0Cu;
    SET_GPR_U32(ctx, 31, 0x216C14u);
    ctx->pc = 0x216C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C0Cu;
    // 0x216c10: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x216C0Cu, 0x216C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C14u;
label_216c14:
    // 0x216c14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x216c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x216c18: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x216C18u;
    {
        const bool branch_taken_0x216c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x216c18) {
            ctx->pc = 0x216C2Cu;
            goto label_216c2c;
        }
    }
    ctx->pc = 0x216C20u;
    // 0x216c20: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x216c24: 0x8c621520  lw          $v0, 0x1520($v1)
    ctx->pc = 0x216c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5408)));
    // 0x216c28: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x216c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216c2c:
    // 0x216c2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x216c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216c30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x216c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c38: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x216c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c40: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x216c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216c44: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x216C44u;
    SET_GPR_U32(ctx, 31, 0x216C4Cu);
    ctx->pc = 0x216C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C44u;
    // 0x216c48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x216C44u, 0x216C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C4Cu;
label_216c4c:
    // 0x216c4c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x216c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x216c50: 0x26849b70  addiu       $a0, $s4, -0x6490
    ctx->pc = 0x216c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    // 0x216c54: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x216C54u;
    SET_GPR_U32(ctx, 31, 0x216C5Cu);
    ctx->pc = 0x216C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C54u;
    // 0x216c58: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x216C54u, 0x216C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C5Cu;
label_216c5c:
    // 0x216c5c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x216c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x216c60: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x216c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x216c64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216C64u;
    {
        const bool branch_taken_0x216c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C64u;
        // 0x216c68: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c64) {
            ctx->pc = 0x216C84u;
            goto label_216c84;
        }
    }
    ctx->pc = 0x216C6Cu;
    // 0x216c6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x216c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x216c70: 0x24426590  addiu       $v0, $v0, 0x6590
    ctx->pc = 0x216c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26000));
    // 0x216c74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216c78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216c7c: 0x800008  jr          $a0
    ctx->pc = 0x216C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216C84u: goto label_216c84;
            case 0x216C9Cu: goto label_216c9c;
            case 0x216CB8u: goto label_216cb8;
            case 0x216CDCu: goto label_216cdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x216C84u;
label_216c84:
    // 0x216c84: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x216c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216c88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216c8c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x216c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x216c90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216c94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x216C94u;
    {
        const bool branch_taken_0x216c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C94u;
        // 0x216c98: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c94) {
            ctx->pc = 0x216CD4u;
            goto label_216cd4;
        }
    }
    ctx->pc = 0x216C9Cu;
label_216c9c:
    // 0x216c9c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x216c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216ca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216ca4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x216ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x216ca8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x216ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x216cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216cb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x216CB0u;
    {
        const bool branch_taken_0x216cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CB0u;
        // 0x216cb4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cb0) {
            ctx->pc = 0x216CD4u;
            goto label_216cd4;
        }
    }
    ctx->pc = 0x216CB8u;
label_216cb8:
    // 0x216cb8: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x216cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216cbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216cc0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x216cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x216cc4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x216cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x216cc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216ccc: 0x0  nop
    ctx->pc = 0x216cccu;
    // NOP
    // 0x216cd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x216cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_216cd4:
    // 0x216cd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216cd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x216cd8: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x216cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_216cdc:
    // 0x216cdc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216ce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216ce4: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x216ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216cec: 0xae2305f4  sw          $v1, 0x5F4($s1)
    ctx->pc = 0x216cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
    // 0x216cf0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x216cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x216cf4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216cf8:
    // 0x216cf8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x216cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x216cfc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x216cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x216d00: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x216D00u;
    {
        const bool branch_taken_0x216d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d00) {
            ctx->pc = 0x216D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216D00u;
            // 0x216d04: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216D1Cu;
            goto label_216d1c;
        }
    }
    ctx->pc = 0x216D08u;
    // 0x216d08: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x216d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x216d0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x216d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x216d10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x216d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x216d14: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x216d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x216d18: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x216d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_216d1c:
    // 0x216d1c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x216D1Cu;
    {
        const bool branch_taken_0x216d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D1Cu;
        // 0x216d20: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d1c) {
            ctx->pc = 0x216D88u;
            goto label_216d88;
        }
    }
    ctx->pc = 0x216D24u;
    // 0x216d24: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x216d24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x216d28: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x216D28u;
    SET_GPR_U32(ctx, 31, 0x216D30u);
    ctx->pc = 0x216D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D28u;
    // 0x216d2c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x216D28u, 0x216D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D30u;
label_216d30:
    // 0x216d30: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x216d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d38: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x216d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x216d3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x216d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x216d40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x216d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x216d44: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x216d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x216d48: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x216d48u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x216d4c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x216D4Cu;
    SET_GPR_U32(ctx, 31, 0x216D54u);
    ctx->pc = 0x216D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D4Cu;
    // 0x216d50: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x216D4Cu, 0x216D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D54u;
label_216d54:
    // 0x216d54: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x216d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216d58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x216d58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x216d5c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x216d5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x216d60: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x216d60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x216d64: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x216D64u;
    SET_GPR_U32(ctx, 31, 0x216D6Cu);
    ctx->pc = 0x216D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D64u;
    // 0x216d68: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x216D64u, 0x216D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D6Cu;
label_216d6c:
    // 0x216d6c: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x216d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216d70: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x216d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x216d74: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x216d74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x216d78: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x216d78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x216d7c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x216D7Cu;
    SET_GPR_U32(ctx, 31, 0x216D84u);
    ctx->pc = 0x216D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D7Cu;
    // 0x216d80: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x216D7Cu, 0x216D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D84u;
label_216d84:
    // 0x216d84: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x216d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_216d88:
    // 0x216d88: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216D88u;
    SET_GPR_U32(ctx, 31, 0x216D90u);
    ctx->pc = 0x216D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D88u;
    // 0x216d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216D88u, 0x216D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D90u;
label_216d90:
    // 0x216d90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216D90u;
    {
        const bool branch_taken_0x216d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d90) {
            ctx->pc = 0x216DA4u;
            goto label_216da4;
        }
    }
    ctx->pc = 0x216D98u;
    // 0x216d98: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216d9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216da0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216da0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216da4:
    // 0x216da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216da8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x216da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216db0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x216DB0u;
    SET_GPR_U32(ctx, 31, 0x216DB8u);
    ctx->pc = 0x216DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DB0u;
    // 0x216db4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x216DB0u, 0x216DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DB8u;
label_216db8:
    // 0x216db8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x216db8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x216dbc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x216DBCu;
    SET_GPR_U32(ctx, 31, 0x216DC4u);
    ctx->pc = 0x216DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DBCu;
    // 0x216dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x216DBCu, 0x216DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DC4u;
label_216dc4:
    // 0x216dc4: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x216DC4u;
    {
        const bool branch_taken_0x216dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DC4u;
        // 0x216dc8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dc4) {
            ctx->pc = 0x21706Cu;
            goto label_21706c;
        }
    }
    ctx->pc = 0x216DCCu;
label_216dcc:
    // 0x216dcc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x216DCCu;
    SET_GPR_U32(ctx, 31, 0x216DD4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x216DCCu, 0x216DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DD4u;
label_216dd4:
    // 0x216dd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x216dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x216dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ddc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x216ddcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x216de0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x216DE0u;
    {
        const bool branch_taken_0x216de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x216de0) {
            ctx->pc = 0x216DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216DE0u;
            // 0x216de4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x216DE8u;
            goto label_216de8;
        }
    }
    ctx->pc = 0x216DE8u;
label_216de8:
    // 0x216de8: 0x2810  mfhi        $a1
    ctx->pc = 0x216de8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x216dec: 0xc09d91a  jal         func_276468
    ctx->pc = 0x216DECu;
    SET_GPR_U32(ctx, 31, 0x216DF4u);
    ctx->pc = 0x216DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DECu;
    // 0x216df0: 0xae2517d0  sw          $a1, 0x17D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6096), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x216DECu, 0x216DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DF4u;
label_216df4:
    // 0x216df4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x216df4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x216df8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x216df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x216dfc: 0x2402021e  addiu       $v0, $zero, 0x21E
    ctx->pc = 0x216dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x216e00: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216E00u;
    {
        const bool branch_taken_0x216e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E00u;
        // 0x216e04: 0x2862021f  slti        $v0, $v1, 0x21F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)543) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e00) {
            ctx->pc = 0x216E28u;
            goto label_216e28;
        }
    }
    ctx->pc = 0x216E08u;
    // 0x216e08: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x216E08u;
    {
        const bool branch_taken_0x216e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216e08) {
            ctx->pc = 0x216E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216E08u;
            // 0x216e0c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216E1Cu;
            goto label_216e1c;
        }
    }
    ctx->pc = 0x216E10u;
    // 0x216e10: 0x2402022f  addiu       $v0, $zero, 0x22F
    ctx->pc = 0x216e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x216e14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216E14u;
    {
        const bool branch_taken_0x216e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E14u;
        // 0x216e18: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e14) {
            ctx->pc = 0x216E2Cu;
            goto label_216e2c;
        }
    }
    ctx->pc = 0x216E1Cu;
label_216e1c:
    // 0x216e1c: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x216e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x216e20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x216E20u;
    {
        const bool branch_taken_0x216e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E20u;
        // 0x216e24: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e20) {
            ctx->pc = 0x216E34u;
            goto label_216e34;
        }
    }
    ctx->pc = 0x216E28u;
label_216e28:
    // 0x216e28: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x216e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_216e2c:
    // 0x216e2c: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x216e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x216e30: 0x8c4410ac  lw          $a0, 0x10AC($v0)
    ctx->pc = 0x216e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
label_216e34:
    // 0x216e34: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x216e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216e38: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x216e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x216e3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x216e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216e40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x216e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e48: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x216e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x216e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216e54: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x216E54u;
    SET_GPR_U32(ctx, 31, 0x216E5Cu);
    ctx->pc = 0x216E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E54u;
    // 0x216e58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x216E54u, 0x216E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E5Cu;
label_216e5c:
    // 0x216e5c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216e60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216e64: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216e68:
    // 0x216e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216e6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x216e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216e70: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216E70u;
    SET_GPR_U32(ctx, 31, 0x216E78u);
    ctx->pc = 0x216E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E70u;
    // 0x216e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216E70u, 0x216E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E78u;
label_216e78:
    // 0x216e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e7c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x216E7Cu;
    SET_GPR_U32(ctx, 31, 0x216E84u);
    ctx->pc = 0x216E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E7Cu;
    // 0x216e80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x216E7Cu, 0x216E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E84u;
label_216e84:
    // 0x216e84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x216e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x216e88: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x216E88u;
    SET_GPR_U32(ctx, 31, 0x216E90u);
    ctx->pc = 0x216E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E88u;
    // 0x216e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x216E88u, 0x216E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E90u;
label_216e90:
    // 0x216e90: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x216e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x216e94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x216E94u;
    {
        const bool branch_taken_0x216e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216e94) {
            ctx->pc = 0x216ED4u;
            goto label_216ed4;
        }
    }
    ctx->pc = 0x216E9Cu;
    // 0x216e9c: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x216e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x216ea0: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x216EA0u;
    SET_GPR_U32(ctx, 31, 0x216EA8u);
    ctx->pc = 0x216EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EA0u;
    // 0x216ea4: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x216EA0u, 0x216EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EA8u;
label_216ea8:
    // 0x216ea8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x216ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x216eac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216eb0: 0x0  nop
    ctx->pc = 0x216eb0u;
    // NOP
    // 0x216eb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x216eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216eb8: 0x0  nop
    ctx->pc = 0x216eb8u;
    // NOP
    // 0x216ebc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x216EBCu;
    {
        const bool branch_taken_0x216ebc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216ebc) {
            ctx->pc = 0x216ED4u;
            goto label_216ed4;
        }
    }
    ctx->pc = 0x216EC4u;
    // 0x216ec4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216ec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216ecc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x216ECCu;
    {
        const bool branch_taken_0x216ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216ECCu;
        // 0x216ed0: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ecc) {
            ctx->pc = 0x217068u;
            goto label_217068;
        }
    }
    ctx->pc = 0x216ED4u;
label_216ed4:
    // 0x216ed4: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x216ED4u;
    SET_GPR_U32(ctx, 31, 0x216EDCu);
    ctx->pc = 0x216ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216ED4u;
    // 0x216ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x216ED4u, 0x216EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EDCu;
label_216edc:
    // 0x216edc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x216EDCu;
    {
        const bool branch_taken_0x216edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EDCu;
        // 0x216ee0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216edc) {
            ctx->pc = 0x21706Cu;
            goto label_21706c;
        }
    }
    ctx->pc = 0x216EE4u;
label_216ee4:
    // 0x216ee4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x216EE4u;
    SET_GPR_U32(ctx, 31, 0x216EECu);
    ctx->pc = 0x216EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EE4u;
    // 0x216ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x216EE4u, 0x216EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EECu;
label_216eec:
    // 0x216eec: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x216eecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x216ef0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x216ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x216ef4: 0x2402021e  addiu       $v0, $zero, 0x21E
    ctx->pc = 0x216ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x216ef8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x216EF8u;
    {
        const bool branch_taken_0x216ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EF8u;
        // 0x216efc: 0x2862021f  slti        $v0, $v1, 0x21F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)543) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ef8) {
            ctx->pc = 0x216F48u;
            goto label_216f48;
        }
    }
    ctx->pc = 0x216F00u;
    // 0x216f00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216F00u;
    {
        const bool branch_taken_0x216f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F00u;
        // 0x216f04: 0x2402022f  addiu       $v0, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f00) {
            ctx->pc = 0x216F10u;
            goto label_216f10;
        }
    }
    ctx->pc = 0x216F08u;
    // 0x216f08: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x216F08u;
    {
        const bool branch_taken_0x216f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216f08) {
            ctx->pc = 0x216F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F08u;
            // 0x216f0c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F4Cu;
            goto label_216f4c;
        }
    }
    ctx->pc = 0x216F10u;
label_216f10:
    // 0x216f10: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x216f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x216f14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f1c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x216f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x216f20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x216f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216f24: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x216f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x216f28: 0x8e250700  lw          $a1, 0x700($s1)
    ctx->pc = 0x216f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x216f2c: 0x8c4315a4  lw          $v1, 0x15A4($v0)
    ctx->pc = 0x216f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5540)));
    // 0x216f30: 0x8c4715a8  lw          $a3, 0x15A8($v0)
    ctx->pc = 0x216f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5544)));
    // 0x216f34: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x216f34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216f38: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x216F38u;
    SET_GPR_U32(ctx, 31, 0x216F40u);
    ctx->pc = 0x216F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F38u;
    // 0x216f3c: 0xe28021  addu        $s0, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x216F38u, 0x216F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F40u;
label_216f40:
    // 0x216f40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x216F40u;
    {
        const bool branch_taken_0x216f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F40u;
        // 0x216f44: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f40) {
            ctx->pc = 0x216F70u;
            goto label_216f70;
        }
    }
    ctx->pc = 0x216F48u;
label_216f48:
    // 0x216f48: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x216f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_216f4c:
    // 0x216f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f50: 0x8e250700  lw          $a1, 0x700($s1)
    ctx->pc = 0x216f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x216f54: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x216f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216f58: 0x8c431524  lw          $v1, 0x1524($v0)
    ctx->pc = 0x216f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5412)));
    // 0x216f5c: 0x8c471528  lw          $a3, 0x1528($v0)
    ctx->pc = 0x216f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5416)));
    // 0x216f60: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x216f60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216f64: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x216F64u;
    SET_GPR_U32(ctx, 31, 0x216F6Cu);
    ctx->pc = 0x216F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F64u;
    // 0x216f68: 0xe28021  addu        $s0, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x216F64u, 0x216F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F6Cu;
label_216f6c:
    // 0x216f6c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x216f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_216f70:
    // 0x216f70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x216f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x216f74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x216f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216f78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x216f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x216f80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x216f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f84: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x216f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x216f88: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x216f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f90: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x216f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216f94: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x216F94u;
    SET_GPR_U32(ctx, 31, 0x216F9Cu);
    ctx->pc = 0x216F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F94u;
    // 0x216f98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x216F94u, 0x216F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F9Cu;
label_216f9c:
    // 0x216f9c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216fa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216fa4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216fa8:
    // 0x216fa8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x216fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x216fac: 0x2402021e  addiu       $v0, $zero, 0x21E
    ctx->pc = 0x216facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x216fb0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216FB0u;
    {
        const bool branch_taken_0x216fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FB0u;
        // 0x216fb4: 0x2862021f  slti        $v0, $v1, 0x21F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)543) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fb0) {
            ctx->pc = 0x216FCCu;
            goto label_216fcc;
        }
    }
    ctx->pc = 0x216FB8u;
    // 0x216fb8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x216FB8u;
    {
        const bool branch_taken_0x216fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216fb8) {
            ctx->pc = 0x216FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216FB8u;
            // 0x216fbc: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216FE0u;
            goto label_216fe0;
        }
    }
    ctx->pc = 0x216FC0u;
    // 0x216fc0: 0x2402022f  addiu       $v0, $zero, 0x22F
    ctx->pc = 0x216fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x216fc4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216FC4u;
    {
        const bool branch_taken_0x216fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216fc4) {
            ctx->pc = 0x216FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216FC4u;
            // 0x216fc8: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216FE0u;
            goto label_216fe0;
        }
    }
    ctx->pc = 0x216FCCu;
label_216fcc:
    // 0x216fcc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x216fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x216fd0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x216fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x216fd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216FD4u;
    {
        const bool branch_taken_0x216fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216fd4) {
            ctx->pc = 0x216FECu;
            goto label_216fec;
        }
    }
    ctx->pc = 0x216FDCu;
    // 0x216fdc: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x216fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_216fe0:
    // 0x216fe0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x216fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x216fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x216fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x216fe8: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x216fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_216fec:
    // 0x216fec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216FECu;
    SET_GPR_U32(ctx, 31, 0x216FF4u);
    ctx->pc = 0x216FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FECu;
    // 0x216ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216FECu, 0x216FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FF4u;
label_216ff4:
    // 0x216ff4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x216FF4u;
    {
        const bool branch_taken_0x216ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FF4u;
        // 0x216ff8: 0x2402021e  addiu       $v0, $zero, 0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ff4) {
            ctx->pc = 0x217048u;
            goto label_217048;
        }
    }
    ctx->pc = 0x216FFCu;
    // 0x216ffc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x216ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x217000: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x217000u;
    {
        const bool branch_taken_0x217000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x217004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217000u;
        // 0x217004: 0x2862021f  slti        $v0, $v1, 0x21F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)543) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217000) {
            ctx->pc = 0x217030u;
            goto label_217030;
        }
    }
    ctx->pc = 0x217008u;
    // 0x217008: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217008u;
    {
        const bool branch_taken_0x217008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217008u;
        // 0x21700c: 0x8e250700  lw          $a1, 0x700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217008) {
            ctx->pc = 0x21701Cu;
            goto label_21701c;
        }
    }
    ctx->pc = 0x217010u;
    // 0x217010: 0x2402022f  addiu       $v0, $zero, 0x22F
    ctx->pc = 0x217010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x217014: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217014u;
    {
        const bool branch_taken_0x217014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217014) {
            ctx->pc = 0x217034u;
            goto label_217034;
        }
    }
    ctx->pc = 0x21701Cu;
label_21701c:
    // 0x21701c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21701cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217020: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x217020u;
    SET_GPR_U32(ctx, 31, 0x217028u);
    ctx->pc = 0x217024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217020u;
    // 0x217024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x217020u, 0x217028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217028u;
label_217028:
    // 0x217028: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x217028u;
    {
        const bool branch_taken_0x217028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217028) {
            ctx->pc = 0x217040u;
            goto label_217040;
        }
    }
    ctx->pc = 0x217030u;
label_217030:
    // 0x217030: 0x8e250700  lw          $a1, 0x700($s1)
    ctx->pc = 0x217030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
label_217034:
    // 0x217034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217038: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x217038u;
    SET_GPR_U32(ctx, 31, 0x217040u);
    ctx->pc = 0x21703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217038u;
    // 0x21703c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x217038u, 0x217040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217040u;
label_217040:
    // 0x217040: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x217040u;
    SET_GPR_U32(ctx, 31, 0x217048u);
    ctx->pc = 0x217044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217040u;
    // 0x217044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x217040u, 0x217048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217048u;
label_217048:
    // 0x217048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21704c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21704cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x217050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217054: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x217054u;
    SET_GPR_U32(ctx, 31, 0x21705Cu);
    ctx->pc = 0x217058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217054u;
    // 0x217058: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x217054u, 0x21705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21705Cu;
label_21705c:
    // 0x21705c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21705cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x217060: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x217060u;
    SET_GPR_U32(ctx, 31, 0x217068u);
    ctx->pc = 0x217064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217060u;
    // 0x217064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x217060u, 0x217068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217068u;
label_217068:
    // 0x217068: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x217068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_21706c:
    // 0x21706c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x217070: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x217070u;
    {
        const bool branch_taken_0x217070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217070u;
        // 0x217074: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217070) {
            ctx->pc = 0x217094u;
            goto label_217094;
        }
    }
    ctx->pc = 0x217078u;
    // 0x217078: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x217078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x21707c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21707Cu;
    {
        const bool branch_taken_0x21707c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21707c) {
            ctx->pc = 0x217080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21707Cu;
            // 0x217080: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217098u;
            goto label_217098;
        }
    }
    ctx->pc = 0x217084u;
    // 0x217084: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x217084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
    // 0x217088: 0xc09ad3a  jal         func_26B4E8
    ctx->pc = 0x217088u;
    SET_GPR_U32(ctx, 31, 0x217090u);
    ctx->pc = 0x21708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217088u;
    // 0x21708c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4E8u, 0x217088u, 0x217090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217090u;
label_217090:
    // 0x217090: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x217090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_217094:
    // 0x217094: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x217094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_217098:
    // 0x217098: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x217098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21709c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21709cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2170a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2170a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2170a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2170a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2170a8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2170a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2170ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2170ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2170B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170ACu;
        // 0x2170b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2170ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2170B4u;
    // 0x2170b4: 0x0  nop
    ctx->pc = 0x2170b4u;
    // NOP
    ctx->pc = 0x2170b8u;
}
