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

// Function: cScenario_startSoftEvent
// Address: 0x2c39b0 - 0x2c3c10
void cScenario_startSoftEvent_0x2c39b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_startSoftEvent_0x2c39b0");
#endif

    switch (ctx->pc) {
        case 0x2c39b0u: goto label_2c39b0;
        case 0x2c39b4u: goto label_2c39b4;
        case 0x2c39b8u: goto label_2c39b8;
        case 0x2c39bcu: goto label_2c39bc;
        case 0x2c39c0u: goto label_2c39c0;
        case 0x2c39c4u: goto label_2c39c4;
        case 0x2c39c8u: goto label_2c39c8;
        case 0x2c39ccu: goto label_2c39cc;
        case 0x2c39d0u: goto label_2c39d0;
        case 0x2c39d4u: goto label_2c39d4;
        case 0x2c39d8u: goto label_2c39d8;
        case 0x2c39dcu: goto label_2c39dc;
        case 0x2c39e0u: goto label_2c39e0;
        case 0x2c39e4u: goto label_2c39e4;
        case 0x2c39e8u: goto label_2c39e8;
        case 0x2c39ecu: goto label_2c39ec;
        case 0x2c39f0u: goto label_2c39f0;
        case 0x2c39f4u: goto label_2c39f4;
        case 0x2c39f8u: goto label_2c39f8;
        case 0x2c39fcu: goto label_2c39fc;
        case 0x2c3a00u: goto label_2c3a00;
        case 0x2c3a04u: goto label_2c3a04;
        case 0x2c3a08u: goto label_2c3a08;
        case 0x2c3a0cu: goto label_2c3a0c;
        case 0x2c3a10u: goto label_2c3a10;
        case 0x2c3a14u: goto label_2c3a14;
        case 0x2c3a18u: goto label_2c3a18;
        case 0x2c3a1cu: goto label_2c3a1c;
        case 0x2c3a20u: goto label_2c3a20;
        case 0x2c3a24u: goto label_2c3a24;
        case 0x2c3a28u: goto label_2c3a28;
        case 0x2c3a2cu: goto label_2c3a2c;
        case 0x2c3a30u: goto label_2c3a30;
        case 0x2c3a34u: goto label_2c3a34;
        case 0x2c3a38u: goto label_2c3a38;
        case 0x2c3a3cu: goto label_2c3a3c;
        case 0x2c3a40u: goto label_2c3a40;
        case 0x2c3a44u: goto label_2c3a44;
        case 0x2c3a48u: goto label_2c3a48;
        case 0x2c3a4cu: goto label_2c3a4c;
        case 0x2c3a50u: goto label_2c3a50;
        case 0x2c3a54u: goto label_2c3a54;
        case 0x2c3a58u: goto label_2c3a58;
        case 0x2c3a5cu: goto label_2c3a5c;
        case 0x2c3a60u: goto label_2c3a60;
        case 0x2c3a64u: goto label_2c3a64;
        case 0x2c3a68u: goto label_2c3a68;
        case 0x2c3a6cu: goto label_2c3a6c;
        case 0x2c3a70u: goto label_2c3a70;
        case 0x2c3a74u: goto label_2c3a74;
        case 0x2c3a78u: goto label_2c3a78;
        case 0x2c3a7cu: goto label_2c3a7c;
        case 0x2c3a80u: goto label_2c3a80;
        case 0x2c3a84u: goto label_2c3a84;
        case 0x2c3a88u: goto label_2c3a88;
        case 0x2c3a8cu: goto label_2c3a8c;
        case 0x2c3a90u: goto label_2c3a90;
        case 0x2c3a94u: goto label_2c3a94;
        case 0x2c3a98u: goto label_2c3a98;
        case 0x2c3a9cu: goto label_2c3a9c;
        case 0x2c3aa0u: goto label_2c3aa0;
        case 0x2c3aa4u: goto label_2c3aa4;
        case 0x2c3aa8u: goto label_2c3aa8;
        case 0x2c3aacu: goto label_2c3aac;
        case 0x2c3ab0u: goto label_2c3ab0;
        case 0x2c3ab4u: goto label_2c3ab4;
        case 0x2c3ab8u: goto label_2c3ab8;
        case 0x2c3abcu: goto label_2c3abc;
        case 0x2c3ac0u: goto label_2c3ac0;
        case 0x2c3ac4u: goto label_2c3ac4;
        case 0x2c3ac8u: goto label_2c3ac8;
        case 0x2c3accu: goto label_2c3acc;
        case 0x2c3ad0u: goto label_2c3ad0;
        case 0x2c3ad4u: goto label_2c3ad4;
        case 0x2c3ad8u: goto label_2c3ad8;
        case 0x2c3adcu: goto label_2c3adc;
        case 0x2c3ae0u: goto label_2c3ae0;
        case 0x2c3ae4u: goto label_2c3ae4;
        case 0x2c3ae8u: goto label_2c3ae8;
        case 0x2c3aecu: goto label_2c3aec;
        case 0x2c3af0u: goto label_2c3af0;
        case 0x2c3af4u: goto label_2c3af4;
        case 0x2c3af8u: goto label_2c3af8;
        case 0x2c3afcu: goto label_2c3afc;
        case 0x2c3b00u: goto label_2c3b00;
        case 0x2c3b04u: goto label_2c3b04;
        case 0x2c3b08u: goto label_2c3b08;
        case 0x2c3b0cu: goto label_2c3b0c;
        case 0x2c3b10u: goto label_2c3b10;
        case 0x2c3b14u: goto label_2c3b14;
        case 0x2c3b18u: goto label_2c3b18;
        case 0x2c3b1cu: goto label_2c3b1c;
        case 0x2c3b20u: goto label_2c3b20;
        case 0x2c3b24u: goto label_2c3b24;
        case 0x2c3b28u: goto label_2c3b28;
        case 0x2c3b2cu: goto label_2c3b2c;
        case 0x2c3b30u: goto label_2c3b30;
        case 0x2c3b34u: goto label_2c3b34;
        case 0x2c3b38u: goto label_2c3b38;
        case 0x2c3b3cu: goto label_2c3b3c;
        case 0x2c3b40u: goto label_2c3b40;
        case 0x2c3b44u: goto label_2c3b44;
        case 0x2c3b48u: goto label_2c3b48;
        case 0x2c3b4cu: goto label_2c3b4c;
        case 0x2c3b50u: goto label_2c3b50;
        case 0x2c3b54u: goto label_2c3b54;
        case 0x2c3b58u: goto label_2c3b58;
        case 0x2c3b5cu: goto label_2c3b5c;
        case 0x2c3b60u: goto label_2c3b60;
        case 0x2c3b64u: goto label_2c3b64;
        case 0x2c3b68u: goto label_2c3b68;
        case 0x2c3b6cu: goto label_2c3b6c;
        case 0x2c3b70u: goto label_2c3b70;
        case 0x2c3b74u: goto label_2c3b74;
        case 0x2c3b78u: goto label_2c3b78;
        case 0x2c3b7cu: goto label_2c3b7c;
        case 0x2c3b80u: goto label_2c3b80;
        case 0x2c3b84u: goto label_2c3b84;
        case 0x2c3b88u: goto label_2c3b88;
        case 0x2c3b8cu: goto label_2c3b8c;
        case 0x2c3b90u: goto label_2c3b90;
        case 0x2c3b94u: goto label_2c3b94;
        case 0x2c3b98u: goto label_2c3b98;
        case 0x2c3b9cu: goto label_2c3b9c;
        case 0x2c3ba0u: goto label_2c3ba0;
        case 0x2c3ba4u: goto label_2c3ba4;
        case 0x2c3ba8u: goto label_2c3ba8;
        case 0x2c3bacu: goto label_2c3bac;
        case 0x2c3bb0u: goto label_2c3bb0;
        case 0x2c3bb4u: goto label_2c3bb4;
        case 0x2c3bb8u: goto label_2c3bb8;
        case 0x2c3bbcu: goto label_2c3bbc;
        case 0x2c3bc0u: goto label_2c3bc0;
        case 0x2c3bc4u: goto label_2c3bc4;
        case 0x2c3bc8u: goto label_2c3bc8;
        case 0x2c3bccu: goto label_2c3bcc;
        case 0x2c3bd0u: goto label_2c3bd0;
        case 0x2c3bd4u: goto label_2c3bd4;
        case 0x2c3bd8u: goto label_2c3bd8;
        case 0x2c3bdcu: goto label_2c3bdc;
        case 0x2c3be0u: goto label_2c3be0;
        case 0x2c3be4u: goto label_2c3be4;
        case 0x2c3be8u: goto label_2c3be8;
        case 0x2c3becu: goto label_2c3bec;
        case 0x2c3bf0u: goto label_2c3bf0;
        case 0x2c3bf4u: goto label_2c3bf4;
        case 0x2c3bf8u: goto label_2c3bf8;
        case 0x2c3bfcu: goto label_2c3bfc;
        case 0x2c3c00u: goto label_2c3c00;
        case 0x2c3c04u: goto label_2c3c04;
        case 0x2c3c08u: goto label_2c3c08;
        case 0x2c3c0cu: goto label_2c3c0c;
        default: break;
    }

    ctx->pc = 0x2c39b0u;

label_2c39b0:
    // 0x2c39b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c39b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c39b4:
    // 0x2c39b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c39b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2c39b8:
    // 0x2c39b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c39b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2c39bc:
    // 0x2c39bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c39bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c39c0:
    // 0x2c39c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c39c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c39c4:
    // 0x2c39c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c39c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c39c8:
    // 0x2c39c8: 0x964200e8  lhu         $v0, 0xE8($s2)
    ctx->pc = 0x2c39c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 232)));
label_2c39cc:
    // 0x2c39cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c39d0:
    // 0x2c39d0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2c39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2c39d4:
    // 0x2c39d4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2c39d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2c39d8:
    // 0x2c39d8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2c39d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2c39dc:
    // 0x2c39dc: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_2c39e0:
    if (ctx->pc == 0x2C39E0u) {
        ctx->pc = 0x2C39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39DCu;
        // 0x2c39e0: 0xa64200e8  sh          $v0, 0xE8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 232), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C39E4u;
        goto label_2c39e4;
    }
    ctx->pc = 0x2C39DCu;
    {
        const bool branch_taken_0x2c39dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39DCu;
        // 0x2c39e0: 0xa64200e8  sh          $v0, 0xE8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 232), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39dc) {
            ctx->pc = 0x2C3BF4u;
            goto label_2c3bf4;
        }
    }
    ctx->pc = 0x2C39E4u;
label_2c39e4:
    // 0x2c39e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c39e8:
    // 0x2c39e8: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_2c39ec:
    if (ctx->pc == 0x2C39ECu) {
        ctx->pc = 0x2C39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39E8u;
        // 0x2c39ec: 0xae4500e0  sw          $a1, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C39F0u;
        goto label_2c39f0;
    }
    ctx->pc = 0x2C39E8u;
    {
        const bool branch_taken_0x2c39e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39E8u;
        // 0x2c39ec: 0xae4500e0  sw          $a1, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39e8) {
            ctx->pc = 0x2C3A10u;
            goto label_2c3a10;
        }
    }
    ctx->pc = 0x2C39F0u;
label_2c39f0:
    // 0x2c39f0: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2c39f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
label_2c39f4:
    // 0x2c39f4: 0x26107b20  addiu       $s0, $s0, 0x7B20
    ctx->pc = 0x2c39f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31520));
label_2c39f8:
    // 0x2c39f8: 0xc0c228e  jal         func_308A38
label_2c39fc:
    if (ctx->pc == 0x2C39FCu) {
        ctx->pc = 0x2C39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39F8u;
        // 0x2c39fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A00u;
        goto label_2c3a00;
    }
    ctx->pc = 0x2C39F8u;
    SET_GPR_U32(ctx, 31, 0x2C3A00u);
    ctx->pc = 0x2C39FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39F8u;
    // 0x2c39fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A38u, 0x2C39F8u, 0x2C3A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A00u;
label_2c3a00:
    // 0x2c3a00: 0xc0c2350  jal         func_308D40
label_2c3a04:
    if (ctx->pc == 0x2C3A04u) {
        ctx->pc = 0x2C3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A00u;
        // 0x2c3a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A08u;
        goto label_2c3a08;
    }
    ctx->pc = 0x2C3A00u;
    SET_GPR_U32(ctx, 31, 0x2C3A08u);
    ctx->pc = 0x2C3A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A00u;
    // 0x2c3a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D40u, 0x2C3A00u, 0x2C3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A08u;
label_2c3a08:
    // 0x2c3a08: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2c3a0c:
    if (ctx->pc == 0x2C3A0Cu) {
        ctx->pc = 0x2C3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A08u;
        // 0x2c3a0c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A10u;
        goto label_2c3a10;
    }
    ctx->pc = 0x2C3A08u;
    {
        const bool branch_taken_0x2c3a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A08u;
        // 0x2c3a0c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a08) {
            ctx->pc = 0x2C3BC8u;
            goto label_2c3bc8;
        }
    }
    ctx->pc = 0x2C3A10u;
label_2c3a10:
    // 0x2c3a10: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x2c3a10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
label_2c3a14:
    // 0x2c3a14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2c3a18:
    // 0x2c3a18: 0x8e237a84  lw          $v1, 0x7A84($s1)
    ctx->pc = 0x2c3a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31364)));
label_2c3a1c:
    // 0x2c3a1c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2c3a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2c3a20:
    // 0x2c3a20: 0x26307a84  addiu       $s0, $s1, 0x7A84
    ctx->pc = 0x2c3a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 31364));
label_2c3a24:
    // 0x2c3a24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c3a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c3a28:
    // 0x2c3a28: 0xc0c6be8  jal         func_31AFA0
label_2c3a2c:
    if (ctx->pc == 0x2C3A2Cu) {
        ctx->pc = 0x2C3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A28u;
        // 0x2c3a2c: 0xae237a84  sw          $v1, 0x7A84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 31364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A30u;
        goto label_2c3a30;
    }
    ctx->pc = 0x2C3A28u;
    SET_GPR_U32(ctx, 31, 0x2C3A30u);
    ctx->pc = 0x2C3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A28u;
    // 0x2c3a2c: 0xae237a84  sw          $v1, 0x7A84($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31364), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x2C3A28u, 0x2C3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A30u;
label_2c3a30:
    // 0x2c3a30: 0x8e04fff4  lw          $a0, -0xC($s0)
    ctx->pc = 0x2c3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
label_2c3a34:
    // 0x2c3a34: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2c3a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
label_2c3a38:
    // 0x2c3a38: 0x8e03fffc  lw          $v1, -0x4($s0)
    ctx->pc = 0x2c3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_2c3a3c:
    // 0x2c3a3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2c3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2c3a40:
    // 0x2c3a40: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x2c3a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
label_2c3a44:
    // 0x2c3a44: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2c3a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2c3a48:
    // 0x2c3a48: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2c3a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2c3a4c:
    // 0x2c3a4c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2c3a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_2c3a50:
    // 0x2c3a50: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2c3a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2c3a54:
    // 0x2c3a54: 0xae04fff4  sw          $a0, -0xC($s0)
    ctx->pc = 0x2c3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 4));
label_2c3a58:
    // 0x2c3a58: 0xc0b6dac  jal         func_2DB6B0
label_2c3a5c:
    if (ctx->pc == 0x2C3A5Cu) {
        ctx->pc = 0x2C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A58u;
        // 0x2c3a5c: 0xae03fffc  sw          $v1, -0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A60u;
        goto label_2c3a60;
    }
    ctx->pc = 0x2C3A58u;
    SET_GPR_U32(ctx, 31, 0x2C3A60u);
    ctx->pc = 0x2C3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A58u;
    // 0x2c3a5c: 0xae03fffc  sw          $v1, -0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C3A58u, 0x2C3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A60u;
label_2c3a60:
    // 0x2c3a60: 0xc0499dc  jal         func_126770
label_2c3a64:
    if (ctx->pc == 0x2C3A64u) {
        ctx->pc = 0x2C3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A60u;
        // 0x2c3a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A68u;
        goto label_2c3a68;
    }
    ctx->pc = 0x2C3A60u;
    SET_GPR_U32(ctx, 31, 0x2C3A68u);
    ctx->pc = 0x2C3A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A60u;
    // 0x2c3a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x2C3A60u, 0x2C3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A68u;
label_2c3a68:
    // 0x2c3a68: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x2c3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_2c3a6c:
    // 0x2c3a6c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2c3a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2c3a70:
    // 0x2c3a70: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_2c3a74:
    if (ctx->pc == 0x2C3A74u) {
        ctx->pc = 0x2C3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A70u;
        // 0x2c3a74: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A78u;
        goto label_2c3a78;
    }
    ctx->pc = 0x2C3A70u;
    {
        const bool branch_taken_0x2c3a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A70u;
        // 0x2c3a74: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a70) {
            ctx->pc = 0x2C3BC4u;
            goto label_2c3bc4;
        }
    }
    ctx->pc = 0x2C3A78u;
label_2c3a78:
    // 0x2c3a78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2c3a7c:
    // 0x2c3a7c: 0x2442c280  addiu       $v0, $v0, -0x3D80
    ctx->pc = 0x2c3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951552));
label_2c3a80:
    // 0x2c3a80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c3a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c3a84:
    // 0x2c3a84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c3a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c3a88:
    // 0x2c3a88: 0x800008  jr          $a0
label_2c3a8c:
    if (ctx->pc == 0x2C3A8Cu) {
        ctx->pc = 0x2C3A90u;
        goto label_2c3a90;
    }
    ctx->pc = 0x2C3A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3A90u: goto label_2c3a90;
            case 0x2C3B30u: goto label_2c3b30;
            case 0x2C3B80u: goto label_2c3b80;
            case 0x2C3BC4u: goto label_2c3bc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3A88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C3A90u;
label_2c3a90:
    // 0x2c3a90: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2c3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2c3a94:
    // 0x2c3a94: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2c3a94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_2c3a98:
    // 0x2c3a98: 0x24917a78  addiu       $s1, $a0, 0x7A78
    ctx->pc = 0x2c3a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 31352));
label_2c3a9c:
    // 0x2c3a9c: 0x8c837a78  lw          $v1, 0x7A78($a0)
    ctx->pc = 0x2c3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31352)));
label_2c3aa0:
    // 0x2c3aa0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c3aa4:
    // 0x2c3aa4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2c3aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_2c3aa8:
    // 0x2c3aa8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2c3aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2c3aac:
    // 0x2c3aac: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x2c3aacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
label_2c3ab0:
    // 0x2c3ab0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2c3ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2c3ab4:
    // 0x2c3ab4: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2c3ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
label_2c3ab8:
    // 0x2c3ab8: 0xac837a78  sw          $v1, 0x7A78($a0)
    ctx->pc = 0x2c3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31352), GPR_U32(ctx, 3));
label_2c3abc:
    // 0x2c3abc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2c3abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2c3ac0:
    // 0x2c3ac0: 0x26107b20  addiu       $s0, $s0, 0x7B20
    ctx->pc = 0x2c3ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31520));
label_2c3ac4:
    // 0x2c3ac4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2c3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2c3ac8:
    // 0x2c3ac8: 0xc0c228e  jal         func_308A38
label_2c3acc:
    if (ctx->pc == 0x2C3ACCu) {
        ctx->pc = 0x2C3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AC8u;
        // 0x2c3acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AD0u;
        goto label_2c3ad0;
    }
    ctx->pc = 0x2C3AC8u;
    SET_GPR_U32(ctx, 31, 0x2C3AD0u);
    ctx->pc = 0x2C3ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AC8u;
    // 0x2c3acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A38u, 0x2C3AC8u, 0x2C3AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AD0u;
label_2c3ad0:
    // 0x2c3ad0: 0xc0c2350  jal         func_308D40
label_2c3ad4:
    if (ctx->pc == 0x2C3AD4u) {
        ctx->pc = 0x2C3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AD0u;
        // 0x2c3ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AD8u;
        goto label_2c3ad8;
    }
    ctx->pc = 0x2C3AD0u;
    SET_GPR_U32(ctx, 31, 0x2C3AD8u);
    ctx->pc = 0x2C3AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AD0u;
    // 0x2c3ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D40u, 0x2C3AD0u, 0x2C3AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AD8u;
label_2c3ad8:
    // 0x2c3ad8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2c3ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2c3adc:
    // 0x2c3adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3ae0:
    // 0x2c3ae0: 0xc0a523a  jal         func_2948E8
label_2c3ae4:
    if (ctx->pc == 0x2C3AE4u) {
        ctx->pc = 0x2C3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AE0u;
        // 0x2c3ae4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AE8u;
        goto label_2c3ae8;
    }
    ctx->pc = 0x2C3AE0u;
    SET_GPR_U32(ctx, 31, 0x2C3AE8u);
    ctx->pc = 0x2C3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AE0u;
    // 0x2c3ae4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948E8u, 0x2C3AE0u, 0x2C3AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AE8u;
label_2c3ae8:
    // 0x2c3ae8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3aec:
    // 0x2c3aec: 0xc0b141a  jal         func_2C5068
label_2c3af0:
    if (ctx->pc == 0x2C3AF0u) {
        ctx->pc = 0x2C3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AECu;
        // 0x2c3af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AF4u;
        goto label_2c3af4;
    }
    ctx->pc = 0x2C3AECu;
    SET_GPR_U32(ctx, 31, 0x2C3AF4u);
    ctx->pc = 0x2C3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AECu;
    // 0x2c3af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5068u, 0x2C3AECu, 0x2C3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AF4u;
label_2c3af4:
    // 0x2c3af4: 0xc0be91c  jal         func_2FA470
label_2c3af8:
    if (ctx->pc == 0x2C3AF8u) {
        ctx->pc = 0x2C3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AF4u;
        // 0x2c3af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AFCu;
        goto label_2c3afc;
    }
    ctx->pc = 0x2C3AF4u;
    SET_GPR_U32(ctx, 31, 0x2C3AFCu);
    ctx->pc = 0x2C3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AF4u;
    // 0x2c3af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA470u, 0x2C3AF4u, 0x2C3AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AFCu;
label_2c3afc:
    // 0x2c3afc: 0xc0b6dac  jal         func_2DB6B0
label_2c3b00:
    if (ctx->pc == 0x2C3B00u) {
        ctx->pc = 0x2C3B04u;
        goto label_2c3b04;
    }
    ctx->pc = 0x2C3AFCu;
    SET_GPR_U32(ctx, 31, 0x2C3B04u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C3AFCu, 0x2C3B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B04u;
label_2c3b04:
    // 0x2c3b04: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x2c3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_2c3b08:
    // 0x2c3b08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3b0c:
    // 0x2c3b0c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x2c3b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_2c3b10:
    // 0x2c3b10: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x2c3b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2c3b14:
    // 0x2c3b14: 0xc0f809  jalr        $a2
label_2c3b18:
    if (ctx->pc == 0x2C3B18u) {
        ctx->pc = 0x2C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B14u;
        // 0x2c3b18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B1Cu;
        goto label_2c3b1c;
    }
    ctx->pc = 0x2C3B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2C3B1Cu);
        ctx->pc = 0x2C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B14u;
        // 0x2c3b18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3B14u, 0x2C3B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3B1Cu;
label_2c3b1c:
    // 0x2c3b1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c3b20:
    // 0x2c3b20: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2c3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_2c3b24:
    // 0x2c3b24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c3b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c3b28:
    // 0x2c3b28: 0x10000026  b           . + 4 + (0x26 << 2)
label_2c3b2c:
    if (ctx->pc == 0x2C3B2Cu) {
        ctx->pc = 0x2C3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B28u;
        // 0x2c3b2c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B30u;
        goto label_2c3b30;
    }
    ctx->pc = 0x2C3B28u;
    {
        const bool branch_taken_0x2c3b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B28u;
        // 0x2c3b2c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b28) {
            ctx->pc = 0x2C3BC4u;
            goto label_2c3bc4;
        }
    }
    ctx->pc = 0x2C3B30u;
label_2c3b30:
    // 0x2c3b30: 0x3c090074  lui         $t1, 0x74
    ctx->pc = 0x2c3b30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
label_2c3b34:
    // 0x2c3b34: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2c3b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_2c3b38:
    // 0x2c3b38: 0x8d227a78  lw          $v0, 0x7A78($t1)
    ctx->pc = 0x2c3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 31352)));
label_2c3b3c:
    // 0x2c3b3c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2c3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2c3b40:
    // 0x2c3b40: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2c3b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_2c3b44:
    // 0x2c3b44: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x2c3b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_2c3b48:
    // 0x2c3b48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c3b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c3b4c:
    // 0x2c3b4c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x2c3b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_2c3b50:
    // 0x2c3b50: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c3b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2c3b54:
    // 0x2c3b54: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2c3b54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_2c3b58:
    // 0x2c3b58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c3b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2c3b5c:
    // 0x2c3b5c: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2c3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_2c3b60:
    // 0x2c3b60: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2c3b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2c3b64:
    // 0x2c3b64: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2c3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_2c3b68:
    // 0x2c3b68: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2c3b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_2c3b6c:
    // 0x2c3b6c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2c3b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2c3b70:
    // 0x2c3b70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c3b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2c3b74:
    // 0x2c3b74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c3b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c3b78:
    // 0x2c3b78: 0x10000012  b           . + 4 + (0x12 << 2)
label_2c3b7c:
    if (ctx->pc == 0x2C3B7Cu) {
        ctx->pc = 0x2C3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B78u;
        // 0x2c3b7c: 0xad227a78  sw          $v0, 0x7A78($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B80u;
        goto label_2c3b80;
    }
    ctx->pc = 0x2C3B78u;
    {
        const bool branch_taken_0x2c3b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B78u;
        // 0x2c3b7c: 0xad227a78  sw          $v0, 0x7A78($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b78) {
            ctx->pc = 0x2C3BC4u;
            goto label_2c3bc4;
        }
    }
    ctx->pc = 0x2C3B80u;
label_2c3b80:
    // 0x2c3b80: 0x26297a84  addiu       $t1, $s1, 0x7A84
    ctx->pc = 0x2c3b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 31364));
label_2c3b84:
    // 0x2c3b84: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2c3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_2c3b88:
    // 0x2c3b88: 0x8d22fff4  lw          $v0, -0xC($t1)
    ctx->pc = 0x2c3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967284)));
label_2c3b8c:
    // 0x2c3b8c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2c3b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_2c3b90:
    // 0x2c3b90: 0x8e237a84  lw          $v1, 0x7A84($s1)
    ctx->pc = 0x2c3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31364)));
label_2c3b94:
    // 0x2c3b94: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x2c3b94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
label_2c3b98:
    // 0x2c3b98: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c3b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2c3b9c:
    // 0x2c3b9c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2c3b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_2c3ba0:
    // 0x2c3ba0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2c3ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2c3ba4:
    // 0x2c3ba4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2c3ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2c3ba8:
    // 0x2c3ba8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2c3ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_2c3bac:
    // 0x2c3bac: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2c3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_2c3bb0:
    // 0x2c3bb0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2c3bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2c3bb4:
    // 0x2c3bb4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2c3bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2c3bb8:
    // 0x2c3bb8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c3bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2c3bbc:
    // 0x2c3bbc: 0xae237a84  sw          $v1, 0x7A84($s1)
    ctx->pc = 0x2c3bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 31364), GPR_U32(ctx, 3));
label_2c3bc0:
    // 0x2c3bc0: 0xad22fff4  sw          $v0, -0xC($t1)
    ctx->pc = 0x2c3bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967284), GPR_U32(ctx, 2));
label_2c3bc4:
    // 0x2c3bc4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2c3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2c3bc8:
    // 0x2c3bc8: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_2c3bcc:
    if (ctx->pc == 0x2C3BCCu) {
        ctx->pc = 0x2C3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BC8u;
        // 0x2c3bcc: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3BD0u;
        goto label_2c3bd0;
    }
    ctx->pc = 0x2C3BC8u;
    {
        const bool branch_taken_0x2c3bc8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BC8u;
        // 0x2c3bcc: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bc8) {
            ctx->pc = 0x2C3BE8u;
            goto label_2c3be8;
        }
    }
    ctx->pc = 0x2C3BD0u;
label_2c3bd0:
    // 0x2c3bd0: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2c3bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2c3bd4:
    // 0x2c3bd4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2c3bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c3bd8:
    // 0x2c3bd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c3bdc:
    // 0x2c3bdc: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x2c3bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_2c3be0:
    // 0x2c3be0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c3be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2c3be4:
    // 0x2c3be4: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x2c3be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_2c3be8:
    // 0x2c3be8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2c3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2c3bec:
    // 0x2c3bec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2c3bf0:
    // 0x2c3bf0: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x2c3bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_2c3bf4:
    // 0x2c3bf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c3bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c3bf8:
    // 0x2c3bf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c3bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3bfc:
    // 0x2c3bfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c3bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3c00:
    // 0x2c3c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3c04:
    // 0x2c3c04: 0x3e00008  jr          $ra
label_2c3c08:
    if (ctx->pc == 0x2C3C08u) {
        ctx->pc = 0x2C3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C04u;
        // 0x2c3c08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C0Cu;
        goto label_2c3c0c;
    }
    ctx->pc = 0x2C3C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C04u;
        // 0x2c3c08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3C0Cu;
label_2c3c0c:
    // 0x2c3c0c: 0x0  nop
    ctx->pc = 0x2c3c0cu;
    // NOP
    ctx->pc = 0x2c3c10u;
}
