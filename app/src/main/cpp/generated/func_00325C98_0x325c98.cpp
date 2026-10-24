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

// Function: func_00325C98
// Address: 0x325c98 - 0x325dc0
void func_00325C98_0x325c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325C98_0x325c98");
#endif

    switch (ctx->pc) {
        case 0x325c98u: goto label_325c98;
        case 0x325c9cu: goto label_325c9c;
        case 0x325ca0u: goto label_325ca0;
        case 0x325ca4u: goto label_325ca4;
        case 0x325ca8u: goto label_325ca8;
        case 0x325cacu: goto label_325cac;
        case 0x325cb0u: goto label_325cb0;
        case 0x325cb4u: goto label_325cb4;
        case 0x325cb8u: goto label_325cb8;
        case 0x325cbcu: goto label_325cbc;
        case 0x325cc0u: goto label_325cc0;
        case 0x325cc4u: goto label_325cc4;
        case 0x325cc8u: goto label_325cc8;
        case 0x325cccu: goto label_325ccc;
        case 0x325cd0u: goto label_325cd0;
        case 0x325cd4u: goto label_325cd4;
        case 0x325cd8u: goto label_325cd8;
        case 0x325cdcu: goto label_325cdc;
        case 0x325ce0u: goto label_325ce0;
        case 0x325ce4u: goto label_325ce4;
        case 0x325ce8u: goto label_325ce8;
        case 0x325cecu: goto label_325cec;
        case 0x325cf0u: goto label_325cf0;
        case 0x325cf4u: goto label_325cf4;
        case 0x325cf8u: goto label_325cf8;
        case 0x325cfcu: goto label_325cfc;
        case 0x325d00u: goto label_325d00;
        case 0x325d04u: goto label_325d04;
        case 0x325d08u: goto label_325d08;
        case 0x325d0cu: goto label_325d0c;
        case 0x325d10u: goto label_325d10;
        case 0x325d14u: goto label_325d14;
        case 0x325d18u: goto label_325d18;
        case 0x325d1cu: goto label_325d1c;
        case 0x325d20u: goto label_325d20;
        case 0x325d24u: goto label_325d24;
        case 0x325d28u: goto label_325d28;
        case 0x325d2cu: goto label_325d2c;
        case 0x325d30u: goto label_325d30;
        case 0x325d34u: goto label_325d34;
        case 0x325d38u: goto label_325d38;
        case 0x325d3cu: goto label_325d3c;
        case 0x325d40u: goto label_325d40;
        case 0x325d44u: goto label_325d44;
        case 0x325d48u: goto label_325d48;
        case 0x325d4cu: goto label_325d4c;
        case 0x325d50u: goto label_325d50;
        case 0x325d54u: goto label_325d54;
        case 0x325d58u: goto label_325d58;
        case 0x325d5cu: goto label_325d5c;
        case 0x325d60u: goto label_325d60;
        case 0x325d64u: goto label_325d64;
        case 0x325d68u: goto label_325d68;
        case 0x325d6cu: goto label_325d6c;
        case 0x325d70u: goto label_325d70;
        case 0x325d74u: goto label_325d74;
        case 0x325d78u: goto label_325d78;
        case 0x325d7cu: goto label_325d7c;
        case 0x325d80u: goto label_325d80;
        case 0x325d84u: goto label_325d84;
        case 0x325d88u: goto label_325d88;
        case 0x325d8cu: goto label_325d8c;
        case 0x325d90u: goto label_325d90;
        case 0x325d94u: goto label_325d94;
        case 0x325d98u: goto label_325d98;
        case 0x325d9cu: goto label_325d9c;
        case 0x325da0u: goto label_325da0;
        case 0x325da4u: goto label_325da4;
        case 0x325da8u: goto label_325da8;
        case 0x325dacu: goto label_325dac;
        case 0x325db0u: goto label_325db0;
        case 0x325db4u: goto label_325db4;
        case 0x325db8u: goto label_325db8;
        case 0x325dbcu: goto label_325dbc;
        default: break;
    }

    ctx->pc = 0x325c98u;

label_325c98:
    // 0x325c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_325c9c:
    // 0x325c9c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x325c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_325ca0:
    // 0x325ca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_325ca4:
    // 0x325ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x325ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_325ca8:
    // 0x325ca8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_325cac:
    // 0x325cac: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x325cacu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
label_325cb0:
    // 0x325cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_325cb4:
    // 0x325cb4: 0x24427418  addiu       $v0, $v0, 0x7418
    ctx->pc = 0x325cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29720));
label_325cb8:
    // 0x325cb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x325cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_325cbc:
    // 0x325cbc: 0x264581bc  addiu       $a1, $s2, -0x7E44
    ctx->pc = 0x325cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934972));
label_325cc0:
    // 0x325cc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_325cc4:
    // 0x325cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x325cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_325cc8:
    // 0x325cc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x325cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_325ccc:
    // 0x325ccc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x325cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_325cd0:
    // 0x325cd0: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
label_325cd4:
    if (ctx->pc == 0x325CD4u) {
        ctx->pc = 0x325CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CD0u;
        // 0x325cd4: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325CD8u;
        goto label_325cd8;
    }
    ctx->pc = 0x325CD0u;
    {
        const bool branch_taken_0x325cd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x325CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CD0u;
        // 0x325cd4: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cd0) {
            ctx->pc = 0x325D88u;
            goto label_325d88;
        }
    }
    ctx->pc = 0x325CD8u;
label_325cd8:
    // 0x325cd8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_325cdc:
    // 0x325cdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x325cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325ce0:
    // 0x325ce0: 0x8c4380a4  lw          $v1, -0x7F5C($v0)
    ctx->pc = 0x325ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934692)));
label_325ce4:
    // 0x325ce4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x325ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_325ce8:
    // 0x325ce8: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_325cec:
    if (ctx->pc == 0x325CECu) {
        ctx->pc = 0x325CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CE8u;
        // 0x325cec: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325CF0u;
        goto label_325cf0;
    }
    ctx->pc = 0x325CE8u;
    {
        const bool branch_taken_0x325ce8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x325CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CE8u;
        // 0x325cec: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ce8) {
            ctx->pc = 0x325D74u;
            goto label_325d74;
        }
    }
    ctx->pc = 0x325CF0u;
label_325cf0:
    // 0x325cf0: 0x244280e8  addiu       $v0, $v0, -0x7F18
    ctx->pc = 0x325cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934760));
label_325cf4:
    // 0x325cf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_325cf8:
    // 0x325cf8: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_325cfc:
    if (ctx->pc == 0x325CFCu) {
        ctx->pc = 0x325CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CF8u;
        // 0x325cfc: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D00u;
        goto label_325d00;
    }
    ctx->pc = 0x325CF8u;
    {
        const bool branch_taken_0x325cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x325CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CF8u;
        // 0x325cfc: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cf8) {
            ctx->pc = 0x325D0Cu;
            goto label_325d0c;
        }
    }
    ctx->pc = 0x325D00u;
label_325d00:
    // 0x325d00: 0x24428140  addiu       $v0, $v0, -0x7EC0
    ctx->pc = 0x325d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934848));
label_325d04:
    // 0x325d04: 0xc0c9490  jal         func_325240
label_325d08:
    if (ctx->pc == 0x325D08u) {
        ctx->pc = 0x325D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D04u;
        // 0x325d08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D0Cu;
        goto label_325d0c;
    }
    ctx->pc = 0x325D04u;
    SET_GPR_U32(ctx, 31, 0x325D0Cu);
    ctx->pc = 0x325D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D04u;
    // 0x325d08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325240u, 0x325D04u, 0x325D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D0Cu;
label_325d0c:
    // 0x325d0c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_325d10:
    // 0x325d10: 0x244280f0  addiu       $v0, $v0, -0x7F10
    ctx->pc = 0x325d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934768));
label_325d14:
    // 0x325d14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_325d18:
    // 0x325d18: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_325d1c:
    if (ctx->pc == 0x325D1Cu) {
        ctx->pc = 0x325D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D18u;
        // 0x325d1c: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D20u;
        goto label_325d20;
    }
    ctx->pc = 0x325D18u;
    {
        const bool branch_taken_0x325d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x325D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D18u;
        // 0x325d1c: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d18) {
            ctx->pc = 0x325D2Cu;
            goto label_325d2c;
        }
    }
    ctx->pc = 0x325D20u;
label_325d20:
    // 0x325d20: 0x24428144  addiu       $v0, $v0, -0x7EBC
    ctx->pc = 0x325d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934852));
label_325d24:
    // 0x325d24: 0xc0c9490  jal         func_325240
label_325d28:
    if (ctx->pc == 0x325D28u) {
        ctx->pc = 0x325D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D24u;
        // 0x325d28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D2Cu;
        goto label_325d2c;
    }
    ctx->pc = 0x325D24u;
    SET_GPR_U32(ctx, 31, 0x325D2Cu);
    ctx->pc = 0x325D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D24u;
    // 0x325d28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325240u, 0x325D24u, 0x325D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D2Cu;
label_325d2c:
    // 0x325d2c: 0xc0c9584  jal         func_325610
label_325d30:
    if (ctx->pc == 0x325D30u) {
        ctx->pc = 0x325D34u;
        goto label_325d34;
    }
    ctx->pc = 0x325D2Cu;
    SET_GPR_U32(ctx, 31, 0x325D34u);
    ctx->pc = 0x325610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325610u, 0x325D2Cu, 0x325D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D34u;
label_325d34:
    // 0x325d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x325d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325d38:
    // 0x325d38: 0x1490000a  bne         $a0, $s0, . + 4 + (0xA << 2)
label_325d3c:
    if (ctx->pc == 0x325D3Cu) {
        ctx->pc = 0x325D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D38u;
        // 0x325d3c: 0x3c03003d  lui         $v1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D40u;
        goto label_325d40;
    }
    ctx->pc = 0x325D38u;
    {
        const bool branch_taken_0x325d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x325D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D38u;
        // 0x325d3c: 0x3c03003d  lui         $v1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d38) {
            ctx->pc = 0x325D64u;
            goto label_325d64;
        }
    }
    ctx->pc = 0x325D40u;
label_325d40:
    // 0x325d40: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_325d44:
    // 0x325d44: 0x244280ec  addiu       $v0, $v0, -0x7F14
    ctx->pc = 0x325d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934764));
label_325d48:
    // 0x325d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_325d4c:
    // 0x325d4c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_325d50:
    if (ctx->pc == 0x325D50u) {
        ctx->pc = 0x325D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D4Cu;
        // 0x325d50: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D54u;
        goto label_325d54;
    }
    ctx->pc = 0x325D4Cu;
    {
        const bool branch_taken_0x325d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x325D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D4Cu;
        // 0x325d50: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d4c) {
            ctx->pc = 0x325D60u;
            goto label_325d60;
        }
    }
    ctx->pc = 0x325D54u;
label_325d54:
    // 0x325d54: 0x2442813c  addiu       $v0, $v0, -0x7EC4
    ctx->pc = 0x325d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934844));
label_325d58:
    // 0x325d58: 0xc0c9490  jal         func_325240
label_325d5c:
    if (ctx->pc == 0x325D5Cu) {
        ctx->pc = 0x325D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D58u;
        // 0x325d5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D60u;
        goto label_325d60;
    }
    ctx->pc = 0x325D58u;
    SET_GPR_U32(ctx, 31, 0x325D60u);
    ctx->pc = 0x325D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D58u;
    // 0x325d5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325240u, 0x325D58u, 0x325D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D60u;
label_325d60:
    // 0x325d60: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
label_325d64:
    // 0x325d64: 0x24638130  addiu       $v1, $v1, -0x7ED0
    ctx->pc = 0x325d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934832));
label_325d68:
    // 0x325d68: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x325d68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_325d6c:
    // 0x325d6c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x325d6cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_325d70:
    // 0x325d70: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x325d70u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_325d74:
    // 0x325d74: 0xc0cfdc8  jal         func_33F720
label_325d78:
    if (ctx->pc == 0x325D78u) {
        ctx->pc = 0x325D7Cu;
        goto label_325d7c;
    }
    ctx->pc = 0x325D74u;
    SET_GPR_U32(ctx, 31, 0x325D7Cu);
    ctx->pc = 0x33F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F720u, 0x325D74u, 0x325D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D7Cu;
label_325d7c:
    // 0x325d7c: 0x264381bc  addiu       $v1, $s2, -0x7E44
    ctx->pc = 0x325d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934972));
label_325d80:
    // 0x325d80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x325d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_325d84:
    // 0x325d84: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_325d88:
    // 0x325d88: 0x8c4281c0  lw          $v0, -0x7E40($v0)
    ctx->pc = 0x325d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934976)));
label_325d8c:
    // 0x325d8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_325d90:
    if (ctx->pc == 0x325D90u) {
        ctx->pc = 0x325D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D8Cu;
        // 0x325d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D94u;
        goto label_325d94;
    }
    ctx->pc = 0x325D8Cu;
    {
        const bool branch_taken_0x325d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325d8c) {
            ctx->pc = 0x325D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325D8Cu;
            // 0x325d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325DA8u;
            goto label_325da8;
        }
    }
    ctx->pc = 0x325D94u;
label_325d94:
    // 0x325d94: 0x40f809  jalr        $v0
label_325d98:
    if (ctx->pc == 0x325D98u) {
        ctx->pc = 0x325D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D94u;
        // 0x325d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325D9Cu;
        goto label_325d9c;
    }
    ctx->pc = 0x325D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x325D9Cu);
        ctx->pc = 0x325D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D94u;
        // 0x325d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325D94u, 0x325D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325D9Cu;
label_325d9c:
    // 0x325d9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_325da0:
    if (ctx->pc == 0x325DA0u) {
        ctx->pc = 0x325DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D9Cu;
        // 0x325da0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325DA4u;
        goto label_325da4;
    }
    ctx->pc = 0x325D9Cu;
    {
        const bool branch_taken_0x325d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D9Cu;
        // 0x325da0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d9c) {
            ctx->pc = 0x325DACu;
            goto label_325dac;
        }
    }
    ctx->pc = 0x325DA4u;
label_325da4:
    // 0x325da4: 0x0  nop
    ctx->pc = 0x325da4u;
    // NOP
label_325da8:
    // 0x325da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_325dac:
    // 0x325dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_325db0:
    // 0x325db0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_325db4:
    // 0x325db4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x325db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_325db8:
    // 0x325db8: 0x3e00008  jr          $ra
label_325dbc:
    if (ctx->pc == 0x325DBCu) {
        ctx->pc = 0x325DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DB8u;
        // 0x325dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325DC0u;
        goto label_fallthrough_0x325db8;
    }
    ctx->pc = 0x325DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DB8u;
        // 0x325dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x325db8:
    ctx->pc = 0x325DC0u;
}
