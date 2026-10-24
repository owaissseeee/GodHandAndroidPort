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

// Function: sceOpen
// Address: 0x3b4220 - 0x3b44b0
void sceOpen_0x3b4220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceOpen_0x3b4220");
#endif

    switch (ctx->pc) {
        case 0x3b427cu: goto label_3b427c;
        case 0x3b4294u: goto label_3b4294;
        case 0x3b429cu: goto label_3b429c;
        case 0x3b42acu: goto label_3b42ac;
        case 0x3b42c0u: goto label_3b42c0;
        case 0x3b42d4u: goto label_3b42d4;
        case 0x3b4308u: goto label_3b4308;
        case 0x3b4398u: goto label_3b4398;
        case 0x3b43d8u: goto label_3b43d8;
        case 0x3b43e8u: goto label_3b43e8;
        case 0x3b43f0u: goto label_3b43f0;
        case 0x3b4404u: goto label_3b4404;
        case 0x3b4414u: goto label_3b4414;
        case 0x3b4424u: goto label_3b4424;
        case 0x3b442cu: goto label_3b442c;
        case 0x3b4440u: goto label_3b4440;
        case 0x3b444cu: goto label_3b444c;
        case 0x3b4460u: goto label_3b4460;
        case 0x3b447cu: goto label_3b447c;
        default: break;
    }

    ctx->pc = 0x3b4220u;

    // 0x3b4220: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3b4220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3b4224: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b4224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b4228: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3b4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3b422c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b422cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4230: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x3b4230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x3b4234: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3b4234u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4238: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3b4238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3b423c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4240: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3b4240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3b4244: 0x3c1e0078  lui         $fp, 0x78
    ctx->pc = 0x3b4244u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)120 << 16));
    // 0x3b4248: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3b4248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3b424c: 0x27d1ffc0  addiu       $s1, $fp, -0x40
    ctx->pc = 0x3b424cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967232));
    // 0x3b4250: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3b4250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3b4254: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b4254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b4258: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b4258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b425c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3b425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3b4260: 0xffa60120  sd          $a2, 0x120($sp)
    ctx->pc = 0x3b4260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 6));
    // 0x3b4264: 0xffa70128  sd          $a3, 0x128($sp)
    ctx->pc = 0x3b4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
    // 0x3b4268: 0xffa80130  sd          $t0, 0x130($sp)
    ctx->pc = 0x3b4268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 8));
    // 0x3b426c: 0xffa90138  sd          $t1, 0x138($sp)
    ctx->pc = 0x3b426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 9));
    // 0x3b4270: 0xffaa0140  sd          $t2, 0x140($sp)
    ctx->pc = 0x3b4270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
    // 0x3b4274: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B4274u;
    SET_GPR_U32(ctx, 31, 0x3B427Cu);
    ctx->pc = 0x3B4278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4274u;
    // 0x3b4278: 0xffab0148  sd          $t3, 0x148($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B4274u, 0x3B427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B427Cu;
label_3b427c:
    // 0x3b427c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b427cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b4280: 0x8c62aedc  lw          $v0, -0x5124($v1)
    ctx->pc = 0x3b4280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b4284: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4284u;
    {
        const bool branch_taken_0x3b4284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4284) {
            ctx->pc = 0x3B4294u;
            goto label_3b4294;
        }
    }
    ctx->pc = 0x3B428Cu;
    // 0x3b428c: 0xc0ecfd4  jal         func_3B3F50
    ctx->pc = 0x3B428Cu;
    SET_GPR_U32(ctx, 31, 0x3B4294u);
    ctx->pc = 0x3B3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3F50u, 0x3B428Cu, 0x3B4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4294u;
label_3b4294:
    // 0x3b4294: 0xc0ed056  jal         func_3B4158
    ctx->pc = 0x3B4294u;
    SET_GPR_U32(ctx, 31, 0x3B429Cu);
    ctx->pc = 0x3B4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4158u, 0x3B4294u, 0x3B429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B429Cu;
label_3b429c:
    // 0x3b429c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B429Cu;
    {
        const bool branch_taken_0x3b429c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b429c) {
            ctx->pc = 0x3B42B8u;
            goto label_3b42b8;
        }
    }
    ctx->pc = 0x3B42A4u;
    // 0x3b42a4: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B42A4u;
    SET_GPR_U32(ctx, 31, 0x3B42ACu);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B42A4u, 0x3B42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B42ACu;
label_3b42ac:
    // 0x3b42ac: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3b42acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3b42b0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x3B42B0u;
    {
        const bool branch_taken_0x3b42b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42B0u;
        // 0x3b42b4: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b42b0) {
            ctx->pc = 0x3B4480u;
            goto label_3b4480;
        }
    }
    ctx->pc = 0x3B42B8u;
label_3b42b8:
    // 0x3b42b8: 0xc0ece34  jal         func_3B38D0
    ctx->pc = 0x3B42B8u;
    SET_GPR_U32(ctx, 31, 0x3B42C0u);
    ctx->pc = 0x3B38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B38D0u, 0x3B42B8u, 0x3B42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B42C0u;
label_3b42c0:
    // 0x3b42c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b42c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b42c4: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B42C4u;
    {
        const bool branch_taken_0x3b42c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b42c4) {
            ctx->pc = 0x3B42C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B42C4u;
            // 0x3b42c8: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B42DCu;
            goto label_3b42dc;
        }
    }
    ctx->pc = 0x3B42CCu;
    // 0x3b42cc: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B42CCu;
    SET_GPR_U32(ctx, 31, 0x3B42D4u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B42CCu, 0x3B42D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B42D4u;
label_3b42d4:
    // 0x3b42d4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3B42D4u;
    {
        const bool branch_taken_0x3b42d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42D4u;
        // 0x3b42d8: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b42d4) {
            ctx->pc = 0x3B4480u;
            goto label_3b4480;
        }
    }
    ctx->pc = 0x3B42DCu;
label_3b42dc:
    // 0x3b42dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b42dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b42e0: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x3b42e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3b42e4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3b42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b42e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B42E8u;
    {
        const bool branch_taken_0x3b42e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42E8u;
        // 0x3b42ec: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b42e8) {
            ctx->pc = 0x3B4334u;
            goto label_3b4334;
        }
    }
    ctx->pc = 0x3B42F0u;
    // 0x3b42f0: 0x3c070078  lui         $a3, 0x78
    ctx->pc = 0x3b42f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)120 << 16));
    // 0x3b42f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3b42f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3b42f8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3b42f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b42fc: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b42fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b4300: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b4300u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x3b4304: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b4304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b4308:
    // 0x3b4308: 0x28c20400  slti        $v0, $a2, 0x400
    ctx->pc = 0x3b4308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3b430c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B430Cu;
    {
        const bool branch_taken_0x3b430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B430Cu;
        // 0x3b4310: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b430c) {
            ctx->pc = 0x3B4348u;
            goto label_3b4348;
        }
    }
    ctx->pc = 0x3B4314u;
    // 0x3b4314: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x3b4314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x3b4318: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b4318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b431c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x3b431cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b4320: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b4320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b4324: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B4324u;
    {
        const bool branch_taken_0x3b4324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4324) {
            ctx->pc = 0x3B4328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4324u;
            // 0x3b4328: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4308;
        }
    }
    ctx->pc = 0x3B432Cu;
    // 0x3b432c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B432Cu;
    {
        const bool branch_taken_0x3b432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B432Cu;
        // 0x3b4330: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b432c) {
            ctx->pc = 0x3B434Cu;
            goto label_3b434c;
        }
    }
    ctx->pc = 0x3B4334u;
label_3b4334:
    // 0x3b4334: 0x3c070078  lui         $a3, 0x78
    ctx->pc = 0x3b4334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)120 << 16));
    // 0x3b4338: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3b4338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3b433c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3b433cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b4340: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b4340u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b4344: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b4344u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
label_3b4348:
    // 0x3b4348: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3b4348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3b434c:
    // 0x3b434c: 0x50c20001  beql        $a2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B434Cu;
    {
        const bool branch_taken_0x3b434c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b434c) {
            ctx->pc = 0x3B4350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B434Cu;
            // 0x3b4350: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4354u;
            goto label_3b4354;
        }
    }
    ctx->pc = 0x3B4354u;
label_3b4354:
    // 0x3b4354: 0x24e214c0  addiu       $v0, $a3, 0x14C0
    ctx->pc = 0x3b4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5312));
    // 0x3b4358: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3b4358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3b435c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3b435cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3b4360: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3b4360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3b4364: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x3b4364u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3b4368: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x3b4368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x3b436c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3b436cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x3b4370: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x3b4370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x3b4374: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x3b4374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x3b4378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b437c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b437cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b4380: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b4380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b4384: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x3b4384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x3b4388: 0x26940c00  addiu       $s4, $s4, 0xC00
    ctx->pc = 0x3b4388u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3072));
    // 0x3b438c: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x3b438cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
    // 0x3b4390: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B4390u;
    SET_GPR_U32(ctx, 31, 0x3B4398u);
    ctx->pc = 0x3B4394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4390u;
    // 0x3b4394: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B4390u, 0x3B4398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4398u;
label_3b4398:
    // 0x3b4398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b439c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x3b439cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x3b43a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b43a4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3b43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3b43a8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3b43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3b43ac: 0x26c416c0  addiu       $a0, $s6, 0x16C0
    ctx->pc = 0x3b43acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
    // 0x3b43b0: 0x27c7ffc0  addiu       $a3, $fp, -0x40
    ctx->pc = 0x3b43b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967232));
    // 0x3b43b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b43b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b43b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b43bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b43bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b43c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b43c4: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x3b43c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x3b43c8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3b43c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b43cc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b43ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b43d0: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B43D0u;
    SET_GPR_U32(ctx, 31, 0x3B43D8u);
    ctx->pc = 0x3B43D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43D0u;
    // 0x3b43d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B43D0u, 0x3B43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43D8u;
label_3b43d8:
    // 0x3b43d8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B43D8u;
    {
        const bool branch_taken_0x3b43d8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43D8u;
        // 0x3b43dc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b43d8) {
            ctx->pc = 0x3B43F8u;
            goto label_3b43f8;
        }
    }
    ctx->pc = 0x3B43E0u;
    // 0x3b43e0: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B43E0u;
    SET_GPR_U32(ctx, 31, 0x3B43E8u);
    ctx->pc = 0x3B43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43E0u;
    // 0x3b43e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B43E0u, 0x3B43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43E8u;
label_3b43e8:
    // 0x3b43e8: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B43E8u;
    SET_GPR_U32(ctx, 31, 0x3B43F0u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B43E8u, 0x3B43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43F0u;
label_3b43f0:
    // 0x3b43f0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B43F0u;
    {
        const bool branch_taken_0x3b43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43F0u;
        // 0x3b43f4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b43f0) {
            ctx->pc = 0x3B4480u;
            goto label_3b4480;
        }
    }
    ctx->pc = 0x3B43F8u;
label_3b43f8:
    // 0x3b43f8: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3b43f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3b43fc: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B43FCu;
    SET_GPR_U32(ctx, 31, 0x3B4404u);
    ctx->pc = 0x3B4400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43FCu;
    // 0x3b4400: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B43FCu, 0x3B4404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4404u;
label_3b4404:
    // 0x3b4404: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4404u;
    {
        const bool branch_taken_0x3b4404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4404) {
            ctx->pc = 0x3B441Cu;
            goto label_3b441c;
        }
    }
    ctx->pc = 0x3B440Cu;
    // 0x3b440c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B440Cu;
    SET_GPR_U32(ctx, 31, 0x3B4414u);
    ctx->pc = 0x3B4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B440Cu;
    // 0x3b4410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B440Cu, 0x3B4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4414u;
label_3b4414:
    // 0x3b4414: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3B4414u;
    {
        const bool branch_taken_0x3b4414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4414u;
        // 0x3b4418: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4414) {
            ctx->pc = 0x3B4480u;
            goto label_3b4480;
        }
    }
    ctx->pc = 0x3B441Cu;
label_3b441c:
    // 0x3b441c: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B441Cu;
    SET_GPR_U32(ctx, 31, 0x3B4424u);
    ctx->pc = 0x3B4420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B441Cu;
    // 0x3b4420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B441Cu, 0x3B4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4424u;
label_3b4424:
    // 0x3b4424: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4424u;
    SET_GPR_U32(ctx, 31, 0x3B442Cu);
    ctx->pc = 0x3B4428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4424u;
    // 0x3b4428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4424u, 0x3B442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B442Cu;
label_3b442c:
    // 0x3b442c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3b442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b4430: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4430u;
    {
        const bool branch_taken_0x3b4430 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3B4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4430u;
        // 0x3b4434: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4430) {
            ctx->pc = 0x3B4454u;
            goto label_3b4454;
        }
    }
    ctx->pc = 0x3B4438u;
    // 0x3b4438: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4438u;
    SET_GPR_U32(ctx, 31, 0x3B4440u);
    ctx->pc = 0x3B443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4438u;
    // 0x3b443c: 0x8e04aee8  lw          $a0, -0x5118($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4438u, 0x3B4440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4440u;
label_3b4440:
    // 0x3b4440: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3b4440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x3b4444: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B4444u;
    SET_GPR_U32(ctx, 31, 0x3B444Cu);
    ctx->pc = 0x3B4448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4444u;
    // 0x3b4448: 0x8e04aee8  lw          $a0, -0x5118($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B4444u, 0x3B444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B444Cu;
label_3b444c:
    // 0x3b444c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B444Cu;
    {
        const bool branch_taken_0x3b444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B444Cu;
        // 0x3b4450: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b444c) {
            ctx->pc = 0x3B4480u;
            goto label_3b4480;
        }
    }
    ctx->pc = 0x3B4454u;
label_3b4454:
    // 0x3b4454: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3b4454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4458: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4458u;
    SET_GPR_U32(ctx, 31, 0x3B4460u);
    ctx->pc = 0x3B445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4458u;
    // 0x3b445c: 0x8e04aee8  lw          $a0, -0x5118($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4458u, 0x3B4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4460u;
label_3b4460:
    // 0x3b4460: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3b4460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b4464: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b4468: 0x8e04aee8  lw          $a0, -0x5118($s0)
    ctx->pc = 0x3b4468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946536)));
    // 0x3b446c: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x3b446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x3b4470: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3b4470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x3b4474: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B4474u;
    SET_GPR_U32(ctx, 31, 0x3B447Cu);
    ctx->pc = 0x3B4478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4474u;
    // 0x3b4478: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B4474u, 0x3B447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B447Cu;
label_3b447c:
    // 0x3b447c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b447cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4480:
    // 0x3b4480: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3b4480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3b4484: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x3b4484u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3b4488: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3b4488u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b448c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3b448cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b4490: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3b4490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b4494: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b4494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b4498: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b4498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b449c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b449cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b44a0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b44a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b44a4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b44a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b44a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B44A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44A8u;
        // 0x3b44ac: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B44A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B44B0u;
}
