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

// Function: func_00114E28
// Address: 0x114e28 - 0x115030
void func_00114E28_0x114e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00114E28_0x114e28");
#endif

    switch (ctx->pc) {
        case 0x114e28u: goto label_114e28;
        case 0x114e2cu: goto label_114e2c;
        case 0x114e30u: goto label_114e30;
        case 0x114e34u: goto label_114e34;
        case 0x114e38u: goto label_114e38;
        case 0x114e3cu: goto label_114e3c;
        case 0x114e40u: goto label_114e40;
        case 0x114e44u: goto label_114e44;
        case 0x114e48u: goto label_114e48;
        case 0x114e4cu: goto label_114e4c;
        case 0x114e50u: goto label_114e50;
        case 0x114e54u: goto label_114e54;
        case 0x114e58u: goto label_114e58;
        case 0x114e5cu: goto label_114e5c;
        case 0x114e60u: goto label_114e60;
        case 0x114e64u: goto label_114e64;
        case 0x114e68u: goto label_114e68;
        case 0x114e6cu: goto label_114e6c;
        case 0x114e70u: goto label_114e70;
        case 0x114e74u: goto label_114e74;
        case 0x114e78u: goto label_114e78;
        case 0x114e7cu: goto label_114e7c;
        case 0x114e80u: goto label_114e80;
        case 0x114e84u: goto label_114e84;
        case 0x114e88u: goto label_114e88;
        case 0x114e8cu: goto label_114e8c;
        case 0x114e90u: goto label_114e90;
        case 0x114e94u: goto label_114e94;
        case 0x114e98u: goto label_114e98;
        case 0x114e9cu: goto label_114e9c;
        case 0x114ea0u: goto label_114ea0;
        case 0x114ea4u: goto label_114ea4;
        case 0x114ea8u: goto label_114ea8;
        case 0x114eacu: goto label_114eac;
        case 0x114eb0u: goto label_114eb0;
        case 0x114eb4u: goto label_114eb4;
        case 0x114eb8u: goto label_114eb8;
        case 0x114ebcu: goto label_114ebc;
        case 0x114ec0u: goto label_114ec0;
        case 0x114ec4u: goto label_114ec4;
        case 0x114ec8u: goto label_114ec8;
        case 0x114eccu: goto label_114ecc;
        case 0x114ed0u: goto label_114ed0;
        case 0x114ed4u: goto label_114ed4;
        case 0x114ed8u: goto label_114ed8;
        case 0x114edcu: goto label_114edc;
        case 0x114ee0u: goto label_114ee0;
        case 0x114ee4u: goto label_114ee4;
        case 0x114ee8u: goto label_114ee8;
        case 0x114eecu: goto label_114eec;
        case 0x114ef0u: goto label_114ef0;
        case 0x114ef4u: goto label_114ef4;
        case 0x114ef8u: goto label_114ef8;
        case 0x114efcu: goto label_114efc;
        case 0x114f00u: goto label_114f00;
        case 0x114f04u: goto label_114f04;
        case 0x114f08u: goto label_114f08;
        case 0x114f0cu: goto label_114f0c;
        case 0x114f10u: goto label_114f10;
        case 0x114f14u: goto label_114f14;
        case 0x114f18u: goto label_114f18;
        case 0x114f1cu: goto label_114f1c;
        case 0x114f20u: goto label_114f20;
        case 0x114f24u: goto label_114f24;
        case 0x114f28u: goto label_114f28;
        case 0x114f2cu: goto label_114f2c;
        case 0x114f30u: goto label_114f30;
        case 0x114f34u: goto label_114f34;
        case 0x114f38u: goto label_114f38;
        case 0x114f3cu: goto label_114f3c;
        case 0x114f40u: goto label_114f40;
        case 0x114f44u: goto label_114f44;
        case 0x114f48u: goto label_114f48;
        case 0x114f4cu: goto label_114f4c;
        case 0x114f50u: goto label_114f50;
        case 0x114f54u: goto label_114f54;
        case 0x114f58u: goto label_114f58;
        case 0x114f5cu: goto label_114f5c;
        case 0x114f60u: goto label_114f60;
        case 0x114f64u: goto label_114f64;
        case 0x114f68u: goto label_114f68;
        case 0x114f6cu: goto label_114f6c;
        case 0x114f70u: goto label_114f70;
        case 0x114f74u: goto label_114f74;
        case 0x114f78u: goto label_114f78;
        case 0x114f7cu: goto label_114f7c;
        case 0x114f80u: goto label_114f80;
        case 0x114f84u: goto label_114f84;
        case 0x114f88u: goto label_114f88;
        case 0x114f8cu: goto label_114f8c;
        case 0x114f90u: goto label_114f90;
        case 0x114f94u: goto label_114f94;
        case 0x114f98u: goto label_114f98;
        case 0x114f9cu: goto label_114f9c;
        case 0x114fa0u: goto label_114fa0;
        case 0x114fa4u: goto label_114fa4;
        case 0x114fa8u: goto label_114fa8;
        case 0x114facu: goto label_114fac;
        case 0x114fb0u: goto label_114fb0;
        case 0x114fb4u: goto label_114fb4;
        case 0x114fb8u: goto label_114fb8;
        case 0x114fbcu: goto label_114fbc;
        case 0x114fc0u: goto label_114fc0;
        case 0x114fc4u: goto label_114fc4;
        case 0x114fc8u: goto label_114fc8;
        case 0x114fccu: goto label_114fcc;
        case 0x114fd0u: goto label_114fd0;
        case 0x114fd4u: goto label_114fd4;
        case 0x114fd8u: goto label_114fd8;
        case 0x114fdcu: goto label_114fdc;
        case 0x114fe0u: goto label_114fe0;
        case 0x114fe4u: goto label_114fe4;
        case 0x114fe8u: goto label_114fe8;
        case 0x114fecu: goto label_114fec;
        case 0x114ff0u: goto label_114ff0;
        case 0x114ff4u: goto label_114ff4;
        case 0x114ff8u: goto label_114ff8;
        case 0x114ffcu: goto label_114ffc;
        case 0x115000u: goto label_115000;
        case 0x115004u: goto label_115004;
        case 0x115008u: goto label_115008;
        case 0x11500cu: goto label_11500c;
        case 0x115010u: goto label_115010;
        case 0x115014u: goto label_115014;
        case 0x115018u: goto label_115018;
        case 0x11501cu: goto label_11501c;
        case 0x115020u: goto label_115020;
        case 0x115024u: goto label_115024;
        case 0x115028u: goto label_115028;
        case 0x11502cu: goto label_11502c;
        default: break;
    }

    ctx->pc = 0x114e28u;

label_114e28:
    // 0x114e28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_114e2c:
    // 0x114e2c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x114e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_114e30:
    // 0x114e30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x114e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_114e34:
    // 0x114e34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x114e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_114e38:
    // 0x114e38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x114e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_114e3c:
    // 0x114e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_114e40:
    // 0x114e40: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x114e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_114e44:
    // 0x114e44: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x114e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_114e48:
    // 0x114e48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_114e4c:
    if (ctx->pc == 0x114E4Cu) {
        ctx->pc = 0x114E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E48u;
        // 0x114e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E50u;
        goto label_114e50;
    }
    ctx->pc = 0x114E48u;
    {
        const bool branch_taken_0x114e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E48u;
        // 0x114e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e48) {
            ctx->pc = 0x114E60u;
            goto label_114e60;
        }
    }
    ctx->pc = 0x114E50u;
label_114e50:
    // 0x114e50: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_114e54:
    if (ctx->pc == 0x114E54u) {
        ctx->pc = 0x114E58u;
        goto label_114e58;
    }
    ctx->pc = 0x114E50u;
    {
        const bool branch_taken_0x114e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x114e50) {
            ctx->pc = 0x114EF8u;
            goto label_114ef8;
        }
    }
    ctx->pc = 0x114E58u;
label_114e58:
    // 0x114e58: 0x1000003d  b           . + 4 + (0x3D << 2)
label_114e5c:
    if (ctx->pc == 0x114E5Cu) {
        ctx->pc = 0x114E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E58u;
        // 0x114e5c: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E60u;
        goto label_114e60;
    }
    ctx->pc = 0x114E58u;
    {
        const bool branch_taken_0x114e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E58u;
        // 0x114e5c: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e58) {
            ctx->pc = 0x114F50u;
            goto label_114f50;
        }
    }
    ctx->pc = 0x114E60u;
label_114e60:
    // 0x114e60: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x114e60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
label_114e64:
    // 0x114e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114e68:
    // 0x114e68: 0xc049a3c  jal         func_1268F0
label_114e6c:
    if (ctx->pc == 0x114E6Cu) {
        ctx->pc = 0x114E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E68u;
        // 0x114e6c: 0xa64005e2  sh          $zero, 0x5E2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E70u;
        goto label_114e70;
    }
    ctx->pc = 0x114E68u;
    SET_GPR_U32(ctx, 31, 0x114E70u);
    ctx->pc = 0x114E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E68u;
    // 0x114e6c: 0xa64005e2  sh          $zero, 0x5E2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x114E68u, 0x114E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E70u;
label_114e70:
    // 0x114e70: 0xc049396  jal         func_124E58
label_114e74:
    if (ctx->pc == 0x114E74u) {
        ctx->pc = 0x114E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E70u;
        // 0x114e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E78u;
        goto label_114e78;
    }
    ctx->pc = 0x114E70u;
    SET_GPR_U32(ctx, 31, 0x114E78u);
    ctx->pc = 0x114E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E70u;
    // 0x114e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x114E70u, 0x114E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E78u;
label_114e78:
    // 0x114e78: 0xc0499dc  jal         func_126770
label_114e7c:
    if (ctx->pc == 0x114E7Cu) {
        ctx->pc = 0x114E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E78u;
        // 0x114e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E80u;
        goto label_114e80;
    }
    ctx->pc = 0x114E78u;
    SET_GPR_U32(ctx, 31, 0x114E80u);
    ctx->pc = 0x114E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E78u;
    // 0x114e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x114E78u, 0x114E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E80u;
label_114e80:
    // 0x114e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114e84:
    // 0x114e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e88:
    // 0x114e88: 0xc0493d8  jal         func_124F60
label_114e8c:
    if (ctx->pc == 0x114E8Cu) {
        ctx->pc = 0x114E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E88u;
        // 0x114e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E90u;
        goto label_114e90;
    }
    ctx->pc = 0x114E88u;
    SET_GPR_U32(ctx, 31, 0x114E90u);
    ctx->pc = 0x114E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E88u;
    // 0x114e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x114E88u, 0x114E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E90u;
label_114e90:
    // 0x114e90: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x114e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_114e94:
    // 0x114e94: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x114e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_114e98:
    // 0x114e98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x114e98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e9c:
    // 0x114e9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x114e9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114ea0:
    // 0x114ea0: 0x8c5103d8  lw          $s1, 0x3D8($v0)
    ctx->pc = 0x114ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 984)));
label_114ea4:
    // 0x114ea4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x114ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_114ea8:
    // 0x114ea8: 0x8c5003dc  lw          $s0, 0x3DC($v0)
    ctx->pc = 0x114ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 988)));
label_114eac:
    // 0x114eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114eb0:
    // 0x114eb0: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x114eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_114eb4:
    // 0x114eb4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x114eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114eb8:
    // 0x114eb8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x114eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_114ebc:
    // 0x114ebc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114ec0:
    // 0x114ec0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x114ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_114ec4:
    // 0x114ec4: 0xc0b2e92  jal         func_2CBA48
label_114ec8:
    if (ctx->pc == 0x114EC8u) {
        ctx->pc = 0x114EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EC4u;
        // 0x114ec8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114ECCu;
        goto label_114ecc;
    }
    ctx->pc = 0x114EC4u;
    SET_GPR_U32(ctx, 31, 0x114ECCu);
    ctx->pc = 0x114EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EC4u;
    // 0x114ec8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x114EC4u, 0x114ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114ECCu;
label_114ecc:
    // 0x114ecc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x114eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_114ed0:
    // 0x114ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x114ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114ed4:
    // 0x114ed4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x114ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114ed8:
    // 0x114ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114edc:
    // 0x114edc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x114edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_114ee0:
    // 0x114ee0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114ee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114ee4:
    // 0x114ee4: 0xc0aa15e  jal         func_2A8578
label_114ee8:
    if (ctx->pc == 0x114EE8u) {
        ctx->pc = 0x114EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EE4u;
        // 0x114ee8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EECu;
        goto label_114eec;
    }
    ctx->pc = 0x114EE4u;
    SET_GPR_U32(ctx, 31, 0x114EECu);
    ctx->pc = 0x114EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EE4u;
    // 0x114ee8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x114EE4u, 0x114EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EECu;
label_114eec:
    // 0x114eec: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x114eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_114ef0:
    // 0x114ef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114ef4:
    // 0x114ef4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x114ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_114ef8:
    // 0x114ef8: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x114ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_114efc:
    // 0x114efc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x114efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_114f00:
    // 0x114f00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x114f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_114f04:
    // 0x114f04: 0xc04939a  jal         func_124E68
label_114f08:
    if (ctx->pc == 0x114F08u) {
        ctx->pc = 0x114F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F04u;
        // 0x114f08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F0Cu;
        goto label_114f0c;
    }
    ctx->pc = 0x114F04u;
    SET_GPR_U32(ctx, 31, 0x114F0Cu);
    ctx->pc = 0x114F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F04u;
    // 0x114f08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x114F04u, 0x114F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F0Cu;
label_114f0c:
    // 0x114f0c: 0xc055f06  jal         func_157C18
label_114f10:
    if (ctx->pc == 0x114F10u) {
        ctx->pc = 0x114F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F0Cu;
        // 0x114f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F14u;
        goto label_114f14;
    }
    ctx->pc = 0x114F0Cu;
    SET_GPR_U32(ctx, 31, 0x114F14u);
    ctx->pc = 0x114F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F0Cu;
    // 0x114f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x114F0Cu, 0x114F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F14u;
label_114f14:
    // 0x114f14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_114f18:
    if (ctx->pc == 0x114F18u) {
        ctx->pc = 0x114F1Cu;
        goto label_114f1c;
    }
    ctx->pc = 0x114F14u;
    {
        const bool branch_taken_0x114f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114f14) {
            ctx->pc = 0x114F2Cu;
            goto label_114f2c;
        }
    }
    ctx->pc = 0x114F1Cu;
label_114f1c:
    // 0x114f1c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x114f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_114f20:
    // 0x114f20: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x114f20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_114f24:
    // 0x114f24: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x114f24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_114f28:
    // 0x114f28: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x114f28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_114f2c:
    // 0x114f2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_114f30:
    // 0x114f30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x114f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_114f34:
    // 0x114f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114f38:
    // 0x114f38: 0xc053e7c  jal         func_14F9F0
label_114f3c:
    if (ctx->pc == 0x114F3Cu) {
        ctx->pc = 0x114F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F38u;
        // 0x114f3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F40u;
        goto label_114f40;
    }
    ctx->pc = 0x114F38u;
    SET_GPR_U32(ctx, 31, 0x114F40u);
    ctx->pc = 0x114F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F38u;
    // 0x114f3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x114F38u, 0x114F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F40u;
label_114f40:
    // 0x114f40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114f40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_114f44:
    // 0x114f44: 0xc053e4a  jal         func_14F928
label_114f48:
    if (ctx->pc == 0x114F48u) {
        ctx->pc = 0x114F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F44u;
        // 0x114f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F4Cu;
        goto label_114f4c;
    }
    ctx->pc = 0x114F44u;
    SET_GPR_U32(ctx, 31, 0x114F4Cu);
    ctx->pc = 0x114F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F44u;
    // 0x114f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x114F44u, 0x114F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F4Cu;
label_114f4c:
    // 0x114f4c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x114f4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_114f50:
    // 0x114f50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_114f54:
    // 0x114f54: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_114f58:
    if (ctx->pc == 0x114F58u) {
        ctx->pc = 0x114F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F54u;
        // 0x114f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F5Cu;
        goto label_114f5c;
    }
    ctx->pc = 0x114F54u;
    {
        const bool branch_taken_0x114f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F54u;
        // 0x114f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f54) {
            ctx->pc = 0x115008u;
            goto label_115008;
        }
    }
    ctx->pc = 0x114F5Cu;
label_114f5c:
    // 0x114f5c: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x114f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_114f60:
    // 0x114f60: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_114f64:
    if (ctx->pc == 0x114F64u) {
        ctx->pc = 0x114F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F60u;
        // 0x114f64: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F68u;
        goto label_114f68;
    }
    ctx->pc = 0x114F60u;
    {
        const bool branch_taken_0x114f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F60u;
        // 0x114f64: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f60) {
            ctx->pc = 0x115008u;
            goto label_115008;
        }
    }
    ctx->pc = 0x114F68u;
label_114f68:
    // 0x114f68: 0xc0c3ea6  jal         func_30FA98
label_114f6c:
    if (ctx->pc == 0x114F6Cu) {
        ctx->pc = 0x114F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F68u;
        // 0x114f6c: 0x240403af  addiu       $a0, $zero, 0x3AF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F70u;
        goto label_114f70;
    }
    ctx->pc = 0x114F68u;
    SET_GPR_U32(ctx, 31, 0x114F70u);
    ctx->pc = 0x114F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F68u;
    // 0x114f6c: 0x240403af  addiu       $a0, $zero, 0x3AF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x114F68u, 0x114F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F70u;
label_114f70:
    // 0x114f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114f74:
    // 0x114f74: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_114f78:
    if (ctx->pc == 0x114F78u) {
        ctx->pc = 0x114F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F74u;
        // 0x114f78: 0xae450698  sw          $a1, 0x698($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F7Cu;
        goto label_114f7c;
    }
    ctx->pc = 0x114F74u;
    {
        const bool branch_taken_0x114f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F74u;
        // 0x114f78: 0xae450698  sw          $a1, 0x698($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f74) {
            ctx->pc = 0x115004u;
            goto label_115004;
        }
    }
    ctx->pc = 0x114F7Cu;
label_114f7c:
    // 0x114f7c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x114f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_114f80:
    // 0x114f80: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x114f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_114f84:
    // 0x114f84: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x114f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_114f88:
    // 0x114f88: 0x40f809  jalr        $v0
label_114f8c:
    if (ctx->pc == 0x114F8Cu) {
        ctx->pc = 0x114F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F88u;
        // 0x114f8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F90u;
        goto label_114f90;
    }
    ctx->pc = 0x114F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x114F90u);
        ctx->pc = 0x114F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F88u;
        // 0x114f8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114F88u, 0x114F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114F90u;
label_114f90:
    // 0x114f90: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x114f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_114f94:
    // 0x114f94: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x114f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_114f98:
    // 0x114f98: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x114f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_114f9c:
    // 0x114f9c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_114fa0:
    if (ctx->pc == 0x114FA0u) {
        ctx->pc = 0x114FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F9Cu;
        // 0x114fa0: 0x8e440698  lw          $a0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114FA4u;
        goto label_114fa4;
    }
    ctx->pc = 0x114F9Cu;
    {
        const bool branch_taken_0x114f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x114f9c) {
            ctx->pc = 0x114FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114F9Cu;
            // 0x114fa0: 0x8e440698  lw          $a0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114FC0u;
            goto label_114fc0;
        }
    }
    ctx->pc = 0x114FA4u;
label_114fa4:
    // 0x114fa4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x114fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114fa8:
    // 0x114fa8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x114fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_114fac:
    // 0x114fac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x114facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114fb0:
    // 0x114fb0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x114fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_114fb4:
    // 0x114fb4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x114fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114fb8:
    // 0x114fb8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x114fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_114fbc:
    // 0x114fbc: 0x8e440698  lw          $a0, 0x698($s2)
    ctx->pc = 0x114fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_114fc0:
    // 0x114fc0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x114fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_114fc4:
    // 0x114fc4: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x114fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_114fc8:
    // 0x114fc8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_114fcc:
    if (ctx->pc == 0x114FCCu) {
        ctx->pc = 0x114FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FC8u;
        // 0x114fcc: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114FD0u;
        goto label_114fd0;
    }
    ctx->pc = 0x114FC8u;
    {
        const bool branch_taken_0x114fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x114fc8) {
            ctx->pc = 0x114FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114FC8u;
            // 0x114fcc: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114FECu;
            goto label_114fec;
        }
    }
    ctx->pc = 0x114FD0u;
label_114fd0:
    // 0x114fd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x114fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114fd4:
    // 0x114fd4: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x114fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
label_114fd8:
    // 0x114fd8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x114fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114fdc:
    // 0x114fdc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x114fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_114fe0:
    // 0x114fe0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x114fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114fe4:
    // 0x114fe4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x114fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_114fe8:
    // 0x114fe8: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x114fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_114fec:
    // 0x114fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114ff0:
    // 0x114ff0: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x114ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_114ff4:
    // 0x114ff4: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x114ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_114ff8:
    // 0x114ff8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x114ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_114ffc:
    // 0x114ffc: 0xc04aa36  jal         func_12A8D8
label_115000:
    if (ctx->pc == 0x115000u) {
        ctx->pc = 0x115000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FFCu;
        // 0x115000: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115004u;
        goto label_115004;
    }
    ctx->pc = 0x114FFCu;
    SET_GPR_U32(ctx, 31, 0x115004u);
    ctx->pc = 0x115000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FFCu;
    // 0x115000: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A8D8u, 0x114FFCu, 0x115004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115004u;
label_115004:
    // 0x115004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_115008:
    // 0x115008: 0xc048e4e  jal         func_123938
label_11500c:
    if (ctx->pc == 0x11500Cu) {
        ctx->pc = 0x11500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115008u;
        // 0x11500c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115010u;
        goto label_115010;
    }
    ctx->pc = 0x115008u;
    SET_GPR_U32(ctx, 31, 0x115010u);
    ctx->pc = 0x11500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115008u;
    // 0x11500c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x115008u, 0x115010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115010u;
label_115010:
    // 0x115010: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x115010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_115014:
    // 0x115014: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x115014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_115018:
    // 0x115018: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x115018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11501c:
    // 0x11501c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11501cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_115020:
    // 0x115020: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x115020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_115024:
    // 0x115024: 0x3e00008  jr          $ra
label_115028:
    if (ctx->pc == 0x115028u) {
        ctx->pc = 0x115028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115024u;
        // 0x115028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11502Cu;
        goto label_11502c;
    }
    ctx->pc = 0x115024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115024u;
        // 0x115028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11502Cu;
label_11502c:
    // 0x11502c: 0x0  nop
    ctx->pc = 0x11502cu;
    // NOP
    ctx->pc = 0x115030u;
}
