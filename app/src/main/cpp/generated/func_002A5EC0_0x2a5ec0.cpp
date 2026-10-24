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

// Function: func_002A5EC0
// Address: 0x2a5ec0 - 0x2a6690
void func_002A5EC0_0x2a5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A5EC0_0x2a5ec0");
#endif

    switch (ctx->pc) {
        case 0x2a5f08u: goto label_2a5f08;
        case 0x2a5f18u: goto label_2a5f18;
        case 0x2a5f28u: goto label_2a5f28;
        case 0x2a5fc8u: goto label_2a5fc8;
        case 0x2a5fd0u: goto label_2a5fd0;
        case 0x2a5ff4u: goto label_2a5ff4;
        case 0x2a600cu: goto label_2a600c;
        case 0x2a6028u: goto label_2a6028;
        case 0x2a6044u: goto label_2a6044;
        case 0x2a6088u: goto label_2a6088;
        case 0x2a6094u: goto label_2a6094;
        case 0x2a60a0u: goto label_2a60a0;
        case 0x2a60f8u: goto label_2a60f8;
        case 0x2a6108u: goto label_2a6108;
        case 0x2a6118u: goto label_2a6118;
        case 0x2a6128u: goto label_2a6128;
        case 0x2a6138u: goto label_2a6138;
        case 0x2a6148u: goto label_2a6148;
        case 0x2a6158u: goto label_2a6158;
        case 0x2a6168u: goto label_2a6168;
        case 0x2a6174u: goto label_2a6174;
        case 0x2a618cu: goto label_2a618c;
        case 0x2a6198u: goto label_2a6198;
        case 0x2a61a4u: goto label_2a61a4;
        case 0x2a61b0u: goto label_2a61b0;
        case 0x2a61bcu: goto label_2a61bc;
        case 0x2a61c8u: goto label_2a61c8;
        case 0x2a61d0u: goto label_2a61d0;
        case 0x2a61dcu: goto label_2a61dc;
        case 0x2a61ecu: goto label_2a61ec;
        case 0x2a61f4u: goto label_2a61f4;
        case 0x2a620cu: goto label_2a620c;
        case 0x2a6218u: goto label_2a6218;
        case 0x2a6220u: goto label_2a6220;
        case 0x2a622cu: goto label_2a622c;
        case 0x2a623cu: goto label_2a623c;
        case 0x2a6248u: goto label_2a6248;
        case 0x2a6254u: goto label_2a6254;
        case 0x2a6260u: goto label_2a6260;
        case 0x2a626cu: goto label_2a626c;
        case 0x2a6274u: goto label_2a6274;
        case 0x2a6280u: goto label_2a6280;
        case 0x2a6288u: goto label_2a6288;
        case 0x2a6294u: goto label_2a6294;
        case 0x2a62a0u: goto label_2a62a0;
        case 0x2a62acu: goto label_2a62ac;
        case 0x2a62b4u: goto label_2a62b4;
        case 0x2a62bcu: goto label_2a62bc;
        case 0x2a62c8u: goto label_2a62c8;
        case 0x2a62d4u: goto label_2a62d4;
        case 0x2a62dcu: goto label_2a62dc;
        case 0x2a630cu: goto label_2a630c;
        case 0x2a632cu: goto label_2a632c;
        case 0x2a6338u: goto label_2a6338;
        case 0x2a6340u: goto label_2a6340;
        case 0x2a634cu: goto label_2a634c;
        case 0x2a6358u: goto label_2a6358;
        case 0x2a6364u: goto label_2a6364;
        case 0x2a6370u: goto label_2a6370;
        case 0x2a637cu: goto label_2a637c;
        case 0x2a6394u: goto label_2a6394;
        case 0x2a639cu: goto label_2a639c;
        case 0x2a63bcu: goto label_2a63bc;
        case 0x2a645cu: goto label_2a645c;
        case 0x2a6468u: goto label_2a6468;
        case 0x2a648cu: goto label_2a648c;
        case 0x2a64a0u: goto label_2a64a0;
        case 0x2a64acu: goto label_2a64ac;
        case 0x2a64c4u: goto label_2a64c4;
        case 0x2a64d8u: goto label_2a64d8;
        case 0x2a64e4u: goto label_2a64e4;
        case 0x2a64ecu: goto label_2a64ec;
        case 0x2a6514u: goto label_2a6514;
        case 0x2a6520u: goto label_2a6520;
        case 0x2a6568u: goto label_2a6568;
        case 0x2a6598u: goto label_2a6598;
        case 0x2a65a4u: goto label_2a65a4;
        case 0x2a65c4u: goto label_2a65c4;
        default: break;
    }

    ctx->pc = 0x2a5ec0u;

    // 0x2a5ec0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2a5ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2a5ec4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a5ec8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2a5ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2a5ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ed0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2a5ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2a5ed4: 0x24507a78  addiu       $s0, $v0, 0x7A78
    ctx->pc = 0x2a5ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31352));
    // 0x2a5ed8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a5ed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5edc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2a5edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2a5ee0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2a5ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2a5ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ee8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2a5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2a5eec: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2a5eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2a5ef0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2a5ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2a5ef4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2a5ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2a5ef8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2a5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x2a5efc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a5efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a5f00: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2A5F00u;
    SET_GPR_U32(ctx, 31, 0x2A5F08u);
    ctx->pc = 0x2A5F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F00u;
    // 0x2a5f04: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2A5F00u, 0x2A5F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F08u;
label_2a5f08:
    // 0x2a5f08: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2a5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a5f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f10: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2A5F10u;
    SET_GPR_U32(ctx, 31, 0x2A5F18u);
    ctx->pc = 0x2A5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F10u;
    // 0x2a5f14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2A5F10u, 0x2A5F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F18u;
label_2a5f18:
    // 0x2a5f18: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2a5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2a5f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f20: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2A5F20u;
    SET_GPR_U32(ctx, 31, 0x2A5F28u);
    ctx->pc = 0x2A5F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F20u;
    // 0x2a5f24: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2A5F20u, 0x2A5F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F28u;
label_2a5f28:
    // 0x2a5f28: 0x8e03ffbc  lw          $v1, -0x44($s0)
    ctx->pc = 0x2a5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967228)));
    // 0x2a5f2c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2a5f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2a5f30: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5F30u;
    {
        const bool branch_taken_0x2a5f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F30u;
        // 0x2a5f34: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f30) {
            ctx->pc = 0x2A5F58u;
            goto label_2a5f58;
        }
    }
    ctx->pc = 0x2A5F38u;
    // 0x2a5f38: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x2a5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x2a5f3c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2a5f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2a5f40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5F40u;
    {
        const bool branch_taken_0x2a5f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F40u;
        // 0x2a5f44: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f40) {
            ctx->pc = 0x2A5F54u;
            goto label_2a5f54;
        }
    }
    ctx->pc = 0x2A5F48u;
    // 0x2a5f48: 0x8c43d6e8  lw          $v1, -0x2918($v0)
    ctx->pc = 0x2a5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    // 0x2a5f4c: 0x24023101  addiu       $v0, $zero, 0x3101
    ctx->pc = 0x2a5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12545));
    // 0x2a5f50: 0xa462045e  sh          $v0, 0x45E($v1)
    ctx->pc = 0x2a5f50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1118), (uint16_t)GPR_U32(ctx, 2));
label_2a5f54:
    // 0x2a5f54: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2a5f58:
    // 0x2a5f58: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2a5f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x2a5f5c: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x2a5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31268)));
    // 0x2a5f60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a5f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5f68: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5F68u;
    {
        const bool branch_taken_0x2a5f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F68u;
        // 0x2a5f6c: 0x24457a24  addiu       $a1, $v0, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f68) {
            ctx->pc = 0x2A5F74u;
            goto label_2a5f74;
        }
    }
    ctx->pc = 0x2A5F70u;
    // 0x2a5f70: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2a5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_2a5f74:
    // 0x2a5f74: 0x94a3002c  lhu         $v1, 0x2C($a1)
    ctx->pc = 0x2a5f74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2a5f78: 0x26c4018c  addiu       $a0, $s6, 0x18C
    ctx->pc = 0x2a5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 396));
    // 0x2a5f7c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2a5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a5f80: 0x3c170057  lui         $s7, 0x57
    ctx->pc = 0x2a5f80u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)87 << 16));
    // 0x2a5f84: 0x3c1e0074  lui         $fp, 0x74
    ctx->pc = 0x2a5f84u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)116 << 16));
    // 0x2a5f88: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A5F88u;
    {
        const bool branch_taken_0x2a5f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F88u;
        // 0x2a5f8c: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f88) {
            ctx->pc = 0x2A6068u;
            goto label_2a6068;
        }
    }
    ctx->pc = 0x2A5F90u;
    // 0x2a5f90: 0x8e637a24  lw          $v1, 0x7A24($s3)
    ctx->pc = 0x2a5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
    // 0x2a5f94: 0x311fa  dsrl        $v0, $v1, 7
    ctx->pc = 0x2a5f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
    // 0x2a5f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a5f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a5f9c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2A5F9Cu;
    {
        const bool branch_taken_0x2a5f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F9Cu;
        // 0x2a5fa0: 0x8e627a24  lw          $v0, 0x7A24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f9c) {
            ctx->pc = 0x2A606Cu;
            goto label_2a606c;
        }
    }
    ctx->pc = 0x2A5FA4u;
    // 0x2a5fa4: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x2a5fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2a5fa8: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x2a5fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x2a5fac: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x2a5facu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
    // 0x2a5fb0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5FB0u;
    {
        const bool branch_taken_0x2a5fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FB0u;
        // 0x2a5fb4: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5fb0) {
            ctx->pc = 0x2A5FE0u;
            goto label_2a5fe0;
        }
    }
    ctx->pc = 0x2A5FB8u;
    // 0x2a5fb8: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2a5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2a5fbc: 0x24502c00  addiu       $s0, $v0, 0x2C00
    ctx->pc = 0x2a5fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x2a5fc0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x752C04u));
    // 0x2a5fc4: 0x0  nop
    ctx->pc = 0x2a5fc4u;
    // NOP
label_2a5fc8:
    // 0x2a5fc8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2A5FC8u;
    SET_GPR_U32(ctx, 31, 0x2A5FD0u);
    ctx->pc = 0x2A5FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5FC8u;
    // 0x2a5fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2A5FC8u, 0x2A5FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FD0u;
label_2a5fd0:
    // 0x2a5fd0: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x2a5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
    // 0x2a5fd4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2a5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2a5fd8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A5FD8u;
    {
        const bool branch_taken_0x2a5fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5fd8) {
            ctx->pc = 0x2A5FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5FD8u;
            // 0x2a5fdc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5fc8;
        }
    }
    ctx->pc = 0x2A5FE0u;
label_2a5fe0:
    // 0x2a5fe0: 0x8e462c38  lw          $a2, 0x2C38($s2)
    ctx->pc = 0x2a5fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11320)));
    // 0x2a5fe4: 0x26b00d20  addiu       $s0, $s5, 0xD20
    ctx->pc = 0x2a5fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3360));
    // 0x2a5fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5fec: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x2A5FECu;
    SET_GPR_U32(ctx, 31, 0x2A5FF4u);
    ctx->pc = 0x2A5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5FECu;
    // 0x2a5ff0: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x2A5FECu, 0x2A5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FF4u;
label_2a5ff4:
    // 0x2a5ff4: 0x26522c38  addiu       $s2, $s2, 0x2C38
    ctx->pc = 0x2a5ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11320));
    // 0x2a5ff8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2a5ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a5ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6000: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x2a6000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2a6004: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x2A6004u;
    SET_GPR_U32(ctx, 31, 0x2A600Cu);
    ctx->pc = 0x2A6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6004u;
    // 0x2a6008: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x2A6004u, 0x2A600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A600Cu;
label_2a600c:
    // 0x2a600c: 0x8e853cc4  lw          $a1, 0x3CC4($s4)
    ctx->pc = 0x2a600cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15556)));
    // 0x2a6010: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a6010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a6014: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a6014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a6018: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A6018u;
    {
        const bool branch_taken_0x2a6018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6018u;
        // 0x2a601c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6018) {
            ctx->pc = 0x2A605Cu;
            goto label_2a605c;
        }
    }
    ctx->pc = 0x2A6020u;
    // 0x2a6020: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x2a6020u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a6024: 0x0  nop
    ctx->pc = 0x2a6024u;
    // NOP
label_2a6028:
    // 0x2a6028: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a602c: 0x26a40d20  addiu       $a0, $s5, 0xD20
    ctx->pc = 0x2a602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3360));
    // 0x2a6030: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2a6030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a6034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a6034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a6038: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a603c: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x2A603Cu;
    SET_GPR_U32(ctx, 31, 0x2A6044u);
    ctx->pc = 0x2A6040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A603Cu;
    // 0x2a6040: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x2A603Cu, 0x2A6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6044u;
label_2a6044:
    // 0x2a6044: 0x8e843cc4  lw          $a0, 0x3CC4($s4)
    ctx->pc = 0x2a6044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15556)));
    // 0x2a6048: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2a6048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2a604c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2a604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a6050: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a6054: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A6054u;
    {
        const bool branch_taken_0x2a6054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2A6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6054u;
        // 0x2a6058: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6054) {
            ctx->pc = 0x2A6028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6028;
        }
    }
    ctx->pc = 0x2A605Cu;
label_2a605c:
    // 0x2a605c: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x2a605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
    // 0x2a6060: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2a6060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2a6064: 0xae627a24  sw          $v0, 0x7A24($s3)
    ctx->pc = 0x2a6064u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31268), GPR_U32(ctx, 2));
label_2a6068:
    // 0x2a6068: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x2a6068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
label_2a606c:
    // 0x2a606c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2a606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2a6070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a6070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a6074: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6074u;
    {
        const bool branch_taken_0x2a6074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6074u;
        // 0x2a6078: 0x26727a24  addiu       $s2, $s3, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6074) {
            ctx->pc = 0x2A6088u;
            goto label_2a6088;
        }
    }
    ctx->pc = 0x2A607Cu;
    // 0x2a607c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a6080: 0xc0ad96c  jal         func_2B65B0
    ctx->pc = 0x2A6080u;
    SET_GPR_U32(ctx, 31, 0x2A6088u);
    ctx->pc = 0x2A6084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6080u;
    // 0x2a6084: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x2A6080u, 0x2A6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6088u;
label_2a6088:
    // 0x2a6088: 0x26f09b70  addiu       $s0, $s7, -0x6490
    ctx->pc = 0x2a6088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    // 0x2a608c: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x2A608Cu;
    SET_GPR_U32(ctx, 31, 0x2A6094u);
    ctx->pc = 0x2A6090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A608Cu;
    // 0x2a6090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x2A608Cu, 0x2A6094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6094u;
label_2a6094:
    // 0x2a6094: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a6094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6098: 0xc07f030  jal         func_1FC0C0
    ctx->pc = 0x2A6098u;
    SET_GPR_U32(ctx, 31, 0x2A60A0u);
    ctx->pc = 0x2A609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6098u;
    // 0x2a609c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0C0u, 0x2A6098u, 0x2A60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A60A0u;
label_2a60a0:
    // 0x2a60a0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A60A0u;
    {
        const bool branch_taken_0x2a60a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60A0u;
        // 0x2a60a4: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60a0) {
            ctx->pc = 0x2A60D0u;
            goto label_2a60d0;
        }
    }
    ctx->pc = 0x2A60A8u;
    // 0x2a60a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2a60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a60ac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2a60acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2a60b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a60b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a60b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A60B4u;
    {
        const bool branch_taken_0x2a60b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60B4u;
        // 0x2a60b8: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60b4) {
            ctx->pc = 0x2A60D0u;
            goto label_2a60d0;
        }
    }
    ctx->pc = 0x2A60BCu;
    // 0x2a60bc: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x2a60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
    // 0x2a60c0: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2a60c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2a60c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a60c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a60c8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A60C8u;
    {
        const bool branch_taken_0x2a60c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60C8u;
        // 0x2a60cc: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60c8) {
            ctx->pc = 0x2A6174u;
            goto label_2a6174;
        }
    }
    ctx->pc = 0x2A60D0u;
label_2a60d0:
    // 0x2a60d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A60D0u;
    {
        const bool branch_taken_0x2a60d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60D0u;
        // 0x2a60d4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60d0) {
            ctx->pc = 0x2A60F0u;
            goto label_2a60f0;
        }
    }
    ctx->pc = 0x2A60D8u;
    // 0x2a60d8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2a60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a60dc: 0x2442ad90  addiu       $v0, $v0, -0x5270
    ctx->pc = 0x2a60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946192));
    // 0x2a60e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a60e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a60e8: 0x800008  jr          $a0
    ctx->pc = 0x2A60E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A60F0u: goto label_2a60f0;
            case 0x2A6100u: goto label_2a6100;
            case 0x2A6110u: goto label_2a6110;
            case 0x2A6120u: goto label_2a6120;
            case 0x2A6130u: goto label_2a6130;
            case 0x2A6140u: goto label_2a6140;
            case 0x2A6150u: goto label_2a6150;
            case 0x2A6160u: goto label_2a6160;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A60E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A60F0u;
label_2a60f0:
    // 0x2a60f0: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x2A60F0u;
    SET_GPR_U32(ctx, 31, 0x2A60F8u);
    ctx->pc = 0x2A60F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A60F0u;
    // 0x2a60f4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x2A60F0u, 0x2A60F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A60F8u;
label_2a60f8:
    // 0x2a60f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A60F8u;
    {
        const bool branch_taken_0x2a60f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60F8u;
        // 0x2a60fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60f8) {
            ctx->pc = 0x2A616Cu;
            goto label_2a616c;
        }
    }
    ctx->pc = 0x2A6100u;
label_2a6100:
    // 0x2a6100: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x2A6100u;
    SET_GPR_U32(ctx, 31, 0x2A6108u);
    ctx->pc = 0x2A6104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6100u;
    // 0x2a6104: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x2A6100u, 0x2A6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6108u;
label_2a6108:
    // 0x2a6108: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A6108u;
    {
        const bool branch_taken_0x2a6108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6108u;
        // 0x2a610c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6108) {
            ctx->pc = 0x2A616Cu;
            goto label_2a616c;
        }
    }
    ctx->pc = 0x2A6110u;
label_2a6110:
    // 0x2a6110: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x2A6110u;
    SET_GPR_U32(ctx, 31, 0x2A6118u);
    ctx->pc = 0x2A6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6110u;
    // 0x2a6114: 0x24040105  addiu       $a0, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x2A6110u, 0x2A6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6118u;
label_2a6118:
    // 0x2a6118: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A6118u;
    {
        const bool branch_taken_0x2a6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6118u;
        // 0x2a611c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6118) {
            ctx->pc = 0x2A616Cu;
            goto label_2a616c;
        }
    }
    ctx->pc = 0x2A6120u;
label_2a6120:
    // 0x2a6120: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x2A6120u;
    SET_GPR_U32(ctx, 31, 0x2A6128u);
    ctx->pc = 0x2A6124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6120u;
    // 0x2a6124: 0x2404010f  addiu       $a0, $zero, 0x10F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x2A6120u, 0x2A6128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6128u;
label_2a6128:
    // 0x2a6128: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A6128u;
    {
        const bool branch_taken_0x2a6128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6128u;
        // 0x2a612c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6128) {
            ctx->pc = 0x2A616Cu;
            goto label_2a616c;
        }
    }
    ctx->pc = 0x2A6130u;
label_2a6130:
    // 0x2a6130: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x2A6130u;
    SET_GPR_U32(ctx, 31, 0x2A6138u);
    ctx->pc = 0x2A6134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6130u;
    // 0x2a6134: 0x24040107  addiu       $a0, $zero, 0x107 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x2A6130u, 0x2A6138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6138u;
label_2a6138:
    // 0x2a6138: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A6138u;
    {
        const bool branch_taken_0x2a6138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6138u;
        // 0x2a613c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6138) {
            ctx->pc = 0x2A616Cu;
            goto label_2a616c;
        }
    }
    ctx->pc = 0x2A6140u;
label_2a6140:
    // 0x2a6140: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x2A6140u;
    SET_GPR_U32(ctx, 31, 0x2A6148u);
    ctx->pc = 0x2A6144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6140u;
    // 0x2a6144: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x2A6140u, 0x2A6148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6148u;
label_2a6148:
    // 0x2a6148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6148u;
    {
        const bool branch_taken_0x2a6148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6148u;
        // 0x2a614c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6148) {
            ctx->pc = 0x2A616Cu;
            goto label_2a616c;
        }
    }
    ctx->pc = 0x2A6150u;
label_2a6150:
    // 0x2a6150: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x2A6150u;
    SET_GPR_U32(ctx, 31, 0x2A6158u);
    ctx->pc = 0x2A6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6150u;
    // 0x2a6154: 0x2404010e  addiu       $a0, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x2A6150u, 0x2A6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6158u;
label_2a6158:
    // 0x2a6158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6158u;
    {
        const bool branch_taken_0x2a6158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6158u;
        // 0x2a615c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6158) {
            ctx->pc = 0x2A616Cu;
            goto label_2a616c;
        }
    }
    ctx->pc = 0x2A6160u;
label_2a6160:
    // 0x2a6160: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x2A6160u;
    SET_GPR_U32(ctx, 31, 0x2A6168u);
    ctx->pc = 0x2A6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6160u;
    // 0x2a6164: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x2A6160u, 0x2A6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6168u;
label_2a6168:
    // 0x2a6168: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a6168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a616c:
    // 0x2a616c: 0xc07f040  jal         func_1FC100
    ctx->pc = 0x2A616Cu;
    SET_GPR_U32(ctx, 31, 0x2A6174u);
    ctx->pc = 0x2A6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A616Cu;
    // 0x2a6170: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC100u, 0x2A616Cu, 0x2A6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6174u;
label_2a6174:
    // 0x2a6174: 0x27c274a0  addiu       $v0, $fp, 0x74A0
    ctx->pc = 0x2a6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 29856));
    // 0x2a6178: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2a6178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2a617c: 0x24a4a990  addiu       $a0, $a1, -0x5670
    ctx->pc = 0x2a617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945168));
    // 0x2a6180: 0xac4005f8  sw          $zero, 0x5F8($v0)
    ctx->pc = 0x2a6180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1528), GPR_U32(ctx, 0));
    // 0x2a6184: 0xc0b66f2  jal         func_2D9BC8
    ctx->pc = 0x2A6184u;
    SET_GPR_U32(ctx, 31, 0x2A618Cu);
    ctx->pc = 0x2A6188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6184u;
    // 0x2a6188: 0xac4005f4  sw          $zero, 0x5F4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BC8u, 0x2A6184u, 0x2A618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A618Cu;
label_2a618c:
    // 0x2a618c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a618cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a6190: 0xc0b0cbc  jal         func_2C32F0
    ctx->pc = 0x2A6190u;
    SET_GPR_U32(ctx, 31, 0x2A6198u);
    ctx->pc = 0x2A6194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6190u;
    // 0x2a6194: 0x8cc42f84  lw          $a0, 0x2F84($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C32F0u, 0x2A6190u, 0x2A6198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6198u;
label_2a6198:
    // 0x2a6198: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x2a6198u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x2a619c: 0xc04e084  jal         func_138210
    ctx->pc = 0x2A619Cu;
    SET_GPR_U32(ctx, 31, 0x2A61A4u);
    ctx->pc = 0x2A61A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A619Cu;
    // 0x2a61a0: 0x8ce4aff0  lw          $a0, -0x5010($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138210u, 0x2A619Cu, 0x2A61A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61A4u;
label_2a61a4:
    // 0x2a61a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a61a8: 0xc0b2a32  jal         func_2CA8C8
    ctx->pc = 0x2A61A8u;
    SET_GPR_U32(ctx, 31, 0x2A61B0u);
    ctx->pc = 0x2A61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61A8u;
    // 0x2a61ac: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8C8u, 0x2A61A8u, 0x2A61B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61B0u;
label_2a61b0:
    // 0x2a61b0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a61b4: 0xc0afc54  jal         func_2BF150
    ctx->pc = 0x2A61B4u;
    SET_GPR_U32(ctx, 31, 0x2A61BCu);
    ctx->pc = 0x2A61B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61B4u;
    // 0x2a61b8: 0x8c642648  lw          $a0, 0x2648($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF150u, 0x2A61B4u, 0x2A61BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61BCu;
label_2a61bc:
    // 0x2a61bc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2a61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2a61c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A61C0u;
    {
        const bool branch_taken_0x2a61c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61C0u;
        // 0x2a61c4: 0x24502c00  addiu       $s0, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a61c0) {
            ctx->pc = 0x2A61D0u;
            goto label_2a61d0;
        }
    }
    ctx->pc = 0x2A61C8u;
label_2a61c8:
    // 0x2a61c8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2A61C8u;
    SET_GPR_U32(ctx, 31, 0x2A61D0u);
    ctx->pc = 0x2A61CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61C8u;
    // 0x2a61cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2A61C8u, 0x2A61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61D0u;
label_2a61d0:
    // 0x2a61d0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x2a61d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x2a61d4: 0xc0ad392  jal         func_2B4E48
    ctx->pc = 0x2A61D4u;
    SET_GPR_U32(ctx, 31, 0x2A61DCu);
    ctx->pc = 0x2A61D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61D4u;
    // 0x2a61d8: 0x24a479d0  addiu       $a0, $a1, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E48u, 0x2A61D4u, 0x2A61DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61DCu;
label_2a61dc:
    // 0x2a61dc: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A61DCu;
    {
        const bool branch_taken_0x2a61dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a61dc) {
            ctx->pc = 0x2A61E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A61DCu;
            // 0x2a61e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A61C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a61c8;
        }
    }
    ctx->pc = 0x2A61E4u;
    // 0x2a61e4: 0xc0bea88  jal         func_2FAA20
    ctx->pc = 0x2A61E4u;
    SET_GPR_U32(ctx, 31, 0x2A61ECu);
    ctx->pc = 0x2A61E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61E4u;
    // 0x2a61e8: 0x27d274a0  addiu       $s2, $fp, 0x74A0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 29856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAA20u, 0x2A61E4u, 0x2A61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61ECu;
label_2a61ec:
    // 0x2a61ec: 0xc0c00fc  jal         func_3003F0
    ctx->pc = 0x2A61ECu;
    SET_GPR_U32(ctx, 31, 0x2A61F4u);
    ctx->pc = 0x3003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3003F0u, 0x2A61ECu, 0x2A61F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61F4u;
label_2a61f4:
    // 0x2a61f4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x2a61f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x2a61f8: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2a61f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x2a61fc: 0x24f064a0  addiu       $s0, $a3, 0x64A0
    ctx->pc = 0x2a61fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 25760));
    // 0x2a6200: 0x24d16c00  addiu       $s1, $a2, 0x6C00
    ctx->pc = 0x2a6200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
    // 0x2a6204: 0xc0a9b1e  jal         func_2A6C78
    ctx->pc = 0x2A6204u;
    SET_GPR_U32(ctx, 31, 0x2A620Cu);
    ctx->pc = 0x2A6208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6204u;
    // 0x2a6208: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C78u, 0x2A6204u, 0x2A620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A620Cu;
label_2a620c:
    // 0x2a620c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2a620cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2a6210: 0xc0aa53c  jal         func_2A94F0
    ctx->pc = 0x2A6210u;
    SET_GPR_U32(ctx, 31, 0x2A6218u);
    ctx->pc = 0x2A6214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6210u;
    // 0x2a6214: 0x24444220  addiu       $a0, $v0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A94F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A94F0u, 0x2A6210u, 0x2A6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6218u;
label_2a6218:
    // 0x2a6218: 0xc0c7312  jal         func_31CC48
    ctx->pc = 0x2A6218u;
    SET_GPR_U32(ctx, 31, 0x2A6220u);
    ctx->pc = 0x31CC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CC48u, 0x2A6218u, 0x2A6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6220u;
label_2a6220:
    // 0x2a6220: 0x964505b0  lhu         $a1, 0x5B0($s2)
    ctx->pc = 0x2a6220u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1456)));
    // 0x2a6224: 0xc0a9760  jal         func_2A5D80
    ctx->pc = 0x2A6224u;
    SET_GPR_U32(ctx, 31, 0x2A622Cu);
    ctx->pc = 0x2A6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6224u;
    // 0x2a6228: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5D80u, 0x2A6224u, 0x2A622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A622Cu;
label_2a622c:
    // 0x2a622c: 0x964505b0  lhu         $a1, 0x5B0($s2)
    ctx->pc = 0x2a622cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1456)));
    // 0x2a6230: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x2a6230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x2a6234: 0xc0af9c2  jal         func_2BE708
    ctx->pc = 0x2A6234u;
    SET_GPR_U32(ctx, 31, 0x2A623Cu);
    ctx->pc = 0x2A6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6234u;
    // 0x2a6238: 0x24648640  addiu       $a0, $v1, -0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE708u, 0x2A6234u, 0x2A623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A623Cu;
label_2a623c:
    // 0x2a623c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a623cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a6240: 0xc0b0cf6  jal         func_2C33D8
    ctx->pc = 0x2A6240u;
    SET_GPR_U32(ctx, 31, 0x2A6248u);
    ctx->pc = 0x2A6244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6240u;
    // 0x2a6244: 0x8ca42f84  lw          $a0, 0x2F84($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C33D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C33D8u, 0x2A6240u, 0x2A6248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6248u;
label_2a6248:
    // 0x2a6248: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a6248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2a624c: 0xc0b2afa  jal         func_2CABE8
    ctx->pc = 0x2A624Cu;
    SET_GPR_U32(ctx, 31, 0x2A6254u);
    ctx->pc = 0x2A6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A624Cu;
    // 0x2a6250: 0x24c4ee00  addiu       $a0, $a2, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABE8u, 0x2A624Cu, 0x2A6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6254u;
label_2a6254:
    // 0x2a6254: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x2a6254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x2a6258: 0xc0ae2d4  jal         func_2B8B50
    ctx->pc = 0x2A6258u;
    SET_GPR_U32(ctx, 31, 0x2A6260u);
    ctx->pc = 0x2A625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6258u;
    // 0x2a625c: 0x24e48040  addiu       $a0, $a3, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8B50u, 0x2A6258u, 0x2A6260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6260u;
label_2a6260:
    // 0x2a6260: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a6260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a6264: 0xc0c169a  jal         func_305A68
    ctx->pc = 0x2A6264u;
    SET_GPR_U32(ctx, 31, 0x2A626Cu);
    ctx->pc = 0x2A6268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6264u;
    // 0x2a6268: 0x244419a0  addiu       $a0, $v0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305A68u, 0x2A6264u, 0x2A626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A626Cu;
label_2a626c:
    // 0x2a626c: 0xc0a64e8  jal         func_2993A0
    ctx->pc = 0x2A626Cu;
    SET_GPR_U32(ctx, 31, 0x2A6274u);
    ctx->pc = 0x2A6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A626Cu;
    // 0x2a6270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2993A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2993A0u, 0x2A626Cu, 0x2A6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6274u;
label_2a6274:
    // 0x2a6274: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a6274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a6278: 0xc0b5bd0  jal         func_2D6F40
    ctx->pc = 0x2A6278u;
    SET_GPR_U32(ctx, 31, 0x2A6280u);
    ctx->pc = 0x2A627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6278u;
    // 0x2a627c: 0x24644700  addiu       $a0, $v1, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F40u, 0x2A6278u, 0x2A6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6280u;
label_2a6280:
    // 0x2a6280: 0xc054268  jal         func_1509A0
    ctx->pc = 0x2A6280u;
    SET_GPR_U32(ctx, 31, 0x2A6288u);
    ctx->pc = 0x2A6284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6280u;
    // 0x2a6284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1509A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509A0u, 0x2A6280u, 0x2A6288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6288u;
label_2a6288:
    // 0x2a6288: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a6288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a628c: 0xc050378  jal         func_140DE0
    ctx->pc = 0x2A628Cu;
    SET_GPR_U32(ctx, 31, 0x2A6294u);
    ctx->pc = 0x2A6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A628Cu;
    // 0x2a6290: 0x8ca4d6e8  lw          $a0, -0x2918($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140DE0u, 0x2A628Cu, 0x2A6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6294u;
label_2a6294:
    // 0x2a6294: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x2a6294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x2a6298: 0xc07f7e2  jal         func_1FDF88
    ctx->pc = 0x2A6298u;
    SET_GPR_U32(ctx, 31, 0x2A62A0u);
    ctx->pc = 0x2A629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6298u;
    // 0x2a629c: 0x24c44380  addiu       $a0, $a2, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF88u, 0x2A6298u, 0x2A62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62A0u;
label_2a62a0:
    // 0x2a62a0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x2a62a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x2a62a4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A62A4u;
    SET_GPR_U32(ctx, 31, 0x2A62ACu);
    ctx->pc = 0x2A62A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62A4u;
    // 0x2a62a8: 0x24e42fc0  addiu       $a0, $a3, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134690u, 0x2A62A4u, 0x2A62ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62ACu;
label_2a62ac:
    // 0x2a62ac: 0xc0a9c6c  jal         func_2A71B0
    ctx->pc = 0x2A62ACu;
    SET_GPR_U32(ctx, 31, 0x2A62B4u);
    ctx->pc = 0x2A71B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71B0u, 0x2A62ACu, 0x2A62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62B4u;
label_2a62b4:
    // 0x2a62b4: 0xc0c746c  jal         func_31D1B0
    ctx->pc = 0x2A62B4u;
    SET_GPR_U32(ctx, 31, 0x2A62BCu);
    ctx->pc = 0x31D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D1B0u, 0x2A62B4u, 0x2A62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62BCu;
label_2a62bc:
    // 0x2a62bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2a62c0: 0xc04b99c  jal         func_12E670
    ctx->pc = 0x2A62C0u;
    SET_GPR_U32(ctx, 31, 0x2A62C8u);
    ctx->pc = 0x2A62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62C0u;
    // 0x2a62c4: 0x2444ae50  addiu       $a0, $v0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E670u, 0x2A62C0u, 0x2A62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62C8u;
label_2a62c8:
    // 0x2a62c8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2a62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2a62cc: 0xc0c1e98  jal         func_307A60
    ctx->pc = 0x2A62CCu;
    SET_GPR_U32(ctx, 31, 0x2A62D4u);
    ctx->pc = 0x2A62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62CCu;
    // 0x2a62d0: 0x24647b20  addiu       $a0, $v1, 0x7B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307A60u, 0x2A62CCu, 0x2A62D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62D4u;
label_2a62d4:
    // 0x2a62d4: 0xc0c7138  jal         func_31C4E0
    ctx->pc = 0x2A62D4u;
    SET_GPR_U32(ctx, 31, 0x2A62DCu);
    ctx->pc = 0x31C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C4E0u, 0x2A62D4u, 0x2A62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62DCu;
label_2a62dc:
    // 0x2a62dc: 0x8e450598  lw          $a1, 0x598($s2)
    ctx->pc = 0x2a62dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1432)));
    // 0x2a62e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a62e4: 0x8e4305e4  lw          $v1, 0x5E4($s2)
    ctx->pc = 0x2a62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x2a62e8: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2a62e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2a62ec: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x2a62ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x2a62f0: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x2a62f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2a62f4: 0x8ce4264c  lw          $a0, 0x264C($a3)
    ctx->pc = 0x2a62f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x2a62f8: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2a62f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2a62fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a62fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a6300: 0xae450598  sw          $a1, 0x598($s2)
    ctx->pc = 0x2a6300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1432), GPR_U32(ctx, 5));
    // 0x2a6304: 0xc0afe3e  jal         func_2BF8F8
    ctx->pc = 0x2A6304u;
    SET_GPR_U32(ctx, 31, 0x2A630Cu);
    ctx->pc = 0x2A6308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6304u;
    // 0x2a6308: 0xae4305e4  sw          $v1, 0x5E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1508), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF8F8u, 0x2A6304u, 0x2A630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A630Cu;
label_2a630c:
    // 0x2a630c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2a630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a6310: 0x8e430550  lw          $v1, 0x550($s2)
    ctx->pc = 0x2a6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x2a6314: 0xa64205d4  sh          $v0, 0x5D4($s2)
    ctx->pc = 0x2a6314u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6318: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a631c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a631cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6320: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2a6320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a6324: 0xc054304  jal         func_150C10
    ctx->pc = 0x2A6324u;
    SET_GPR_U32(ctx, 31, 0x2A632Cu);
    ctx->pc = 0x2A6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6324u;
    // 0x2a6328: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C10u, 0x2A6324u, 0x2A632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A632Cu;
label_2a632c:
    // 0x2a632c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a6330: 0xc057fb8  jal         func_15FEE0
    ctx->pc = 0x2A6330u;
    SET_GPR_U32(ctx, 31, 0x2A6338u);
    ctx->pc = 0x2A6334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6330u;
    // 0x2a6334: 0x8c44d930  lw          $a0, -0x26D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FEE0u, 0x2A6330u, 0x2A6338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6338u;
label_2a6338:
    // 0x2a6338: 0xc0a6618  jal         func_299860
    ctx->pc = 0x2A6338u;
    SET_GPR_U32(ctx, 31, 0x2A6340u);
    ctx->pc = 0x2A633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6338u;
    // 0x2a633c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299860u, 0x2A6338u, 0x2A6340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6340u;
label_2a6340:
    // 0x2a6340: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a6340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a6344: 0xc0a930e  jal         func_2A4C38
    ctx->pc = 0x2A6344u;
    SET_GPR_U32(ctx, 31, 0x2A634Cu);
    ctx->pc = 0x2A6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6344u;
    // 0x2a6348: 0x8c642380  lw          $a0, 0x2380($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4C38u, 0x2A6344u, 0x2A634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A634Cu;
label_2a634c:
    // 0x2a634c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a634cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a6350: 0xc0aba86  jal         func_2AEA18
    ctx->pc = 0x2A6350u;
    SET_GPR_U32(ctx, 31, 0x2A6358u);
    ctx->pc = 0x2A6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6350u;
    // 0x2a6354: 0x8ca423a4  lw          $a0, 0x23A4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEA18u, 0x2A6350u, 0x2A6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6358u;
label_2a6358:
    // 0x2a6358: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a6358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2a635c: 0xc0b03e4  jal         func_2C0F90
    ctx->pc = 0x2A635Cu;
    SET_GPR_U32(ctx, 31, 0x2A6364u);
    ctx->pc = 0x2A6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A635Cu;
    // 0x2a6360: 0x24c4ea60  addiu       $a0, $a2, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0F90u, 0x2A635Cu, 0x2A6364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6364u;
label_2a6364:
    // 0x2a6364: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x2a6364u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x2a6368: 0xc07dcb0  jal         func_1F72C0
    ctx->pc = 0x2A6368u;
    SET_GPR_U32(ctx, 31, 0x2A6370u);
    ctx->pc = 0x2A636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6368u;
    // 0x2a636c: 0x24e48288  addiu       $a0, $a3, -0x7D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F72C0u, 0x2A6368u, 0x2A6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6370u;
label_2a6370:
    // 0x2a6370: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2a6370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2a6374: 0xc07ff82  jal         func_1FFE08
    ctx->pc = 0x2A6374u;
    SET_GPR_U32(ctx, 31, 0x2A637Cu);
    ctx->pc = 0x2A6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6374u;
    // 0x2a6378: 0x24443ec0  addiu       $a0, $v0, 0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFE08u, 0x2A6374u, 0x2A637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A637Cu;
label_2a637c:
    // 0x2a637c: 0x964305b0  lhu         $v1, 0x5B0($s2)
    ctx->pc = 0x2a637cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1456)));
    // 0x2a6380: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2a6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a6384: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6384u;
    {
        const bool branch_taken_0x2a6384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6384u;
        // 0x2a6388: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6384) {
            ctx->pc = 0x2A6394u;
            goto label_2a6394;
        }
    }
    ctx->pc = 0x2A638Cu;
    // 0x2a638c: 0xc0a408c  jal         func_290230
    ctx->pc = 0x2A638Cu;
    SET_GPR_U32(ctx, 31, 0x2A6394u);
    ctx->pc = 0x2A6390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A638Cu;
    // 0x2a6390: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2A638Cu, 0x2A6394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6394u;
label_2a6394:
    // 0x2a6394: 0xc07eccc  jal         func_1FB330
    ctx->pc = 0x2A6394u;
    SET_GPR_U32(ctx, 31, 0x2A639Cu);
    ctx->pc = 0x2A6398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6394u;
    // 0x2a6398: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB330u, 0x2A6394u, 0x2A639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A639Cu;
label_2a639c:
    // 0x2a639c: 0x8e420590  lw          $v0, 0x590($s2)
    ctx->pc = 0x2a639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x2a63a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2a63a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2a63a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a63a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a63a8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A63A8u;
    {
        const bool branch_taken_0x2a63a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63A8u;
        // 0x2a63ac: 0x3c070074  lui         $a3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63a8) {
            ctx->pc = 0x2A646Cu;
            goto label_2a646c;
        }
    }
    ctx->pc = 0x2A63B0u;
    // 0x2a63b0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2a63b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2a63b4: 0xc0a52ce  jal         func_294B38
    ctx->pc = 0x2A63B4u;
    SET_GPR_U32(ctx, 31, 0x2A63BCu);
    ctx->pc = 0x2A63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A63B4u;
    // 0x2a63b8: 0x26046ab0  addiu       $a0, $s0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B38u, 0x2A63B4u, 0x2A63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63BCu;
label_2a63bc:
    // 0x2a63bc: 0x8ee39b70  lw          $v1, -0x6490($s7)
    ctx->pc = 0x2a63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294941552)));
    // 0x2a63c0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2a63c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x2a63c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a63c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a63cc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A63CCu;
    {
        const bool branch_taken_0x2a63cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63CCu;
        // 0x2a63d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63cc) {
            ctx->pc = 0x2A6444u;
            goto label_2a6444;
        }
    }
    ctx->pc = 0x2A63D4u;
    // 0x2a63d4: 0x964205b0  lhu         $v0, 0x5B0($s2)
    ctx->pc = 0x2a63d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1456)));
    // 0x2a63d8: 0x2442ffb2  addiu       $v0, $v0, -0x4E
    ctx->pc = 0x2a63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967218));
    // 0x2a63dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a63dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a63e0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A63E0u;
    {
        const bool branch_taken_0x2a63e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63E0u;
        // 0x2a63e4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63e0) {
            ctx->pc = 0x2A6444u;
            goto label_2a6444;
        }
    }
    ctx->pc = 0x2A63E8u;
    // 0x2a63e8: 0x24428240  addiu       $v0, $v0, -0x7DC0
    ctx->pc = 0x2a63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935104));
    // 0x2a63ec: 0x6843001f  ldl         $v1, 0x1F($v0)
    ctx->pc = 0x2a63ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a63f0: 0x6c430018  ldr         $v1, 0x18($v0)
    ctx->pc = 0x2a63f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a63f4: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x2a63f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a63f8: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x2a63f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a63fc: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x2a63fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a6400: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x2a6400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a6404: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x2a6404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a6408: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x2a6408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a640c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2a640cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6410: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2a6410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6414: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2a6414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6418: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2a6418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a641c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2a641cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6420: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2a6420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6424: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x2a6424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6428: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x2a6428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a642c: 0x6843003f  ldl         $v1, 0x3F($v0)
    ctx->pc = 0x2a642cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a6430: 0x6c430038  ldr         $v1, 0x38($v0)
    ctx->pc = 0x2a6430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a6434: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2a6434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6438: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2a6438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a643c: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x2a643cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6440: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x2a6440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2a6444:
    // 0x2a6444: 0x27c274a0  addiu       $v0, $fp, 0x74A0
    ctx->pc = 0x2a6444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 29856));
    // 0x2a6448: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a6448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a644c: 0x8c4405ac  lw          $a0, 0x5AC($v0)
    ctx->pc = 0x2a644cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
    // 0x2a6450: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x2a6450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x2a6454: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A6454u;
    SET_GPR_U32(ctx, 31, 0x2A645Cu);
    ctx->pc = 0x2A6458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6454u;
    // 0x2a6458: 0x24a5ad68  addiu       $a1, $a1, -0x5298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A6454u, 0x2A645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A645Cu;
label_2a645c:
    // 0x2a645c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a645cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6460: 0xc0a531a  jal         func_294C68
    ctx->pc = 0x2A6460u;
    SET_GPR_U32(ctx, 31, 0x2A6468u);
    ctx->pc = 0x2A6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6460u;
    // 0x2a6464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C68u, 0x2A6460u, 0x2A6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6468u;
label_2a6468:
    // 0x2a6468: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x2a6468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
label_2a646c:
    // 0x2a646c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2a646cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2a6470: 0x24f07a2c  addiu       $s0, $a3, 0x7A2C
    ctx->pc = 0x2a6470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 31276));
    // 0x2a6474: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a6474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a6478: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a6478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a647c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A647Cu;
    {
        const bool branch_taken_0x2a647c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A647Cu;
        // 0x2a6480: 0x2611fa74  addiu       $s1, $s0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965876));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a647c) {
            ctx->pc = 0x2A64B0u;
            goto label_2a64b0;
        }
    }
    ctx->pc = 0x2A6484u;
    // 0x2a6484: 0xc0a9cc2  jal         func_2A7308
    ctx->pc = 0x2A6484u;
    SET_GPR_U32(ctx, 31, 0x2A648Cu);
    ctx->pc = 0x2A6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6484u;
    // 0x2a6488: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7308u, 0x2A6484u, 0x2A648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A648Cu;
label_2a648c:
    // 0x2a648c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2a648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6490: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a6490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a6494: 0x24a5ad70  addiu       $a1, $a1, -0x5290
    ctx->pc = 0x2a6494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946160));
    // 0x2a6498: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A6498u;
    SET_GPR_U32(ctx, 31, 0x2A64A0u);
    ctx->pc = 0x2A649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6498u;
    // 0x2a649c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A6498u, 0x2A64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64A0u;
label_2a64a0:
    // 0x2a64a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a64a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64a4: 0xc070f2e  jal         func_1C3CB8
    ctx->pc = 0x2A64A4u;
    SET_GPR_U32(ctx, 31, 0x2A64ACu);
    ctx->pc = 0x2A64A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64A4u;
    // 0x2a64a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3CB8u, 0x2A64A4u, 0x2A64ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64ACu;
label_2a64ac:
    // 0x2a64ac: 0x2611fa74  addiu       $s1, $s0, -0x58C
    ctx->pc = 0x2a64acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965876));
label_2a64b0:
    // 0x2a64b0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2a64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2a64b4: 0x8e2405ac  lw          $a0, 0x5AC($s1)
    ctx->pc = 0x2a64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x2a64b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a64b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64bc: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A64BCu;
    SET_GPR_U32(ctx, 31, 0x2A64C4u);
    ctx->pc = 0x2A64C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64BCu;
    // 0x2a64c0: 0x2445ad78  addiu       $a1, $v0, -0x5288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A64BCu, 0x2A64C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64C4u;
label_2a64c4:
    // 0x2a64c4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a64c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a64c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64cc: 0x24643050  addiu       $a0, $v1, 0x3050
    ctx->pc = 0x2a64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12368));
    // 0x2a64d0: 0xc04deba  jal         func_137AE8
    ctx->pc = 0x2A64D0u;
    SET_GPR_U32(ctx, 31, 0x2A64D8u);
    ctx->pc = 0x2A64D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64D0u;
    // 0x2a64d4: 0x24840ff4  addiu       $a0, $a0, 0xFF4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137AE8u, 0x2A64D0u, 0x2A64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64D8u;
label_2a64d8:
    // 0x2a64d8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a64d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a64dc: 0xc0b0d10  jal         func_2C3440
    ctx->pc = 0x2A64DCu;
    SET_GPR_U32(ctx, 31, 0x2A64E4u);
    ctx->pc = 0x2A64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64DCu;
    // 0x2a64e0: 0x8ca42f84  lw          $a0, 0x2F84($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3440u, 0x2A64DCu, 0x2A64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64E4u;
label_2a64e4:
    // 0x2a64e4: 0xc0c6f9e  jal         func_31BE78
    ctx->pc = 0x2A64E4u;
    SET_GPR_U32(ctx, 31, 0x2A64ECu);
    ctx->pc = 0x2A64E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64E4u;
    // 0x2a64e8: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BE78u, 0x2A64E4u, 0x2A64ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64ECu;
label_2a64ec:
    // 0x2a64ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a64f0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2a64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2a64f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a64f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a64f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A64F8u;
    {
        const bool branch_taken_0x2a64f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a64f8) {
            ctx->pc = 0x2A6520u;
            goto label_2a6520;
        }
    }
    ctx->pc = 0x2A6500u;
    // 0x2a6500: 0x8e2405ac  lw          $a0, 0x5AC($s1)
    ctx->pc = 0x2a6500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x2a6504: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a6504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a6508: 0x24a5ad80  addiu       $a1, $a1, -0x5280
    ctx->pc = 0x2a6508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946176));
    // 0x2a650c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A650Cu;
    SET_GPR_U32(ctx, 31, 0x2A6514u);
    ctx->pc = 0x2A6510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A650Cu;
    // 0x2a6510: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A650Cu, 0x2A6514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6514u;
label_2a6514:
    // 0x2a6514: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a6514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6518: 0xc0c7074  jal         func_31C1D0
    ctx->pc = 0x2A6518u;
    SET_GPR_U32(ctx, 31, 0x2A6520u);
    ctx->pc = 0x2A651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6518u;
    // 0x2a651c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C1D0u, 0x2A6518u, 0x2A6520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6520u;
label_2a6520:
    // 0x2a6520: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a6520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a6524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a652c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a6530: 0xe6c001ac  swc1        $f0, 0x1AC($s6)
    ctx->pc = 0x2a6530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 428), bits); }
    // 0x2a6534: 0xa2220569  sb          $v0, 0x569($s1)
    ctx->pc = 0x2a6534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1385), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a6538: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x2a6538u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a653c: 0x8e230584  lw          $v1, 0x584($s1)
    ctx->pc = 0x2a653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x2a6540: 0x3113a  dsrl        $v0, $v1, 4
    ctx->pc = 0x2a6540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 4);
    // 0x2a6544: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a6544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a6548: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6548u;
    {
        const bool branch_taken_0x2a6548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6548u;
        // 0x2a654c: 0x8e627a24  lw          $v0, 0x7A24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6548) {
            ctx->pc = 0x2A656Cu;
            goto label_2a656c;
        }
    }
    ctx->pc = 0x2A6550u;
    // 0x2a6550: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2a6550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2a6554: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6554u;
    {
        const bool branch_taken_0x2a6554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6554u;
        // 0x2a6558: 0x8e627a24  lw          $v0, 0x7A24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6554) {
            ctx->pc = 0x2A656Cu;
            goto label_2a656c;
        }
    }
    ctx->pc = 0x2A655Cu;
    // 0x2a655c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a655cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a6560: 0xc0ad97c  jal         func_2B65F0
    ctx->pc = 0x2A6560u;
    SET_GPR_U32(ctx, 31, 0x2A6568u);
    ctx->pc = 0x2A6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6560u;
    // 0x2a6564: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65F0u, 0x2A6560u, 0x2A6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6568u;
label_2a6568:
    // 0x2a6568: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x2a6568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
label_2a656c:
    // 0x2a656c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2a656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2a6570: 0x2406feff  addiu       $a2, $zero, -0x101
    ctx->pc = 0x2a6570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2a6574: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x2a6574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x2a6578: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a6578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a657c: 0x24e44700  addiu       $a0, $a3, 0x4700
    ctx->pc = 0x2a657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 18176));
    // 0x2a6580: 0x26637a24  addiu       $v1, $s3, 0x7A24
    ctx->pc = 0x2a6580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 31268));
    // 0x2a6584: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2a6584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2a6588: 0x2470fa7c  addiu       $s0, $v1, -0x584
    ctx->pc = 0x2a6588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965884));
    // 0x2a658c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6590: 0xc0b6102  jal         func_2D8408
    ctx->pc = 0x2A6590u;
    SET_GPR_U32(ctx, 31, 0x2A6598u);
    ctx->pc = 0x2A6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6590u;
    // 0x2a6594: 0xae627a24  sw          $v0, 0x7A24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 31268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8408u, 0x2A6590u, 0x2A6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6598u;
label_2a6598:
    // 0x2a6598: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a6598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a659c: 0xc0b4214  jal         func_2D0850
    ctx->pc = 0x2A659Cu;
    SET_GPR_U32(ctx, 31, 0x2A65A4u);
    ctx->pc = 0x2A65A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A659Cu;
    // 0x2a65a0: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0850u, 0x2A659Cu, 0x2A65A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65A4u;
label_2a65a4:
    // 0x2a65a4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2a65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a65a8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2a65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a65ac: 0xa6c301b0  sh          $v1, 0x1B0($s6)
    ctx->pc = 0x2a65acu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 432), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a65b0: 0x960205b0  lhu         $v0, 0x5B0($s0)
    ctx->pc = 0x2a65b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x2a65b4: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A65B4u;
    {
        const bool branch_taken_0x2a65b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a65b4) {
            ctx->pc = 0x2A65B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A65B4u;
            // 0x2a65b8: 0x8e020594  lw          $v0, 0x594($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A65D8u;
            goto label_2a65d8;
        }
    }
    ctx->pc = 0x2A65BCu;
    // 0x2a65bc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2A65BCu;
    SET_GPR_U32(ctx, 31, 0x2A65C4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2A65BCu, 0x2A65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65C4u;
label_2a65c4:
    // 0x2a65c4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2a65c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2a65c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a65c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a65cc: 0x0  nop
    ctx->pc = 0x2a65ccu;
    // NOP
    // 0x2a65d0: 0xe440054c  swc1        $f0, 0x54C($v0)
    ctx->pc = 0x2a65d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
    // 0x2a65d4: 0x8e020594  lw          $v0, 0x594($s0)
    ctx->pc = 0x2a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
label_2a65d8:
    // 0x2a65d8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2a65d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2a65dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A65DCu;
    {
        const bool branch_taken_0x2a65dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65DCu;
        // 0x2a65e0: 0x8e627a24  lw          $v0, 0x7A24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65dc) {
            ctx->pc = 0x2A65FCu;
            goto label_2a65fc;
        }
    }
    ctx->pc = 0x2A65E4u;
    // 0x2a65e4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2a65e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2a65e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A65E8u;
    {
        const bool branch_taken_0x2a65e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65E8u;
        // 0x2a65ec: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65e8) {
            ctx->pc = 0x2A65FCu;
            goto label_2a65fc;
        }
    }
    ctx->pc = 0x2A65F0u;
    // 0x2a65f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a65f4: 0x8c83d6e8  lw          $v1, -0x2918($a0)
    ctx->pc = 0x2a65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294956776)));
    // 0x2a65f8: 0xa462045e  sh          $v0, 0x45E($v1)
    ctx->pc = 0x2a65f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1118), (uint16_t)GPR_U32(ctx, 2));
label_2a65fc:
    // 0x2a65fc: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x2a65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
    // 0x2a6600: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x2a6600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2a6604: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x2a6604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2a6608: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x2a6608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x2a660c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a660cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a6610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a6614: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a6614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a6618: 0x2409fffd  addiu       $t1, $zero, -0x3
    ctx->pc = 0x2a6618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a661c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6620: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x2a6620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x2a6624: 0x26687a24  addiu       $t0, $s3, 0x7A24
    ctx->pc = 0x2a6624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 31268));
    // 0x2a6628: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2a6628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2a662c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a662cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a6630: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x2a6630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2a6634: 0x8d06005c  lw          $a2, 0x5C($t0)
    ctx->pc = 0x2a6634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x2a6638: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a663c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x2a663cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x2a6640: 0x3c05fdff  lui         $a1, 0xFDFF
    ctx->pc = 0x2a6640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65023 << 16));
    // 0x2a6644: 0xae627a24  sw          $v0, 0x7A24($s3)
    ctx->pc = 0x2a6644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31268), GPR_U32(ctx, 2));
    // 0x2a6648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a6648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a664c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2a664cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2a6650: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a6650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a6654: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x2a6654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2a6658: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2a6658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a665c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2a665cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a6660: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2a6660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6664: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2a6664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a6668: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2a6668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a666c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2a666cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a6670: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2a6670u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a6674: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2a6674u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a6678: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2a6678u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a667c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a667cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6680: 0xad06005c  sw          $a2, 0x5C($t0)
    ctx->pc = 0x2a6680u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 6));
    // 0x2a6684: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x2a6684u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x2a6688: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6688u;
        // 0x2a668c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6690u;
}
