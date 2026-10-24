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

// Function: JukeBox_Load
// Address: 0x1f5a98 - 0x1f5c48
void JukeBox_Load_0x1f5a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("JukeBox_Load_0x1f5a98");
#endif

    switch (ctx->pc) {
        case 0x1f5accu: goto label_1f5acc;
        case 0x1f5b00u: goto label_1f5b00;
        case 0x1f5b0cu: goto label_1f5b0c;
        case 0x1f5b24u: goto label_1f5b24;
        case 0x1f5b34u: goto label_1f5b34;
        case 0x1f5b48u: goto label_1f5b48;
        case 0x1f5c18u: goto label_1f5c18;
        default: break;
    }

    ctx->pc = 0x1f5a98u;

    // 0x1f5a98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f5a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f5a9c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f5aa0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f5aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f5aa4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x1f5aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x1f5aa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5aac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f5aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f5ab0: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1f5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1f5ab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f5ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ab8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f5ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f5abc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f5abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5ac0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f5ac4: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x1F5AC4u;
    SET_GPR_U32(ctx, 31, 0x1F5ACCu);
    ctx->pc = 0x1F5AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AC4u;
    // 0x1f5ac8: 0x24c6c000  addiu       $a2, $a2, -0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x1F5AC4u, 0x1F5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5ACCu;
label_1f5acc:
    // 0x1f5acc: 0x26320030  addiu       $s2, $s1, 0x30
    ctx->pc = 0x1f5accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f5ad0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1f5ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1f5ad4: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x1f5ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x1f5ad8: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x1f5ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x1f5adc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f5adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ae4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f5ae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ae8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f5ae8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5aec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f5aecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5af0: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x1f5af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x1f5af4: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1f5af8: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x1F5AF8u;
    SET_GPR_U32(ctx, 31, 0x1F5B00u);
    ctx->pc = 0x1F5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AF8u;
    // 0x1f5afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x1F5AF8u, 0x1F5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B00u;
label_1f5b00:
    // 0x1f5b00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b04: 0xc080458  jal         func_201160
    ctx->pc = 0x1F5B04u;
    SET_GPR_U32(ctx, 31, 0x1F5B0Cu);
    ctx->pc = 0x1F5B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B04u;
    // 0x1f5b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1F5B04u, 0x1F5B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B0Cu;
label_1f5b0c:
    // 0x1f5b0c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f5b10: 0x8e260080  lw          $a2, 0x80($s1)
    ctx->pc = 0x1f5b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1f5b14: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1f5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1f5b18: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1f5b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f5b1c: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1F5B1Cu;
    SET_GPR_U32(ctx, 31, 0x1F5B24u);
    ctx->pc = 0x1F5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B1Cu;
    // 0x1f5b20: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1F5B1Cu, 0x1F5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B24u;
label_1f5b24:
    // 0x1f5b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b28: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1f5b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f5b2c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1F5B2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5B34u);
    ctx->pc = 0x1F5B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B2Cu;
    // 0x1f5b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1F5B2Cu, 0x1F5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B34u;
label_1f5b34:
    // 0x1f5b34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5B34u;
    {
        const bool branch_taken_0x1f5b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B34u;
        // 0x1f5b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b34) {
            ctx->pc = 0x1F5B50u;
            goto label_1f5b50;
        }
    }
    ctx->pc = 0x1F5B3Cu;
    // 0x1f5b3c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1f5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f5b40: 0xc0aa7cc  jal         func_2A9F30
    ctx->pc = 0x1F5B40u;
    SET_GPR_U32(ctx, 31, 0x1F5B48u);
    ctx->pc = 0x1F5B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B40u;
    // 0x1f5b44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F30u, 0x1F5B40u, 0x1F5B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B48u;
label_1f5b48:
    // 0x1f5b48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5B48u;
    {
        const bool branch_taken_0x1f5b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B48u;
        // 0x1f5b4c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b48) {
            ctx->pc = 0x1F5B58u;
            goto label_1f5b58;
        }
    }
    ctx->pc = 0x1F5B50u;
label_1f5b50:
    // 0x1f5b50: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1F5B50u;
    {
        const bool branch_taken_0x1f5b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B50u;
        // 0x1f5b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b50) {
            ctx->pc = 0x1F5C2Cu;
            goto label_1f5c2c;
        }
    }
    ctx->pc = 0x1F5B58u;
label_1f5b58:
    // 0x1f5b58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f5b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5b5c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1f5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1f5b60: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f5b64: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x1f5b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x1f5b68: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1f5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5b6c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1f5b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1f5b70: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1f5b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1f5b74: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x1f5b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x1f5b78: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1f5b78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5b7c: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x1f5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x1f5b80: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1f5b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1f5b84: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x1f5b84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5b88: 0x8c620588  lw          $v0, 0x588($v1)
    ctx->pc = 0x1f5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1416)));
    // 0x1f5b8c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1f5b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1f5b90: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5B90u;
    {
        const bool branch_taken_0x1f5b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b90) {
            ctx->pc = 0x1F5B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5B90u;
            // 0x1f5b94: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B9Cu;
            goto label_1f5b9c;
        }
    }
    ctx->pc = 0x1F5B98u;
    // 0x1f5b98: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x1f5b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
label_1f5b9c:
    // 0x1f5b9c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1f5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1f5ba0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1f5ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1f5ba4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ba8: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x1f5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x1f5bac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A28u));
    // 0x1f5bb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f5bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f5bb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5BB4u;
    {
        const bool branch_taken_0x1f5bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BB4u;
        // 0x1f5bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5bb4) {
            ctx->pc = 0x1F5BC4u;
            goto label_1f5bc4;
        }
    }
    ctx->pc = 0x1F5BBCu;
    // 0x1f5bbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5BBCu;
    {
        const bool branch_taken_0x1f5bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BBCu;
        // 0x1f5bc0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5bbc) {
            ctx->pc = 0x1F5BC8u;
            goto label_1f5bc8;
        }
    }
    ctx->pc = 0x1F5BC4u;
label_1f5bc4:
    // 0x1f5bc4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1f5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1f5bc8:
    // 0x1f5bc8: 0x24a27a24  addiu       $v0, $a1, 0x7A24
    ctx->pc = 0x1f5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31268));
    // 0x1f5bcc: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1f5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1f5bd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f5bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f5bd4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f5bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f5bd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5BD8u;
    {
        const bool branch_taken_0x1f5bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BD8u;
        // 0x1f5bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5bd8) {
            ctx->pc = 0x1F5BE8u;
            goto label_1f5be8;
        }
    }
    ctx->pc = 0x1F5BE0u;
    // 0x1f5be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5BE0u;
    {
        const bool branch_taken_0x1f5be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BE0u;
        // 0x1f5be4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5be0) {
            ctx->pc = 0x1F5BECu;
            goto label_1f5bec;
        }
    }
    ctx->pc = 0x1F5BE8u;
label_1f5be8:
    // 0x1f5be8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1f5be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1f5bec:
    // 0x1f5bec: 0x24a27a24  addiu       $v0, $a1, 0x7A24
    ctx->pc = 0x1f5becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31268));
    // 0x1f5bf0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f5bf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f5bf8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f5bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f5bfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5BFCu;
    {
        const bool branch_taken_0x1f5bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BFCu;
        // 0x1f5c00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5bfc) {
            ctx->pc = 0x1F5C0Cu;
            goto label_1f5c0c;
        }
    }
    ctx->pc = 0x1F5C04u;
    // 0x1f5c04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5C04u;
    {
        const bool branch_taken_0x1f5c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C04u;
        // 0x1f5c08: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c04) {
            ctx->pc = 0x1F5C10u;
            goto label_1f5c10;
        }
    }
    ctx->pc = 0x1F5C0Cu;
label_1f5c0c:
    // 0x1f5c0c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1f5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1f5c10:
    // 0x1f5c10: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1F5C10u;
    SET_GPR_U32(ctx, 31, 0x1F5C18u);
    ctx->pc = 0x1F5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C10u;
    // 0x1f5c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1F5C10u, 0x1F5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C18u;
label_1f5c18:
    // 0x1f5c18: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1f5c18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c20: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f5c20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5c24: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x1f5c24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5c28: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1f5c28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_1f5c2c:
    // 0x1f5c2c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f5c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f5c30: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f5c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5c34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f5c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5c38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C3Cu;
        // 0x1f5c40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C44u;
    // 0x1f5c44: 0x0  nop
    ctx->pc = 0x1f5c44u;
    // NOP
    ctx->pc = 0x1f5c48u;
}
