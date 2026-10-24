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

// Function: func_002A6DA8
// Address: 0x2a6da8 - 0x2a6ff8
void func_002A6DA8_0x2a6da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A6DA8_0x2a6da8");
#endif

    switch (ctx->pc) {
        case 0x2a6e90u: goto label_2a6e90;
        case 0x2a6eb8u: goto label_2a6eb8;
        case 0x2a6ec0u: goto label_2a6ec0;
        case 0x2a6ec8u: goto label_2a6ec8;
        case 0x2a6ee0u: goto label_2a6ee0;
        case 0x2a6f78u: goto label_2a6f78;
        case 0x2a6f88u: goto label_2a6f88;
        case 0x2a6fd4u: goto label_2a6fd4;
        default: break;
    }

    ctx->pc = 0x2a6da8u;

    // 0x2a6da8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2a6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2a6dac: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2a6dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2a6db0: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x2a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x2a6db4: 0x24657a24  addiu       $a1, $v1, 0x7A24
    ctx->pc = 0x2a6db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
    // 0x2a6db8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2a6db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2a6dbc: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2a6dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2a6dc0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2a6dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2a6dc4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2a6dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2a6dc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a6dcc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2a6dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2a6dd0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2a6dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2a6dd4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2a6dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2a6dd8: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2A6DD8u;
    {
        const bool branch_taken_0x2a6dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DD8u;
        // 0x2a6ddc: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6dd8) {
            ctx->pc = 0x2A6FD4u;
            goto label_2a6fd4;
        }
    }
    ctx->pc = 0x2A6DE0u;
    // 0x2a6de0: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x2a6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2a6de4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2a6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2a6de8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a6de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a6dec: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2A6DECu;
    {
        const bool branch_taken_0x2a6dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DECu;
        // 0x2a6df0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6dec) {
            ctx->pc = 0x2A6FD8u;
            goto label_2a6fd8;
        }
    }
    ctx->pc = 0x2A6DF4u;
    // 0x2a6df4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2a6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2a6df8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a6df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a6dfc: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2A6DFCu;
    {
        const bool branch_taken_0x2a6dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DFCu;
        // 0x2a6e00: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6dfc) {
            ctx->pc = 0x2A6FDCu;
            goto label_2a6fdc;
        }
    }
    ctx->pc = 0x2A6E04u;
    // 0x2a6e04: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2a6e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2a6e08: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2a6e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6e0c: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2A6E0Cu;
    {
        const bool branch_taken_0x2a6e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E0Cu;
        // 0x2a6e10: 0x7bb200d0  lq          $s2, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e0c) {
            ctx->pc = 0x2A6FE0u;
            goto label_2a6fe0;
        }
    }
    ctx->pc = 0x2A6E14u;
    // 0x2a6e14: 0x3c120200  lui         $s2, 0x200
    ctx->pc = 0x2a6e14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)512 << 16));
    // 0x2a6e18: 0x721024  and         $v0, $v1, $s2
    ctx->pc = 0x2a6e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2a6e1c: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x2A6E1Cu;
    {
        const bool branch_taken_0x2a6e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e1c) {
            ctx->pc = 0x2A6E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6E1Cu;
            // 0x2a6e20: 0x7bb200d0  lq          $s2, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6FE0u;
            goto label_2a6fe0;
        }
    }
    ctx->pc = 0x2A6E24u;
    // 0x2a6e24: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x2a6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x2a6e28: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6e2c: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x2A6E2Cu;
    {
        const bool branch_taken_0x2a6e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e2c) {
            ctx->pc = 0x2A6E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6E2Cu;
            // 0x2a6e30: 0x7bb200d0  lq          $s2, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6FE0u;
            goto label_2a6fe0;
        }
    }
    ctx->pc = 0x2A6E34u;
    // 0x2a6e34: 0x24b1fa7c  addiu       $s1, $a1, -0x584
    ctx->pc = 0x2a6e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965884));
    // 0x2a6e38: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2a6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a6e3c: 0x962205b0  lhu         $v0, 0x5B0($s1)
    ctx->pc = 0x2a6e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x2a6e40: 0x10430065  beq         $v0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2A6E40u;
    {
        const bool branch_taken_0x2a6e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E40u;
        // 0x2a6e44: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e40) {
            ctx->pc = 0x2A6FD8u;
            goto label_2a6fd8;
        }
    }
    ctx->pc = 0x2A6E48u;
    // 0x2a6e48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a6e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a6e4c: 0x9043ac90  lbu         $v1, -0x5370($v0)
    ctx->pc = 0x2a6e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945936)));
    // 0x2a6e50: 0x54640062  bnel        $v1, $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2A6E50u;
    {
        const bool branch_taken_0x2a6e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a6e50) {
            ctx->pc = 0x2A6E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6E50u;
            // 0x2a6e54: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6FDCu;
            goto label_2a6fdc;
        }
    }
    ctx->pc = 0x2A6E58u;
    // 0x2a6e58: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x2a6e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2a6e5c: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x2A6E5Cu;
    {
        const bool branch_taken_0x2a6e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e5c) {
            ctx->pc = 0x2A6E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6E5Cu;
            // 0x2a6e60: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6FDCu;
            goto label_2a6fdc;
        }
    }
    ctx->pc = 0x2A6E64u;
    // 0x2a6e64: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2a6e64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2a6e68: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2a6e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2a6e6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a6e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6e70: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x2a6e70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x2a6e74: 0x24053007  addiu       $a1, $zero, 0x3007
    ctx->pc = 0x2a6e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12295));
    // 0x2a6e78: 0x3c01435c  lui         $at, 0x435C
    ctx->pc = 0x2a6e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17244 << 16));
    // 0x2a6e7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a6e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6e80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e84: 0x24841520  addiu       $a0, $a0, 0x1520
    ctx->pc = 0x2a6e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    // 0x2a6e88: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x2A6E88u;
    SET_GPR_U32(ctx, 31, 0x2A6E90u);
    ctx->pc = 0x2A6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6E88u;
    // 0x2a6e8c: 0x8e3405e0  lw          $s4, 0x5E0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x2A6E88u, 0x2A6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E90u;
label_2a6e90:
    // 0x2a6e90: 0x8e2205e0  lw          $v0, 0x5E0($s1)
    ctx->pc = 0x2a6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x2a6e94: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2a6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2a6e98: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2a6e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2a6e9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6ea0: 0xae2205e0  sw          $v0, 0x5E0($s1)
    ctx->pc = 0x2a6ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1504), GPR_U32(ctx, 2));
    // 0x2a6ea4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2a6ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ea8: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x2a6ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
    // 0x2a6eac: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x2a6eacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x2a6eb0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2A6EB0u;
    {
        const bool branch_taken_0x2a6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EB0u;
        // 0x2a6eb4: 0x3c150074  lui         $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6eb0) {
            ctx->pc = 0x2A6F88u;
            goto label_2a6f88;
        }
    }
    ctx->pc = 0x2A6EB8u;
label_2a6eb8:
    // 0x2a6eb8: 0xc050396  jal         func_140E58
    ctx->pc = 0x2A6EB8u;
    SET_GPR_U32(ctx, 31, 0x2A6EC0u);
    ctx->pc = 0x2A6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6EB8u;
    // 0x2a6ebc: 0x8e24d6e8  lw          $a0, -0x2918($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140E58u, 0x2A6EB8u, 0x2A6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EC0u;
label_2a6ec0:
    // 0x2a6ec0: 0xc05042a  jal         func_1410A8
    ctx->pc = 0x2A6EC0u;
    SET_GPR_U32(ctx, 31, 0x2A6EC8u);
    ctx->pc = 0x2A6EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6EC0u;
    // 0x2a6ec4: 0x8e24d6e8  lw          $a0, -0x2918($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1410A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1410A8u, 0x2A6EC0u, 0x2A6EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EC8u;
label_2a6ec8:
    // 0x2a6ec8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2a6ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6ecc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2a6eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2a6ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ed8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2A6ED8u;
    SET_GPR_U32(ctx, 31, 0x2A6EE0u);
    ctx->pc = 0x2A6EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6ED8u;
    // 0x2a6edc: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2A6ED8u, 0x2A6EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EE0u;
label_2a6ee0:
    // 0x2a6ee0: 0x8faa0040  lw          $t2, 0x40($sp)
    ctx->pc = 0x2a6ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6ee4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a6ee8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a6eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6ef0: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2a6ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2a6ef4: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2a6ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2a6ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a6ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6efc: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x2a6efcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
    // 0x2a6f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6f04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a6f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a6f08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a6f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f0c: 0xc4441184  lwc1        $f4, 0x1184($v0)
    ctx->pc = 0x2a6f0cu;
    { uint32_t bits = FAST_READ32(0x3C1184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6f10: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2a6f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2a6f14: 0xc4631190  lwc1        $f3, 0x1190($v1)
    ctx->pc = 0x2a6f14u;
    { uint32_t bits = FAST_READ32(0x3C1190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6f18: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2a6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2a6f1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a6f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f20: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2a6f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a6f24: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2a6f24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a6f28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6f2c: 0xafaa0040  sw          $t2, 0x40($sp)
    ctx->pc = 0x2a6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 10));
    // 0x2a6f30: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x2a6f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x2a6f34: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a6f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a6f38: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2a6f38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a6f3c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2a6f3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a6f40: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2a6f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a6f44: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2a6f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a6f48: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a6f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a6f4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a6f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a6f50: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a6f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a6f54: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2a6f54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a6f58: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2a6f58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a6f5c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2a6f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a6f60: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2a6f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a6f64: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2a6f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a6f68: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2a6f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2a6f6c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2a6f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a6f70: 0xc056e20  jal         func_15B880
    ctx->pc = 0x2A6F70u;
    SET_GPR_U32(ctx, 31, 0x2A6F78u);
    ctx->pc = 0x2A6F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F70u;
    // 0x2a6f74: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B880u, 0x2A6F70u, 0x2A6F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F78u;
label_2a6f78:
    // 0x2a6f78: 0x26432c00  addiu       $v1, $s2, 0x2C00
    ctx->pc = 0x2a6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11264));
    // 0x2a6f7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6f80: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2A6F80u;
    SET_GPR_U32(ctx, 31, 0x2A6F88u);
    ctx->pc = 0x2A6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F80u;
    // 0x2a6f84: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2A6F80u, 0x2A6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F88u;
label_2a6f88:
    // 0x2a6f88: 0x266374a0  addiu       $v1, $s3, 0x74A0
    ctx->pc = 0x2a6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
    // 0x2a6f8c: 0x8c62056c  lw          $v0, 0x56C($v1)
    ctx->pc = 0x2a6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1388)));
    // 0x2a6f90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6F90u;
    {
        const bool branch_taken_0x2a6f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F90u;
        // 0x2a6f94: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f90) {
            ctx->pc = 0x2A6FACu;
            goto label_2a6fac;
        }
    }
    ctx->pc = 0x2A6F98u;
    // 0x2a6f98: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2a6f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2a6f9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6F9Cu;
    {
        const bool branch_taken_0x2a6f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F9Cu;
        // 0x2a6fa0: 0x8e22d6e8  lw          $v0, -0x2918($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f9c) {
            ctx->pc = 0x2A6FB8u;
            goto label_2a6fb8;
        }
    }
    ctx->pc = 0x2A6FA4u;
    // 0x2a6fa4: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x2A6FA4u;
    {
        const bool branch_taken_0x2a6fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6fa4) {
            ctx->pc = 0x2A6EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6eb8;
        }
    }
    ctx->pc = 0x2A6FACu;
label_2a6fac:
    // 0x2a6fac: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2a6facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2a6fb0: 0x1040ffc1  beqz        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2A6FB0u;
    {
        const bool branch_taken_0x2a6fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FB0u;
        // 0x2a6fb4: 0x8e22d6e8  lw          $v0, -0x2918($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fb0) {
            ctx->pc = 0x2A6EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6eb8;
        }
    }
    ctx->pc = 0x2A6FB8u;
label_2a6fb8:
    // 0x2a6fb8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a6fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a6fbc: 0xaeb47a80  sw          $s4, 0x7A80($s5)
    ctx->pc = 0x2a6fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 31360), GPR_U32(ctx, 20));
    // 0x2a6fc0: 0x26462c00  addiu       $a2, $s2, 0x2C00
    ctx->pc = 0x2a6fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 11264));
    // 0x2a6fc4: 0xac4315bc  sw          $v1, 0x15BC($v0)
    ctx->pc = 0x2a6fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 3));
    // 0x2a6fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6fcc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2A6FCCu;
    SET_GPR_U32(ctx, 31, 0x2A6FD4u);
    ctx->pc = 0x2A6FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6FCCu;
    // 0x2a6fd0: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2A6FCCu, 0x2A6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6FD4u;
label_2a6fd4:
    // 0x2a6fd4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2a6fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2a6fd8:
    // 0x2a6fd8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2a6fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a6fdc:
    // 0x2a6fdc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2a6fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a6fe0:
    // 0x2a6fe0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2a6fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a6fe4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2a6fe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6fe8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2a6fe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a6fec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a6fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a6ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FF0u;
        // 0x2a6ff4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6FF8u;
}
