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

// Function: __ls__7ostreamPCc
// Address: 0x388e30 - 0x388fb0
void ps2___ls__7ostreamPCc_0x388e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamPCc_0x388e30");
#endif

    switch (ctx->pc) {
        case 0x388e30u: goto label_388e30;
        case 0x388e34u: goto label_388e34;
        case 0x388e38u: goto label_388e38;
        case 0x388e3cu: goto label_388e3c;
        case 0x388e40u: goto label_388e40;
        case 0x388e44u: goto label_388e44;
        case 0x388e48u: goto label_388e48;
        case 0x388e4cu: goto label_388e4c;
        case 0x388e50u: goto label_388e50;
        case 0x388e54u: goto label_388e54;
        case 0x388e58u: goto label_388e58;
        case 0x388e5cu: goto label_388e5c;
        case 0x388e60u: goto label_388e60;
        case 0x388e64u: goto label_388e64;
        case 0x388e68u: goto label_388e68;
        case 0x388e6cu: goto label_388e6c;
        case 0x388e70u: goto label_388e70;
        case 0x388e74u: goto label_388e74;
        case 0x388e78u: goto label_388e78;
        case 0x388e7cu: goto label_388e7c;
        case 0x388e80u: goto label_388e80;
        case 0x388e84u: goto label_388e84;
        case 0x388e88u: goto label_388e88;
        case 0x388e8cu: goto label_388e8c;
        case 0x388e90u: goto label_388e90;
        case 0x388e94u: goto label_388e94;
        case 0x388e98u: goto label_388e98;
        case 0x388e9cu: goto label_388e9c;
        case 0x388ea0u: goto label_388ea0;
        case 0x388ea4u: goto label_388ea4;
        case 0x388ea8u: goto label_388ea8;
        case 0x388eacu: goto label_388eac;
        case 0x388eb0u: goto label_388eb0;
        case 0x388eb4u: goto label_388eb4;
        case 0x388eb8u: goto label_388eb8;
        case 0x388ebcu: goto label_388ebc;
        case 0x388ec0u: goto label_388ec0;
        case 0x388ec4u: goto label_388ec4;
        case 0x388ec8u: goto label_388ec8;
        case 0x388eccu: goto label_388ecc;
        case 0x388ed0u: goto label_388ed0;
        case 0x388ed4u: goto label_388ed4;
        case 0x388ed8u: goto label_388ed8;
        case 0x388edcu: goto label_388edc;
        case 0x388ee0u: goto label_388ee0;
        case 0x388ee4u: goto label_388ee4;
        case 0x388ee8u: goto label_388ee8;
        case 0x388eecu: goto label_388eec;
        case 0x388ef0u: goto label_388ef0;
        case 0x388ef4u: goto label_388ef4;
        case 0x388ef8u: goto label_388ef8;
        case 0x388efcu: goto label_388efc;
        case 0x388f00u: goto label_388f00;
        case 0x388f04u: goto label_388f04;
        case 0x388f08u: goto label_388f08;
        case 0x388f0cu: goto label_388f0c;
        case 0x388f10u: goto label_388f10;
        case 0x388f14u: goto label_388f14;
        case 0x388f18u: goto label_388f18;
        case 0x388f1cu: goto label_388f1c;
        case 0x388f20u: goto label_388f20;
        case 0x388f24u: goto label_388f24;
        case 0x388f28u: goto label_388f28;
        case 0x388f2cu: goto label_388f2c;
        case 0x388f30u: goto label_388f30;
        case 0x388f34u: goto label_388f34;
        case 0x388f38u: goto label_388f38;
        case 0x388f3cu: goto label_388f3c;
        case 0x388f40u: goto label_388f40;
        case 0x388f44u: goto label_388f44;
        case 0x388f48u: goto label_388f48;
        case 0x388f4cu: goto label_388f4c;
        case 0x388f50u: goto label_388f50;
        case 0x388f54u: goto label_388f54;
        case 0x388f58u: goto label_388f58;
        case 0x388f5cu: goto label_388f5c;
        case 0x388f60u: goto label_388f60;
        case 0x388f64u: goto label_388f64;
        case 0x388f68u: goto label_388f68;
        case 0x388f6cu: goto label_388f6c;
        case 0x388f70u: goto label_388f70;
        case 0x388f74u: goto label_388f74;
        case 0x388f78u: goto label_388f78;
        case 0x388f7cu: goto label_388f7c;
        case 0x388f80u: goto label_388f80;
        case 0x388f84u: goto label_388f84;
        case 0x388f88u: goto label_388f88;
        case 0x388f8cu: goto label_388f8c;
        case 0x388f90u: goto label_388f90;
        case 0x388f94u: goto label_388f94;
        case 0x388f98u: goto label_388f98;
        case 0x388f9cu: goto label_388f9c;
        case 0x388fa0u: goto label_388fa0;
        case 0x388fa4u: goto label_388fa4;
        case 0x388fa8u: goto label_388fa8;
        case 0x388facu: goto label_388fac;
        default: break;
    }

    ctx->pc = 0x388e30u;

label_388e30:
    // 0x388e30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x388e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_388e34:
    // 0x388e34: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x388e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_388e38:
    // 0x388e38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x388e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_388e3c:
    // 0x388e3c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x388e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_388e40:
    // 0x388e40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x388e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388e44:
    // 0x388e44: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x388e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_388e48:
    // 0x388e48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x388e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_388e4c:
    // 0x388e4c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x388e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_388e50:
    // 0x388e50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_388e54:
    // 0x388e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_388e58:
    // 0x388e58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x388e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_388e5c:
    // 0x388e5c: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x388e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_388e60:
    // 0x388e60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_388e64:
    if (ctx->pc == 0x388E64u) {
        ctx->pc = 0x388E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E60u;
        // 0x388e64: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E68u;
        goto label_388e68;
    }
    ctx->pc = 0x388E60u;
    {
        const bool branch_taken_0x388e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E60u;
        // 0x388e64: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e60) {
            ctx->pc = 0x388E70u;
            goto label_388e70;
        }
    }
    ctx->pc = 0x388E68u;
label_388e68:
    // 0x388e68: 0x10000007  b           . + 4 + (0x7 << 2)
label_388e6c:
    if (ctx->pc == 0x388E6Cu) {
        ctx->pc = 0x388E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E68u;
        // 0x388e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E70u;
        goto label_388e70;
    }
    ctx->pc = 0x388E68u;
    {
        const bool branch_taken_0x388e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E68u;
        // 0x388e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e68) {
            ctx->pc = 0x388E88u;
            goto label_388e88;
        }
    }
    ctx->pc = 0x388E70u;
label_388e70:
    // 0x388e70: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x388e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_388e74:
    // 0x388e74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_388e78:
    if (ctx->pc == 0x388E78u) {
        ctx->pc = 0x388E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E74u;
        // 0x388e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E7Cu;
        goto label_388e7c;
    }
    ctx->pc = 0x388E74u;
    {
        const bool branch_taken_0x388e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E74u;
        // 0x388e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e74) {
            ctx->pc = 0x388E88u;
            goto label_388e88;
        }
    }
    ctx->pc = 0x388E7Cu;
label_388e7c:
    // 0x388e7c: 0xc0e249a  jal         func_389268
label_388e80:
    if (ctx->pc == 0x388E80u) {
        ctx->pc = 0x388E84u;
        goto label_388e84;
    }
    ctx->pc = 0x388E7Cu;
    SET_GPR_U32(ctx, 31, 0x388E84u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388E7Cu, 0x388E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388E84u;
label_388e84:
    // 0x388e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388e88:
    // 0x388e88: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_388e8c:
    if (ctx->pc == 0x388E8Cu) {
        ctx->pc = 0x388E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E88u;
        // 0x388e8c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E90u;
        goto label_388e90;
    }
    ctx->pc = 0x388E88u;
    {
        const bool branch_taken_0x388e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E88u;
        // 0x388e8c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e88) {
            ctx->pc = 0x388F88u;
            goto label_388f88;
        }
    }
    ctx->pc = 0x388E90u;
label_388e90:
    // 0x388e90: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_388e94:
    if (ctx->pc == 0x388E94u) {
        ctx->pc = 0x388E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E90u;
        // 0x388e94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E98u;
        goto label_388e98;
    }
    ctx->pc = 0x388E90u;
    {
        const bool branch_taken_0x388e90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x388E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E90u;
        // 0x388e94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e90) {
            ctx->pc = 0x388EA4u;
            goto label_388ea4;
        }
    }
    ctx->pc = 0x388E98u;
label_388e98:
    // 0x388e98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x388e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_388e9c:
    // 0x388e9c: 0x2455d130  addiu       $s5, $v0, -0x2ED0
    ctx->pc = 0x388e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955312));
label_388ea0:
    // 0x388ea0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x388ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_388ea4:
    // 0x388ea4: 0xc0e9637  jal         func_3A58DC
label_388ea8:
    if (ctx->pc == 0x388EA8u) {
        ctx->pc = 0x388EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EA4u;
        // 0x388ea8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EACu;
        goto label_388eac;
    }
    ctx->pc = 0x388EA4u;
    SET_GPR_U32(ctx, 31, 0x388EACu);
    ctx->pc = 0x388EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388EA4u;
    // 0x388ea8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x388EA4u, 0x388EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388EACu;
label_388eac:
    // 0x388eac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x388eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_388eb0:
    // 0x388eb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x388eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388eb4:
    // 0x388eb4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x388eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_388eb8:
    // 0x388eb8: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x388eb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_388ebc:
    // 0x388ebc: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x388ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_388ec0:
    // 0x388ec0: 0x80760018  lb          $s6, 0x18($v1)
    ctx->pc = 0x388ec0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_388ec4:
    // 0x388ec4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x388ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_388ec8:
    // 0x388ec8: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x388ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388ecc:
    // 0x388ecc: 0xa2880b  movn        $s1, $a1, $v0
    ctx->pc = 0x388eccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_388ed0:
    // 0x388ed0: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x388ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_388ed4:
    // 0x388ed4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_388ed8:
    if (ctx->pc == 0x388ED8u) {
        ctx->pc = 0x388ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ED4u;
        // 0x388ed8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EDCu;
        goto label_388edc;
    }
    ctx->pc = 0x388ED4u;
    {
        const bool branch_taken_0x388ed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x388ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ED4u;
        // 0x388ed8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ed4) {
            ctx->pc = 0x388EFCu;
            goto label_388efc;
        }
    }
    ctx->pc = 0x388EDCu;
label_388edc:
    // 0x388edc: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
label_388ee0:
    if (ctx->pc == 0x388EE0u) {
        ctx->pc = 0x388EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EDCu;
        // 0x388ee0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EE4u;
        goto label_388ee4;
    }
    ctx->pc = 0x388EDCu;
    {
        const bool branch_taken_0x388edc = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x388EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EDCu;
        // 0x388ee0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388edc) {
            ctx->pc = 0x388EFCu;
            goto label_388efc;
        }
    }
    ctx->pc = 0x388EE4u;
label_388ee4:
    // 0x388ee4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388ee8:
    // 0x388ee8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x388ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_388eec:
    // 0x388eec: 0xc0e384e  jal         func_38E138
label_388ef0:
    if (ctx->pc == 0x388EF0u) {
        ctx->pc = 0x388EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EECu;
        // 0x388ef0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EF4u;
        goto label_388ef4;
    }
    ctx->pc = 0x388EECu;
    SET_GPR_U32(ctx, 31, 0x388EF4u);
    ctx->pc = 0x388EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388EECu;
    // 0x388ef0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x388EECu, 0x388EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388EF4u;
label_388ef4:
    // 0x388ef4: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
label_388ef8:
    if (ctx->pc == 0x388EF8u) {
        ctx->pc = 0x388EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EF4u;
        // 0x388ef8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EFCu;
        goto label_388efc;
    }
    ctx->pc = 0x388EF4u;
    {
        const bool branch_taken_0x388ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x388ef4) {
            ctx->pc = 0x388EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388EF4u;
            // 0x388ef8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388F1Cu;
            goto label_388f1c;
        }
    }
    ctx->pc = 0x388EFCu;
label_388efc:
    // 0x388efc: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x388efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_388f00:
    // 0x388f00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x388f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_388f04:
    // 0x388f04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388f08:
    // 0x388f08: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x388f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_388f0c:
    // 0x388f0c: 0x40f809  jalr        $v0
label_388f10:
    if (ctx->pc == 0x388F10u) {
        ctx->pc = 0x388F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F0Cu;
        // 0x388f10: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F14u;
        goto label_388f14;
    }
    ctx->pc = 0x388F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x388F14u);
        ctx->pc = 0x388F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F0Cu;
        // 0x388f10: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388F0Cu, 0x388F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388F14u;
label_388f14:
    // 0x388f14: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
label_388f18:
    if (ctx->pc == 0x388F18u) {
        ctx->pc = 0x388F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F14u;
        // 0x388f18: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F1Cu;
        goto label_388f1c;
    }
    ctx->pc = 0x388F14u;
    {
        const bool branch_taken_0x388f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x388F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F14u;
        // 0x388f18: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f14) {
            ctx->pc = 0x388F2Cu;
            goto label_388f2c;
        }
    }
    ctx->pc = 0x388F1Cu;
label_388f1c:
    // 0x388f1c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x388f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_388f20:
    // 0x388f20: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x388f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_388f24:
    // 0x388f24: 0x10000017  b           . + 4 + (0x17 << 2)
label_388f28:
    if (ctx->pc == 0x388F28u) {
        ctx->pc = 0x388F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F24u;
        // 0x388f28: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F2Cu;
        goto label_388f2c;
    }
    ctx->pc = 0x388F24u;
    {
        const bool branch_taken_0x388f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F24u;
        // 0x388f28: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f24) {
            ctx->pc = 0x388F84u;
            goto label_388f84;
        }
    }
    ctx->pc = 0x388F2Cu;
label_388f2c:
    // 0x388f2c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x388f2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_388f30:
    // 0x388f30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x388f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_388f34:
    // 0x388f34: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_388f38:
    if (ctx->pc == 0x388F38u) {
        ctx->pc = 0x388F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F34u;
        // 0x388f38: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F3Cu;
        goto label_388f3c;
    }
    ctx->pc = 0x388F34u;
    {
        const bool branch_taken_0x388f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x388f34) {
            ctx->pc = 0x388F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388F34u;
            // 0x388f38: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388F70u;
            goto label_388f70;
        }
    }
    ctx->pc = 0x388F3Cu;
label_388f3c:
    // 0x388f3c: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
label_388f40:
    if (ctx->pc == 0x388F40u) {
        ctx->pc = 0x388F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F3Cu;
        // 0x388f40: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F44u;
        goto label_388f44;
    }
    ctx->pc = 0x388F3Cu;
    {
        const bool branch_taken_0x388f3c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x388F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F3Cu;
        // 0x388f40: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f3c) {
            ctx->pc = 0x388F6Cu;
            goto label_388f6c;
        }
    }
    ctx->pc = 0x388F44u;
label_388f44:
    // 0x388f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388f48:
    // 0x388f48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x388f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_388f4c:
    // 0x388f4c: 0xc0e384e  jal         func_38E138
label_388f50:
    if (ctx->pc == 0x388F50u) {
        ctx->pc = 0x388F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F4Cu;
        // 0x388f50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F54u;
        goto label_388f54;
    }
    ctx->pc = 0x388F4Cu;
    SET_GPR_U32(ctx, 31, 0x388F54u);
    ctx->pc = 0x388F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F4Cu;
    // 0x388f50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x388F4Cu, 0x388F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F54u;
label_388f54:
    // 0x388f54: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_388f58:
    if (ctx->pc == 0x388F58u) {
        ctx->pc = 0x388F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F54u;
        // 0x388f58: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F5Cu;
        goto label_388f5c;
    }
    ctx->pc = 0x388F54u;
    {
        const bool branch_taken_0x388f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F54u;
        // 0x388f58: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f54) {
            ctx->pc = 0x388F6Cu;
            goto label_388f6c;
        }
    }
    ctx->pc = 0x388F5Cu;
label_388f5c:
    // 0x388f5c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x388f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_388f60:
    // 0x388f60: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x388f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_388f64:
    // 0x388f64: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x388f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_388f68:
    // 0x388f68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x388f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_388f6c:
    // 0x388f6c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x388f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_388f70:
    // 0x388f70: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x388f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_388f74:
    // 0x388f74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_388f78:
    if (ctx->pc == 0x388F78u) {
        ctx->pc = 0x388F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F74u;
        // 0x388f78: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F7Cu;
        goto label_388f7c;
    }
    ctx->pc = 0x388F74u;
    {
        const bool branch_taken_0x388f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F74u;
        // 0x388f78: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f74) {
            ctx->pc = 0x388F88u;
            goto label_388f88;
        }
    }
    ctx->pc = 0x388F7Cu;
label_388f7c:
    // 0x388f7c: 0xc0e2552  jal         func_389548
label_388f80:
    if (ctx->pc == 0x388F80u) {
        ctx->pc = 0x388F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F7Cu;
        // 0x388f80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F84u;
        goto label_388f84;
    }
    ctx->pc = 0x388F7Cu;
    SET_GPR_U32(ctx, 31, 0x388F84u);
    ctx->pc = 0x388F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F7Cu;
    // 0x388f80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389548u, 0x388F7Cu, 0x388F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F84u;
label_388f84:
    // 0x388f84: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x388f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388f88:
    // 0x388f88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x388f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_388f8c:
    // 0x388f8c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x388f8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_388f90:
    // 0x388f90: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x388f90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_388f94:
    // 0x388f94: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x388f94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_388f98:
    // 0x388f98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x388f98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_388f9c:
    // 0x388f9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x388f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_388fa0:
    // 0x388fa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x388fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_388fa4:
    // 0x388fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_388fa8:
    // 0x388fa8: 0x3e00008  jr          $ra
label_388fac:
    if (ctx->pc == 0x388FACu) {
        ctx->pc = 0x388FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FA8u;
        // 0x388fac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FB0u;
        goto label_fallthrough_0x388fa8;
    }
    ctx->pc = 0x388FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FA8u;
        // 0x388fac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x388fa8:
    ctx->pc = 0x388FB0u;
}
