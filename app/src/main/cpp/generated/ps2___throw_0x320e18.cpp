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

// Function: __throw
// Address: 0x320e18 - 0x320ff8
void ps2___throw_0x320e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_0x320e18");
#endif

    switch (ctx->pc) {
        case 0x320e18u: goto label_320e18;
        case 0x320e1cu: goto label_320e1c;
        case 0x320e20u: goto label_320e20;
        case 0x320e24u: goto label_320e24;
        case 0x320e28u: goto label_320e28;
        case 0x320e2cu: goto label_320e2c;
        case 0x320e30u: goto label_320e30;
        case 0x320e34u: goto label_320e34;
        case 0x320e38u: goto label_320e38;
        case 0x320e3cu: goto label_320e3c;
        case 0x320e40u: goto label_320e40;
        case 0x320e44u: goto label_320e44;
        case 0x320e48u: goto label_320e48;
        case 0x320e4cu: goto label_320e4c;
        case 0x320e50u: goto label_320e50;
        case 0x320e54u: goto label_320e54;
        case 0x320e58u: goto label_320e58;
        case 0x320e5cu: goto label_320e5c;
        case 0x320e60u: goto label_320e60;
        case 0x320e64u: goto label_320e64;
        case 0x320e68u: goto label_320e68;
        case 0x320e6cu: goto label_320e6c;
        case 0x320e70u: goto label_320e70;
        case 0x320e74u: goto label_320e74;
        case 0x320e78u: goto label_320e78;
        case 0x320e7cu: goto label_320e7c;
        case 0x320e80u: goto label_320e80;
        case 0x320e84u: goto label_320e84;
        case 0x320e88u: goto label_320e88;
        case 0x320e8cu: goto label_320e8c;
        case 0x320e90u: goto label_320e90;
        case 0x320e94u: goto label_320e94;
        case 0x320e98u: goto label_320e98;
        case 0x320e9cu: goto label_320e9c;
        case 0x320ea0u: goto label_320ea0;
        case 0x320ea4u: goto label_320ea4;
        case 0x320ea8u: goto label_320ea8;
        case 0x320eacu: goto label_320eac;
        case 0x320eb0u: goto label_320eb0;
        case 0x320eb4u: goto label_320eb4;
        case 0x320eb8u: goto label_320eb8;
        case 0x320ebcu: goto label_320ebc;
        case 0x320ec0u: goto label_320ec0;
        case 0x320ec4u: goto label_320ec4;
        case 0x320ec8u: goto label_320ec8;
        case 0x320eccu: goto label_320ecc;
        case 0x320ed0u: goto label_320ed0;
        case 0x320ed4u: goto label_320ed4;
        case 0x320ed8u: goto label_320ed8;
        case 0x320edcu: goto label_320edc;
        case 0x320ee0u: goto label_320ee0;
        case 0x320ee4u: goto label_320ee4;
        case 0x320ee8u: goto label_320ee8;
        case 0x320eecu: goto label_320eec;
        case 0x320ef0u: goto label_320ef0;
        case 0x320ef4u: goto label_320ef4;
        case 0x320ef8u: goto label_320ef8;
        case 0x320efcu: goto label_320efc;
        case 0x320f00u: goto label_320f00;
        case 0x320f04u: goto label_320f04;
        case 0x320f08u: goto label_320f08;
        case 0x320f0cu: goto label_320f0c;
        case 0x320f10u: goto label_320f10;
        case 0x320f14u: goto label_320f14;
        case 0x320f18u: goto label_320f18;
        case 0x320f1cu: goto label_320f1c;
        case 0x320f20u: goto label_320f20;
        case 0x320f24u: goto label_320f24;
        case 0x320f28u: goto label_320f28;
        case 0x320f2cu: goto label_320f2c;
        case 0x320f30u: goto label_320f30;
        case 0x320f34u: goto label_320f34;
        case 0x320f38u: goto label_320f38;
        case 0x320f3cu: goto label_320f3c;
        case 0x320f40u: goto label_320f40;
        case 0x320f44u: goto label_320f44;
        case 0x320f48u: goto label_320f48;
        case 0x320f4cu: goto label_320f4c;
        case 0x320f50u: goto label_320f50;
        case 0x320f54u: goto label_320f54;
        case 0x320f58u: goto label_320f58;
        case 0x320f5cu: goto label_320f5c;
        case 0x320f60u: goto label_320f60;
        case 0x320f64u: goto label_320f64;
        case 0x320f68u: goto label_320f68;
        case 0x320f6cu: goto label_320f6c;
        case 0x320f70u: goto label_320f70;
        case 0x320f74u: goto label_320f74;
        case 0x320f78u: goto label_320f78;
        case 0x320f7cu: goto label_320f7c;
        case 0x320f80u: goto label_320f80;
        case 0x320f84u: goto label_320f84;
        case 0x320f88u: goto label_320f88;
        case 0x320f8cu: goto label_320f8c;
        case 0x320f90u: goto label_320f90;
        case 0x320f94u: goto label_320f94;
        case 0x320f98u: goto label_320f98;
        case 0x320f9cu: goto label_320f9c;
        case 0x320fa0u: goto label_320fa0;
        case 0x320fa4u: goto label_320fa4;
        case 0x320fa8u: goto label_320fa8;
        case 0x320facu: goto label_320fac;
        case 0x320fb0u: goto label_320fb0;
        case 0x320fb4u: goto label_320fb4;
        case 0x320fb8u: goto label_320fb8;
        case 0x320fbcu: goto label_320fbc;
        case 0x320fc0u: goto label_320fc0;
        case 0x320fc4u: goto label_320fc4;
        case 0x320fc8u: goto label_320fc8;
        case 0x320fccu: goto label_320fcc;
        case 0x320fd0u: goto label_320fd0;
        case 0x320fd4u: goto label_320fd4;
        case 0x320fd8u: goto label_320fd8;
        case 0x320fdcu: goto label_320fdc;
        case 0x320fe0u: goto label_320fe0;
        case 0x320fe4u: goto label_320fe4;
        case 0x320fe8u: goto label_320fe8;
        case 0x320fecu: goto label_320fec;
        case 0x320ff0u: goto label_320ff0;
        case 0x320ff4u: goto label_320ff4;
        default: break;
    }

    ctx->pc = 0x320e18u;

label_320e18:
    // 0x320e18: 0x27bdf910  addiu       $sp, $sp, -0x6F0
    ctx->pc = 0x320e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965520));
label_320e1c:
    // 0x320e1c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x320e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_320e20:
    // 0x320e20: 0xffbe0670  sd          $fp, 0x670($sp)
    ctx->pc = 0x320e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 30));
label_320e24:
    // 0x320e24: 0xffbf0680  sd          $ra, 0x680($sp)
    ctx->pc = 0x320e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 31));
label_320e28:
    // 0x320e28: 0xffb70660  sd          $s7, 0x660($sp)
    ctx->pc = 0x320e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 23));
label_320e2c:
    // 0x320e2c: 0xffb60650  sd          $s6, 0x650($sp)
    ctx->pc = 0x320e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 22));
label_320e30:
    // 0x320e30: 0xffb50640  sd          $s5, 0x640($sp)
    ctx->pc = 0x320e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 21));
label_320e34:
    // 0x320e34: 0xffb40630  sd          $s4, 0x630($sp)
    ctx->pc = 0x320e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 20));
label_320e38:
    // 0x320e38: 0xffb30620  sd          $s3, 0x620($sp)
    ctx->pc = 0x320e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 19));
label_320e3c:
    // 0x320e3c: 0xffb20610  sd          $s2, 0x610($sp)
    ctx->pc = 0x320e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 18));
label_320e40:
    // 0x320e40: 0xffb10600  sd          $s1, 0x600($sp)
    ctx->pc = 0x320e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 17));
label_320e44:
    // 0x320e44: 0xffb005f0  sd          $s0, 0x5F0($sp)
    ctx->pc = 0x320e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 16));
label_320e48:
    // 0x320e48: 0xe7bf06e8  swc1        $f31, 0x6E8($sp)
    ctx->pc = 0x320e48u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_320e4c:
    // 0x320e4c: 0xe7be06e0  swc1        $f30, 0x6E0($sp)
    ctx->pc = 0x320e4cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_320e50:
    // 0x320e50: 0xe7bd06d8  swc1        $f29, 0x6D8($sp)
    ctx->pc = 0x320e50u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_320e54:
    // 0x320e54: 0xe7bc06d0  swc1        $f28, 0x6D0($sp)
    ctx->pc = 0x320e54u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_320e58:
    // 0x320e58: 0xe7bb06c8  swc1        $f27, 0x6C8($sp)
    ctx->pc = 0x320e58u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_320e5c:
    // 0x320e5c: 0xe7ba06c0  swc1        $f26, 0x6C0($sp)
    ctx->pc = 0x320e5cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_320e60:
    // 0x320e60: 0xe7b906b8  swc1        $f25, 0x6B8($sp)
    ctx->pc = 0x320e60u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_320e64:
    // 0x320e64: 0xe7b806b0  swc1        $f24, 0x6B0($sp)
    ctx->pc = 0x320e64u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_320e68:
    // 0x320e68: 0xe7b706a8  swc1        $f23, 0x6A8($sp)
    ctx->pc = 0x320e68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_320e6c:
    // 0x320e6c: 0xe7b606a0  swc1        $f22, 0x6A0($sp)
    ctx->pc = 0x320e6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_320e70:
    // 0x320e70: 0xe7b50698  swc1        $f21, 0x698($sp)
    ctx->pc = 0x320e70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1688), bits); }
label_320e74:
    // 0x320e74: 0xe7b40690  swc1        $f20, 0x690($sp)
    ctx->pc = 0x320e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1680), bits); }
label_320e78:
    // 0x320e78: 0x8c62490c  lw          $v0, 0x490C($v1)
    ctx->pc = 0x320e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
label_320e7c:
    // 0x320e7c: 0x40f809  jalr        $v0
label_320e80:
    if (ctx->pc == 0x320E80u) {
        ctx->pc = 0x320E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E7Cu;
        // 0x320e80: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E84u;
        goto label_320e84;
    }
    ctx->pc = 0x320E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320E84u);
        ctx->pc = 0x320E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E7Cu;
        // 0x320e80: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E7Cu, 0x320E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320E84u;
label_320e84:
    // 0x320e84: 0xafc205e4  sw          $v0, 0x5E4($fp)
    ctx->pc = 0x320e84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 2));
label_320e88:
    // 0x320e88: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x320e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_320e8c:
    // 0x320e8c: 0x8fc305e4  lw          $v1, 0x5E4($fp)
    ctx->pc = 0x320e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_320e90:
    // 0x320e90: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x320e90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_320e94:
    // 0x320e94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x320e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_320e98:
    // 0x320e98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_320e9c:
    if (ctx->pc == 0x320E9Cu) {
        ctx->pc = 0x320E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E98u;
        // 0x320e9c: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EA0u;
        goto label_320ea0;
    }
    ctx->pc = 0x320E98u;
    {
        const bool branch_taken_0x320e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E98u;
        // 0x320e9c: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e98) {
            ctx->pc = 0x320EB4u;
            goto label_320eb4;
        }
    }
    ctx->pc = 0x320EA0u;
label_320ea0:
    // 0x320ea0: 0xc0c80a0  jal         func_320280
label_320ea4:
    if (ctx->pc == 0x320EA4u) {
        ctx->pc = 0x320EA8u;
        goto label_320ea8;
    }
    ctx->pc = 0x320EA0u;
    SET_GPR_U32(ctx, 31, 0x320EA8u);
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x320EA0u, 0x320EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EA8u;
label_320ea8:
    // 0x320ea8: 0x27c505e0  addiu       $a1, $fp, 0x5E0
    ctx->pc = 0x320ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_320eac:
    // 0x320eac: 0x10000003  b           . + 4 + (0x3 << 2)
label_320eb0:
    if (ctx->pc == 0x320EB0u) {
        ctx->pc = 0x320EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EACu;
        // 0x320eb0: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EB4u;
        goto label_320eb4;
    }
    ctx->pc = 0x320EACu;
    {
        const bool branch_taken_0x320eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EACu;
        // 0x320eb0: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320eac) {
            ctx->pc = 0x320EBCu;
            goto label_320ebc;
        }
    }
    ctx->pc = 0x320EB4u;
label_320eb4:
    // 0x320eb4: 0x27c605e0  addiu       $a2, $fp, 0x5E0
    ctx->pc = 0x320eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_320eb8:
    // 0x320eb8: 0xafc605ec  sw          $a2, 0x5EC($fp)
    ctx->pc = 0x320eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 6));
label_320ebc:
    // 0x320ebc: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x320ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
label_320ec0:
    // 0x320ec0: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x320ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_320ec4:
    // 0x320ec4: 0xc0c895c  jal         func_322570
label_320ec8:
    if (ctx->pc == 0x320EC8u) {
        ctx->pc = 0x320EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EC4u;
        // 0x320ec8: 0x24e40ebc  addiu       $a0, $a3, 0xEBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3772));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320ECCu;
        goto label_320ecc;
    }
    ctx->pc = 0x320EC4u;
    SET_GPR_U32(ctx, 31, 0x320ECCu);
    ctx->pc = 0x320EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EC4u;
    // 0x320ec8: 0x24e40ebc  addiu       $a0, $a3, 0xEBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322570u, 0x320EC4u, 0x320ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320ECCu;
label_320ecc:
    // 0x320ecc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x320eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320ed0:
    // 0x320ed0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_320ed4:
    if (ctx->pc == 0x320ED4u) {
        ctx->pc = 0x320ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320ED0u;
        // 0x320ed4: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320ED8u;
        goto label_320ed8;
    }
    ctx->pc = 0x320ED0u;
    {
        const bool branch_taken_0x320ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320ED0u;
        // 0x320ed4: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ed0) {
            ctx->pc = 0x320EE4u;
            goto label_320ee4;
        }
    }
    ctx->pc = 0x320ED8u;
label_320ed8:
    // 0x320ed8: 0xc0c80a0  jal         func_320280
label_320edc:
    if (ctx->pc == 0x320EDCu) {
        ctx->pc = 0x320EE0u;
        goto label_320ee0;
    }
    ctx->pc = 0x320ED8u;
    SET_GPR_U32(ctx, 31, 0x320EE0u);
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x320ED8u, 0x320EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EE0u;
label_320ee0:
    // 0x320ee0: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x320ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_320ee4:
    // 0x320ee4: 0x27c806f0  addiu       $t0, $fp, 0x6F0
    ctx->pc = 0x320ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1776));
label_320ee8:
    // 0x320ee8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x320ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_320eec:
    // 0x320eec: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x320eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_320ef0:
    // 0x320ef0: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x320ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_320ef4:
    // 0x320ef4: 0x8fc205e8  lw          $v0, 0x5E8($fp)
    ctx->pc = 0x320ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_320ef8:
    // 0x320ef8: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x320ef8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_320efc:
    // 0x320efc: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x320efcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_320f00:
    // 0x320f00: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x320f00u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_320f04:
    // 0x320f04: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x320f04u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_320f08:
    // 0x320f08: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x320f08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_320f0c:
    // 0x320f0c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x320f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_320f10:
    // 0x320f10: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x320f10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_320f14:
    // 0x320f14: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x320f14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_320f18:
    // 0x320f18: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x320f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_320f1c:
    // 0x320f1c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x320f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_320f20:
    // 0x320f20: 0x0  nop
    ctx->pc = 0x320f20u;
    // NOP
label_320f24:
    // 0x320f24: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_320f28:
    if (ctx->pc == 0x320F28u) {
        ctx->pc = 0x320F2Cu;
        goto label_320f2c;
    }
    ctx->pc = 0x320F24u;
    {
        const bool branch_taken_0x320f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x320f24) {
            ctx->pc = 0x320EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320ef8;
        }
    }
    ctx->pc = 0x320F2Cu;
label_320f2c:
    // 0x320f2c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x320f2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_320f30:
    // 0x320f30: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x320f30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_320f34:
    // 0x320f34: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x320f34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_320f38:
    // 0x320f38: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x320f38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_320f3c:
    // 0x320f3c: 0x27c20680  addiu       $v0, $fp, 0x680
    ctx->pc = 0x320f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_320f40:
    // 0x320f40: 0x8fc405e4  lw          $a0, 0x5E4($fp)
    ctx->pc = 0x320f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_320f44:
    // 0x320f44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x320f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_320f48:
    // 0x320f48: 0x8fc605e8  lw          $a2, 0x5E8($fp)
    ctx->pc = 0x320f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_320f4c:
    // 0x320f4c: 0x8fc705ec  lw          $a3, 0x5EC($fp)
    ctx->pc = 0x320f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_320f50:
    // 0x320f50: 0xc0c82ba  jal         func_320AE8
label_320f54:
    if (ctx->pc == 0x320F54u) {
        ctx->pc = 0x320F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F50u;
        // 0x320f54: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F58u;
        goto label_320f58;
    }
    ctx->pc = 0x320F50u;
    SET_GPR_U32(ctx, 31, 0x320F58u);
    ctx->pc = 0x320F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320F50u;
    // 0x320f54: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE8u, 0x320F50u, 0x320F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320F58u;
label_320f58:
    // 0x320f58: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x320f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_320f5c:
    // 0x320f5c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x320f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_320f60:
    // 0x320f60: 0x8fc805e8  lw          $t0, 0x5E8($fp)
    ctx->pc = 0x320f60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_320f64:
    // 0x320f64: 0x24650f88  addiu       $a1, $v1, 0xF88
    ctx->pc = 0x320f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3976));
label_320f68:
    // 0x320f68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x320f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_320f6c:
    // 0x320f6c: 0x27c40680  addiu       $a0, $fp, 0x680
    ctx->pc = 0x320f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_320f70:
    // 0x320f70: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x320f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_320f74:
    // 0x320f74: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x320f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_320f78:
    // 0x320f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x320f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320f7c:
    // 0x320f7c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x320f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_320f80:
    // 0x320f80: 0x10000003  b           . + 4 + (0x3 << 2)
label_320f84:
    if (ctx->pc == 0x320F84u) {
        ctx->pc = 0x320F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F80u;
        // 0x320f84: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F88u;
        goto label_320f88;
    }
    ctx->pc = 0x320F80u;
    {
        const bool branch_taken_0x320f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F80u;
        // 0x320f84: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f80) {
            ctx->pc = 0x320F90u;
            goto label_320f90;
        }
    }
    ctx->pc = 0x320F88u;
label_320f88:
    // 0x320f88: 0x800008  jr          $a0
label_320f8c:
    if (ctx->pc == 0x320F8Cu) {
        ctx->pc = 0x320F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F88u;
        // 0x320f8c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F90u;
        goto label_320f90;
    }
    ctx->pc = 0x320F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x320F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F88u;
        // 0x320f8c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x320F90u;
label_320f90:
    // 0x320f90: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x320f90u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_320f94:
    // 0x320f94: 0xdfbf0680  ld          $ra, 0x680($sp)
    ctx->pc = 0x320f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_320f98:
    // 0x320f98: 0xdfbe0670  ld          $fp, 0x670($sp)
    ctx->pc = 0x320f98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_320f9c:
    // 0x320f9c: 0xdfb70660  ld          $s7, 0x660($sp)
    ctx->pc = 0x320f9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_320fa0:
    // 0x320fa0: 0xdfb60650  ld          $s6, 0x650($sp)
    ctx->pc = 0x320fa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_320fa4:
    // 0x320fa4: 0xdfb50640  ld          $s5, 0x640($sp)
    ctx->pc = 0x320fa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_320fa8:
    // 0x320fa8: 0xdfb40630  ld          $s4, 0x630($sp)
    ctx->pc = 0x320fa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_320fac:
    // 0x320fac: 0xdfb30620  ld          $s3, 0x620($sp)
    ctx->pc = 0x320facu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_320fb0:
    // 0x320fb0: 0xdfb20610  ld          $s2, 0x610($sp)
    ctx->pc = 0x320fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_320fb4:
    // 0x320fb4: 0xdfb10600  ld          $s1, 0x600($sp)
    ctx->pc = 0x320fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_320fb8:
    // 0x320fb8: 0xdfb005f0  ld          $s0, 0x5F0($sp)
    ctx->pc = 0x320fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
label_320fbc:
    // 0x320fbc: 0xc7bf06e8  lwc1        $f31, 0x6E8($sp)
    ctx->pc = 0x320fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_320fc0:
    // 0x320fc0: 0xc7be06e0  lwc1        $f30, 0x6E0($sp)
    ctx->pc = 0x320fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_320fc4:
    // 0x320fc4: 0xc7bd06d8  lwc1        $f29, 0x6D8($sp)
    ctx->pc = 0x320fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_320fc8:
    // 0x320fc8: 0xc7bc06d0  lwc1        $f28, 0x6D0($sp)
    ctx->pc = 0x320fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_320fcc:
    // 0x320fcc: 0xc7bb06c8  lwc1        $f27, 0x6C8($sp)
    ctx->pc = 0x320fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_320fd0:
    // 0x320fd0: 0xc7ba06c0  lwc1        $f26, 0x6C0($sp)
    ctx->pc = 0x320fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_320fd4:
    // 0x320fd4: 0xc7b906b8  lwc1        $f25, 0x6B8($sp)
    ctx->pc = 0x320fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_320fd8:
    // 0x320fd8: 0xc7b806b0  lwc1        $f24, 0x6B0($sp)
    ctx->pc = 0x320fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_320fdc:
    // 0x320fdc: 0xc7b706a8  lwc1        $f23, 0x6A8($sp)
    ctx->pc = 0x320fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_320fe0:
    // 0x320fe0: 0xc7b606a0  lwc1        $f22, 0x6A0($sp)
    ctx->pc = 0x320fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_320fe4:
    // 0x320fe4: 0xc7b50698  lwc1        $f21, 0x698($sp)
    ctx->pc = 0x320fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_320fe8:
    // 0x320fe8: 0xc7b40690  lwc1        $f20, 0x690($sp)
    ctx->pc = 0x320fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_320fec:
    // 0x320fec: 0x3e00008  jr          $ra
label_320ff0:
    if (ctx->pc == 0x320FF0u) {
        ctx->pc = 0x320FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FECu;
        // 0x320ff0: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FF4u;
        goto label_320ff4;
    }
    ctx->pc = 0x320FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FECu;
        // 0x320ff0: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320FF4u;
label_320ff4:
    // 0x320ff4: 0x0  nop
    ctx->pc = 0x320ff4u;
    // NOP
    ctx->pc = 0x320ff8u;
}
