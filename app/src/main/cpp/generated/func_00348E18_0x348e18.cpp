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

// Function: func_00348E18
// Address: 0x348e18 - 0x348f68
void func_00348E18_0x348e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348E18_0x348e18");
#endif

    switch (ctx->pc) {
        case 0x348e18u: goto label_348e18;
        case 0x348e1cu: goto label_348e1c;
        case 0x348e20u: goto label_348e20;
        case 0x348e24u: goto label_348e24;
        case 0x348e28u: goto label_348e28;
        case 0x348e2cu: goto label_348e2c;
        case 0x348e30u: goto label_348e30;
        case 0x348e34u: goto label_348e34;
        case 0x348e38u: goto label_348e38;
        case 0x348e3cu: goto label_348e3c;
        case 0x348e40u: goto label_348e40;
        case 0x348e44u: goto label_348e44;
        case 0x348e48u: goto label_348e48;
        case 0x348e4cu: goto label_348e4c;
        case 0x348e50u: goto label_348e50;
        case 0x348e54u: goto label_348e54;
        case 0x348e58u: goto label_348e58;
        case 0x348e5cu: goto label_348e5c;
        case 0x348e60u: goto label_348e60;
        case 0x348e64u: goto label_348e64;
        case 0x348e68u: goto label_348e68;
        case 0x348e6cu: goto label_348e6c;
        case 0x348e70u: goto label_348e70;
        case 0x348e74u: goto label_348e74;
        case 0x348e78u: goto label_348e78;
        case 0x348e7cu: goto label_348e7c;
        case 0x348e80u: goto label_348e80;
        case 0x348e84u: goto label_348e84;
        case 0x348e88u: goto label_348e88;
        case 0x348e8cu: goto label_348e8c;
        case 0x348e90u: goto label_348e90;
        case 0x348e94u: goto label_348e94;
        case 0x348e98u: goto label_348e98;
        case 0x348e9cu: goto label_348e9c;
        case 0x348ea0u: goto label_348ea0;
        case 0x348ea4u: goto label_348ea4;
        case 0x348ea8u: goto label_348ea8;
        case 0x348eacu: goto label_348eac;
        case 0x348eb0u: goto label_348eb0;
        case 0x348eb4u: goto label_348eb4;
        case 0x348eb8u: goto label_348eb8;
        case 0x348ebcu: goto label_348ebc;
        case 0x348ec0u: goto label_348ec0;
        case 0x348ec4u: goto label_348ec4;
        case 0x348ec8u: goto label_348ec8;
        case 0x348eccu: goto label_348ecc;
        case 0x348ed0u: goto label_348ed0;
        case 0x348ed4u: goto label_348ed4;
        case 0x348ed8u: goto label_348ed8;
        case 0x348edcu: goto label_348edc;
        case 0x348ee0u: goto label_348ee0;
        case 0x348ee4u: goto label_348ee4;
        case 0x348ee8u: goto label_348ee8;
        case 0x348eecu: goto label_348eec;
        case 0x348ef0u: goto label_348ef0;
        case 0x348ef4u: goto label_348ef4;
        case 0x348ef8u: goto label_348ef8;
        case 0x348efcu: goto label_348efc;
        case 0x348f00u: goto label_348f00;
        case 0x348f04u: goto label_348f04;
        case 0x348f08u: goto label_348f08;
        case 0x348f0cu: goto label_348f0c;
        case 0x348f10u: goto label_348f10;
        case 0x348f14u: goto label_348f14;
        case 0x348f18u: goto label_348f18;
        case 0x348f1cu: goto label_348f1c;
        case 0x348f20u: goto label_348f20;
        case 0x348f24u: goto label_348f24;
        case 0x348f28u: goto label_348f28;
        case 0x348f2cu: goto label_348f2c;
        case 0x348f30u: goto label_348f30;
        case 0x348f34u: goto label_348f34;
        case 0x348f38u: goto label_348f38;
        case 0x348f3cu: goto label_348f3c;
        case 0x348f40u: goto label_348f40;
        case 0x348f44u: goto label_348f44;
        case 0x348f48u: goto label_348f48;
        case 0x348f4cu: goto label_348f4c;
        case 0x348f50u: goto label_348f50;
        case 0x348f54u: goto label_348f54;
        case 0x348f58u: goto label_348f58;
        case 0x348f5cu: goto label_348f5c;
        case 0x348f60u: goto label_348f60;
        case 0x348f64u: goto label_348f64;
        default: break;
    }

    ctx->pc = 0x348e18u;

label_348e18:
    // 0x348e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_348e1c:
    // 0x348e1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x348e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_348e20:
    // 0x348e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x348e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348e24:
    // 0x348e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348e28:
    // 0x348e28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x348e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_348e2c:
    // 0x348e2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x348e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_348e30:
    // 0x348e30: 0xc0d67a0  jal         func_359E80
label_348e34:
    if (ctx->pc == 0x348E34u) {
        ctx->pc = 0x348E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E30u;
        // 0x348e34: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E38u;
        goto label_348e38;
    }
    ctx->pc = 0x348E30u;
    SET_GPR_U32(ctx, 31, 0x348E38u);
    ctx->pc = 0x348E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E30u;
    // 0x348e34: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359E80u, 0x348E30u, 0x348E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E38u;
label_348e38:
    // 0x348e38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x348e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_348e3c:
    // 0x348e3c: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_348e40:
    if (ctx->pc == 0x348E40u) {
        ctx->pc = 0x348E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E3Cu;
        // 0x348e40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E44u;
        goto label_348e44;
    }
    ctx->pc = 0x348E3Cu;
    {
        const bool branch_taken_0x348e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x348E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E3Cu;
        // 0x348e40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e3c) {
            ctx->pc = 0x348F50u;
            goto label_348f50;
        }
    }
    ctx->pc = 0x348E44u;
label_348e44:
    // 0x348e44: 0x26300284  addiu       $s0, $s1, 0x284
    ctx->pc = 0x348e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
label_348e48:
    // 0x348e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348e4c:
    // 0x348e4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x348e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_348e50:
    // 0x348e50: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_348e54:
    if (ctx->pc == 0x348E54u) {
        ctx->pc = 0x348E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E50u;
        // 0x348e54: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E58u;
        goto label_348e58;
    }
    ctx->pc = 0x348E50u;
    {
        const bool branch_taken_0x348e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x348E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E50u;
        // 0x348e54: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e50) {
            ctx->pc = 0x348E88u;
            goto label_348e88;
        }
    }
    ctx->pc = 0x348E58u;
label_348e58:
    // 0x348e58: 0xc0d213c  jal         func_3484F0
label_348e5c:
    if (ctx->pc == 0x348E5Cu) {
        ctx->pc = 0x348E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E58u;
        // 0x348e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E60u;
        goto label_348e60;
    }
    ctx->pc = 0x348E58u;
    SET_GPR_U32(ctx, 31, 0x348E60u);
    ctx->pc = 0x348E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E58u;
    // 0x348e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3484F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3484F0u, 0x348E58u, 0x348E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E60u;
label_348e60:
    // 0x348e60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_348e64:
    // 0x348e64: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
label_348e68:
    if (ctx->pc == 0x348E68u) {
        ctx->pc = 0x348E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E64u;
        // 0x348e68: 0x263002a4  addiu       $s0, $s1, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E6Cu;
        goto label_348e6c;
    }
    ctx->pc = 0x348E64u;
    {
        const bool branch_taken_0x348e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x348e64) {
            ctx->pc = 0x348E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348E64u;
            // 0x348e68: 0x263002a4  addiu       $s0, $s1, 0x2A4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348E8Cu;
            goto label_348e8c;
        }
    }
    ctx->pc = 0x348E6Cu;
label_348e6c:
    // 0x348e6c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x348e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_348e70:
    // 0x348e70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x348e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348e74:
    // 0x348e74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x348e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_348e78:
    // 0x348e78: 0x40f809  jalr        $v0
label_348e7c:
    if (ctx->pc == 0x348E7Cu) {
        ctx->pc = 0x348E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E78u;
        // 0x348e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E80u;
        goto label_348e80;
    }
    ctx->pc = 0x348E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348E80u);
        ctx->pc = 0x348E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E78u;
        // 0x348e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348E78u, 0x348E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348E80u;
label_348e80:
    // 0x348e80: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_348e84:
    if (ctx->pc == 0x348E84u) {
        ctx->pc = 0x348E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E80u;
        // 0x348e84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E88u;
        goto label_348e88;
    }
    ctx->pc = 0x348E80u;
    {
        const bool branch_taken_0x348e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E80u;
        // 0x348e84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e80) {
            ctx->pc = 0x348F50u;
            goto label_348f50;
        }
    }
    ctx->pc = 0x348E88u;
label_348e88:
    // 0x348e88: 0x263002a4  addiu       $s0, $s1, 0x2A4
    ctx->pc = 0x348e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
label_348e8c:
    // 0x348e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348e90:
    // 0x348e90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x348e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_348e94:
    // 0x348e94: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_348e98:
    if (ctx->pc == 0x348E98u) {
        ctx->pc = 0x348E9Cu;
        goto label_348e9c;
    }
    ctx->pc = 0x348E94u;
    {
        const bool branch_taken_0x348e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x348e94) {
            ctx->pc = 0x348ECCu;
            goto label_348ecc;
        }
    }
    ctx->pc = 0x348E9Cu;
label_348e9c:
    // 0x348e9c: 0xc0d213c  jal         func_3484F0
label_348ea0:
    if (ctx->pc == 0x348EA0u) {
        ctx->pc = 0x348EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E9Cu;
        // 0x348ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348EA4u;
        goto label_348ea4;
    }
    ctx->pc = 0x348E9Cu;
    SET_GPR_U32(ctx, 31, 0x348EA4u);
    ctx->pc = 0x348EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E9Cu;
    // 0x348ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3484F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3484F0u, 0x348E9Cu, 0x348EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348EA4u;
label_348ea4:
    // 0x348ea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_348ea8:
    // 0x348ea8: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_348eac:
    if (ctx->pc == 0x348EACu) {
        ctx->pc = 0x348EB0u;
        goto label_348eb0;
    }
    ctx->pc = 0x348EA8u;
    {
        const bool branch_taken_0x348ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x348ea8) {
            ctx->pc = 0x348ECCu;
            goto label_348ecc;
        }
    }
    ctx->pc = 0x348EB0u;
label_348eb0:
    // 0x348eb0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x348eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_348eb4:
    // 0x348eb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x348eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348eb8:
    // 0x348eb8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x348eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_348ebc:
    // 0x348ebc: 0x40f809  jalr        $v0
label_348ec0:
    if (ctx->pc == 0x348EC0u) {
        ctx->pc = 0x348EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EBCu;
        // 0x348ec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348EC4u;
        goto label_348ec4;
    }
    ctx->pc = 0x348EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348EC4u);
        ctx->pc = 0x348EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EBCu;
        // 0x348ec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348EBCu, 0x348EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348EC4u;
label_348ec4:
    // 0x348ec4: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_348ec8:
    if (ctx->pc == 0x348EC8u) {
        ctx->pc = 0x348EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EC4u;
        // 0x348ec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348ECCu;
        goto label_348ecc;
    }
    ctx->pc = 0x348EC4u;
    {
        const bool branch_taken_0x348ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348ec4) {
            ctx->pc = 0x348EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348EC4u;
            // 0x348ec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F50u;
            goto label_348f50;
        }
    }
    ctx->pc = 0x348ECCu;
label_348ecc:
    // 0x348ecc: 0xc0d16ce  jal         func_345B38
label_348ed0:
    if (ctx->pc == 0x348ED0u) {
        ctx->pc = 0x348ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348ECCu;
        // 0x348ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348ED4u;
        goto label_348ed4;
    }
    ctx->pc = 0x348ECCu;
    SET_GPR_U32(ctx, 31, 0x348ED4u);
    ctx->pc = 0x348ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348ECCu;
    // 0x348ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345B38u, 0x348ECCu, 0x348ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348ED4u;
label_348ed4:
    // 0x348ed4: 0x82230072  lb          $v1, 0x72($s1)
    ctx->pc = 0x348ed4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_348ed8:
    // 0x348ed8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_348edc:
    if (ctx->pc == 0x348EDCu) {
        ctx->pc = 0x348EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348ED8u;
        // 0x348edc: 0x82230070  lb          $v1, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348EE0u;
        goto label_348ee0;
    }
    ctx->pc = 0x348ED8u;
    {
        const bool branch_taken_0x348ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x348ed8) {
            ctx->pc = 0x348EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348ED8u;
            // 0x348edc: 0x82230070  lb          $v1, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348EF0u;
            goto label_348ef0;
        }
    }
    ctx->pc = 0x348EE0u;
label_348ee0:
    // 0x348ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_348ee4:
    // 0x348ee4: 0xc0d17d2  jal         func_345F48
label_348ee8:
    if (ctx->pc == 0x348EE8u) {
        ctx->pc = 0x348EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EE4u;
        // 0x348ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348EECu;
        goto label_348eec;
    }
    ctx->pc = 0x348EE4u;
    SET_GPR_U32(ctx, 31, 0x348EECu);
    ctx->pc = 0x348EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EE4u;
    // 0x348ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345F48u, 0x348EE4u, 0x348EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348EECu;
label_348eec:
    // 0x348eec: 0x82230070  lb          $v1, 0x70($s1)
    ctx->pc = 0x348eecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_348ef0:
    // 0x348ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x348ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348ef4:
    // 0x348ef4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_348ef8:
    if (ctx->pc == 0x348EF8u) {
        ctx->pc = 0x348EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EF4u;
        // 0x348ef8: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348EFCu;
        goto label_348efc;
    }
    ctx->pc = 0x348EF4u;
    {
        const bool branch_taken_0x348ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x348ef4) {
            ctx->pc = 0x348EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348EF4u;
            // 0x348ef8: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F1Cu;
            goto label_348f1c;
        }
    }
    ctx->pc = 0x348EFCu;
label_348efc:
    // 0x348efc: 0xc0d333a  jal         func_34CCE8
label_348f00:
    if (ctx->pc == 0x348F00u) {
        ctx->pc = 0x348F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EFCu;
        // 0x348f00: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F04u;
        goto label_348f04;
    }
    ctx->pc = 0x348EFCu;
    SET_GPR_U32(ctx, 31, 0x348F04u);
    ctx->pc = 0x348F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EFCu;
    // 0x348f00: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCE8u, 0x348EFCu, 0x348F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F04u;
label_348f04:
    // 0x348f04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_348f08:
    if (ctx->pc == 0x348F08u) {
        ctx->pc = 0x348F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F04u;
        // 0x348f08: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F0Cu;
        goto label_348f0c;
    }
    ctx->pc = 0x348F04u;
    {
        const bool branch_taken_0x348f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348f04) {
            ctx->pc = 0x348F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F04u;
            // 0x348f08: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F1Cu;
            goto label_348f1c;
        }
    }
    ctx->pc = 0x348F0Cu;
label_348f0c:
    // 0x348f0c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x348f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_348f10:
    // 0x348f10: 0xc0d22f8  jal         func_348BE0
label_348f14:
    if (ctx->pc == 0x348F14u) {
        ctx->pc = 0x348F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F10u;
        // 0x348f14: 0x248492d0  addiu       $a0, $a0, -0x6D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F18u;
        goto label_348f18;
    }
    ctx->pc = 0x348F10u;
    SET_GPR_U32(ctx, 31, 0x348F18u);
    ctx->pc = 0x348F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F10u;
    // 0x348f14: 0x248492d0  addiu       $a0, $a0, -0x6D30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x348F10u, 0x348F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F18u;
label_348f18:
    // 0x348f18: 0x82220072  lb          $v0, 0x72($s1)
    ctx->pc = 0x348f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_348f1c:
    // 0x348f1c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_348f20:
    if (ctx->pc == 0x348F20u) {
        ctx->pc = 0x348F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F1Cu;
        // 0x348f20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F24u;
        goto label_348f24;
    }
    ctx->pc = 0x348F1Cu;
    {
        const bool branch_taken_0x348f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348f1c) {
            ctx->pc = 0x348F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F1Cu;
            // 0x348f20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F50u;
            goto label_348f50;
        }
    }
    ctx->pc = 0x348F24u;
label_348f24:
    // 0x348f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x348f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_348f28:
    // 0x348f28: 0xc0d2154  jal         func_348550
label_348f2c:
    if (ctx->pc == 0x348F2Cu) {
        ctx->pc = 0x348F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F28u;
        // 0x348f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F30u;
        goto label_348f30;
    }
    ctx->pc = 0x348F28u;
    SET_GPR_U32(ctx, 31, 0x348F30u);
    ctx->pc = 0x348F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F28u;
    // 0x348f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348550u, 0x348F28u, 0x348F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F30u;
label_348f30:
    // 0x348f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348f34:
    // 0x348f34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348f38:
    // 0x348f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348f3c:
    // 0x348f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348f40:
    // 0x348f40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x348f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348f44:
    // 0x348f44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x348f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_348f48:
    // 0x348f48: 0x80d2154  j           func_348550
label_348f4c:
    if (ctx->pc == 0x348F4Cu) {
        ctx->pc = 0x348F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F48u;
        // 0x348f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F50u;
        goto label_348f50;
    }
    ctx->pc = 0x348F48u;
    ctx->pc = 0x348F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F48u;
    // 0x348f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348550u, 0x348F48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348F50u;
label_348f50:
    // 0x348f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348f54:
    // 0x348f54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x348f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348f58:
    // 0x348f58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x348f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_348f5c:
    // 0x348f5c: 0x3e00008  jr          $ra
label_348f60:
    if (ctx->pc == 0x348F60u) {
        ctx->pc = 0x348F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F5Cu;
        // 0x348f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F64u;
        goto label_348f64;
    }
    ctx->pc = 0x348F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F5Cu;
        // 0x348f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F64u;
label_348f64:
    // 0x348f64: 0x0  nop
    ctx->pc = 0x348f64u;
    // NOP
    ctx->pc = 0x348f68u;
}
